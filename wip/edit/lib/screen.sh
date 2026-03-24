#!/bin/bash

# Terminal control sequence
readonly ESC=$'\033'
readonly cursorSave="${ESC}[s"
readonly cursorRestore="${ESC}[u"
readonly clear_line="${ESC}[2K"
readonly clear_screen="${ESC}[2J"
readonly cursorHide="${ESC}[?25l"
readonly cursorShow="${ESC}[?25h"
readonly cursorMove="${ESC}[%d;%dH"
readonly videoReverse="${ESC}[7m"
readonly videoNormal="${ESC}[0m"

# Color define
readonly colorBlack="0"
readonly colorRed="1"
readonly colorGreen="2"
readonly colorYellow="3"
readonly colorBlue="4"
readonly colorMagenta="5"
readonly colorCyan="6"
readonly colorWhite="7"

initScreen() {
	# Save current terminal settings
	stty -echo -icanon min 1 time 0
	printf "%s" "cursorHide"
}

clearScreen() {
	printf "%s" "$clear_screen"
}

show_cursor() {
	printf "%s" "$cursorShow"
	stty echo icanon
}

getTerminalSize() {
	# Get terminal size with ANSI
	printf "%s" "${ESC}[18t"
	IFS=";" read -r -d t -a size < <(printf "%s" "${ESC}[18t")
	screen_rows="${size[1]}"
	screen_cols="${size[2]}"
}

drawStatusLine() {
	# Save cursor location
	printf "%s" "$cursorSave"

	# Move to state line
	printf "${cursorMove}" "$screen_rows" 1

	# Display status bar
	printf "%s" "$videoReserve"

	local status=""
	if [[ -n "$filename" ]]; then
		status+=" $(basename "$filename")"
		else
			status+=" [No Name]"

	fi
	
}
