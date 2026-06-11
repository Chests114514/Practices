#include <iostream>
#include <random>
#include <chrono>

void welcome();
void clear();
time_t gettime();
int gamerun();
void introduction();
void log(time_t time, int type, std::string text, bool lb);
int card(int player);

class makelog {
        public:
        time_t time = gettime();
        int type;
        std::string text;
};

int main() {
        using namespace std;

        clear();
        welcome();
        gamerun();
        return 0;
}

int gamerun() {
        using namespace std;

        int player;
        cout << "Player Count(min.2 max.4): ";
        cin >> player;
        if (player == 2) {
                char name1[30];
                char name2[30];

                cout << "Player 1: ";
                cin >> name1;
                cout << "Player 2: ";
                cin >> name2;
        }
        if (player == 3) {
                char name1[30];
                char name2[30];
                char name3[30];

                cout << "Player 1: ";
                cin >> name1;
                cout << "Player 2: ";
                cin >> name2;
                cout << "Player 3: ";
                cin >> name3;
        }
        if (player == 4) {
                char name1[30];
                char name2[30];
                char name3[30];
                char name4[30];

                cout << "Player 1: ";
                cin >> name1;
                cout << "Player 2: ";
                cin >> name2;
                cout << "Player 3: ";
                cin >> name3;
                cout << "Player 4: ";
                cin >> name4;
        }

        clear();
        bool skip;
        cout << "Want to skip introductions?(0 for no; 1 for yes) ";
        cin >> skip;

        if (skip == false) { introduction(); }

        cout << "Game Starting!\n\n";

        int ret;
        do {
                ret = card(player);
        } while (ret != 0);

        return 0;
}

void log(time_t time, int type, std::string text, bool lb) {
        using namespace std;

        cout << "[" << time << "]";
        if (type == '0') {
                char typeo[5] = "INFO\0";
        }
        if (type == '1') {
                char typeo[5] = "TURN\0";
        }
        cout << " [" << typeo[] << "]";
        cout << " : " << text;
        if (lb == true) {
                cout << endl;
        }
}

void welcome() {
        using namespace std;

        cout << " --------------------------------------" << endl;
        cout << "|         B  A  R  L  I  A  R          |" << endl;
        cout << " --------------------------------------" << endl;
        cout << "\nWelcome to terminal game\n";
        cout << "BARLIAR\n";
}

void introduction() {
        using namespace std;

        clear();
        cout << "Game Introductions: \n";
        cout << "Every round, system will give one of them: J, Q or K, you need to play cards\n";
        cout << "that you have, you can play cards that follows the letter, or, you can also \n";
        cout << "make a lie, if you make a lie, and next player found out (they can't see the\n";
        cout << "cards that you have played if they don't say you're lying), you need to do a\n";
        cout << "roulette game, otherwise, if you didn't lie, the player who reports you need\n";
        cout << "to do roulette, once if only one player is still surviving, he/she wins. A  \n";
        cout << "round will end automatically when a player does roulette.\n\n";

        cout << "Playing Introductions: \n";
        cout << "In game, every player get 4 cards each round, there are 6 J's Q's K's, and 2\n";
        cout << "Aces, aces can be any card (if you don't have a card that fits, use ace!)\n";
        cout << "When it's your turn to play, you can at most play 4 card, type J, Q or K and\n";
        cout << "press enter, then you play this card, type 'a' and enter to play an ace, \n";
        cout << "type 'e' when you have finished your round but you played less than 4 cards.\n";
        cout << "Also, you can type 'report' to report your upstream is lying.\n\n";
        
        cout << "Important Information: \n";
        cout << "This game is running on local (absolutely not lazy to do a LAN function lol)\n";
        cout << "so remeber to let other players DON'T LOOK AT THE SCREEN when it's not their\n";
        cout << "turn.\n\n\n";

        int finish;
        cout << "Press Enter to finish...";
        cin >> finish;
}

int card(int player) {
        using namespace std;
        if (player == 2) {
                for (int i = 0, i < player, i++) {
                        string text = "Player " + to_string(i + 1);
                        bool lb = 1;
                        log(gettime(), '0', text, lb);
                        char play[4];

                        for (int j = 0, j < 4, j++) {
                                text = "Play " + to_string(j + 1) + ": ";
                                lb = 0;
                                log(gettime(), '1', text, lb);
                                char playI;
                                cin >> playI;
                                if (playI == 'e') {
                                        break;
                                }
                                playI = play[j];
                        }
                }
        }
        return 0;
}

time_t gettime() {
        auto now = std::chrono::system_clock::now();
        auto timestamp = std::chrono::system_clock::to_time_t(now);
        return timestamp;
}

void clear() {
        std::cout << "\033[2J\033[1;1H";
}