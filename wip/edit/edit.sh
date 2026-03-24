#!/bin/bash

set -ero pipefail

# Source libs
source "$HOME/lib/edit/lib/screen.sh"
source "$HOME/lib/edit/lib/input.sh"
source "$HOME/lib/edit/lib/buffer.sh"
source "$HOME/lib/edit/lib/file.sh"

# Global variable
declare -g cursor_row=0
declare -g cursor_col=0
declare -g screen_rows
declare -g screen_cols
declare -g modified=false
declare -g filename=""
declare -g status_msg=""

main() {
	# Initialize
	echo "Initalizing..."
	initScreen
	getTerminalSize

	# Handle command arguments
	echo "Handling Arguments..."
	if [[ $# -gt 0 ]]; then
		filename="$1"
		loadFile "$filename"
	fi

	# Main loop
	while true; do
		drawScreen
		processInput
	done
}

cleanup() {
	clearScreen
	showCursor
	exit 0
}

trap cleanup EXIT INT TERM

main "$@"
