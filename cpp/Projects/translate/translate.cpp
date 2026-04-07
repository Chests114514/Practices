#include <iostream>
#include <string>
#include <cstdlib>

int main()
{
        using namespace std;

        string langInput;
        string langOutput;
        string langInputCode;
        string langOutputCode;

        cout << "\033[1;32mWelcome to Translate\033[0m" << endl;
        cout << "Input Language:";
        cin >> langInput
        cout << "Output Language:"
        cin >> langOutput

        if (langInput == "Afrikaans") {
                langInputCode = "af";
        }
        if (langInput == "Albanian") {
                langInputCode = "sq";
        }
        if (langInput == "Amharic") {
                langInputCode = "am";
        }
        if (langInput == "Arabic") {
                langInputCode = "ar";
        }
        if (langInput == "Armenian") {
                langInputCode = "hy";
        }
        if (langInput == "Assamese") {
                langInputCode = "as";
        }
        if (langInput == "Aymara") {
                langInputCode = "ay";
        }
        if (langInput == "Azerbaijini") {
                langInputCode = "az";
        }
        if (langInput == "Bambara") {
                langInputCode = "bm";
        }
        if (langInput == "Bashkir") {
                langInputCode = "ba";
        }
        if (langInput == "Basque") {
                langInputCode = "eu";
        }
        if (langInput == "Belarusian") {
                langInputCode = "be";
        }
        if (langInput == "Bengali") {
                langInputCode = "bn";
        }
        if (langInput == "Bhojpuri") {
                langInputCode = "bho";
        }
        if (langInput == "Bosnian") {
                langInputCode = "bs";
        }
        if (langInput == "Bulgarian") {
                langInputCode = "bg";
        }
        if (langInput == "Cantonese") {
                langInputCode = "yue";
        }
        if (langInput == "Catalan") {
                langInputCode = "ca";
        }
        if (langInput == "Cebuano") {
                langInputCode = "ceb";
        }
        if (langInput == "Chichewa") {
                langInputCode = "ny";
        }
        if (langInput == "Chinese Literary") {
                langInputCode = "lzh"
        }
        if (langInput == "Chinese") {
                langInputCode = "zh-CN";
        }
        if (langInput == "Chinese Traditional") {
                langInputCode = "zh-TW";
        }
        if (langInput == "Chuvash") {
                langInputCode = "cv";
        }
        if (langInput == "Corsican") {
                langInputCode = "co";
        }
        if (langInput == "Czech") {
                langInputCode = "cs";
        }
        if (langInput == "Danish") {
                langInputCode = "da";
        }
        if (langInput == "Dari") {
                langInputCode = "prs";
        }
        if (langInput == "Dhiveri") {
                langInputCode = "dv";
        }
        if (langInput == "Dogri") {
                langInputCode = "doi";
        }
        if (langInput == "Dutch") {
                langInputCode = "nl";
        }
        if (langInput == "Eastern Mari") {
                langInputCode = "mhr";
        }
        if (langInput == "English") {
                langInputCode = "en";
        }
        if (langInput == "Esperanto") {
                langInputCode = "eo";
        }
        if (langInput == "Estonian") {
                langInputCode = "et";
        }
        if (langInput == "Ewe") {
                langInputCode = "ee";
        }
        if (langInput == "Faroese") {
                langInputCode = "fo";
        }
        if (langInput == "Fijian") {
                langInputCode = "fj";
        }
        if (langInput == "Filipino") {
                langInputCode = "tl";
        }
        if (langInput == "Finnish") {
                langInputCode = "fi";
        }
        if (langInput == "French") {
                langInputCode = "fr";
        }
        if (langInput == "French Canadian") {
                langInputCode = "fr-CA";
        }
        if (langInput == "Frisian") {
                langInputCode = "fy";
        }
        if (langInput == "Galician") {
                langInputCode = "gl";
        }
        if (langInput == "Georgian") {
                langInputCode = "ka";
        }
        if (langInput == "German") {
                langInputCode = "de";
        }
        if (langInput == "Greek") {
                langInputCode = "el";
        }
        if (langInput == "Guarani") {
                langInputCode = "gn";
        }
        if (langInput == "Gujarati") {
                langInputCode = "gu";
        }
        if (langInput == "Haitian Creole") {
                langInputCode = "ht";
        }
        if (langInput == "Hausa") {
                langInputCode = "ha";
        }
        if (langInput == "Hawaiian") {
                langInputCode = "haw";
        }
        if (langInput == "Hebrew") {
                langInputCode = "he";
        }
        if (langInput == "Hill Mari") {
                langInputCode = "mrj";
        }

        string command = "trans -I " + langInputCode + ":" + langOutputCode
        system (command.c_str())
}