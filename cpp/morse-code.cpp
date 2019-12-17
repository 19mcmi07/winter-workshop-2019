#include <iostream>
#include <fstream>
using namespace std;

string morseEncode(char s) {
    switch(s) {
        case ' ':
            return "   ";
        case '\n':
            return "   ";
        case '\t':
            return "   ";
        case 'a':
            return ".-";
        case 'b':
            return "-...";
        case 'c':
            return "-.-.";
        case 'd':
            return "-..";
        case 'e':
            return ".";
        case 'f':
            return "..-.";
        case 'g':
            return "--.";
        case 'h':
            return "....";
        case 'i':
            return "..";
        case 'j':
            return ".---";
        case 'k':
            return "-.-";
        case 'l':
            return ".-..";
        case 'm':
            return "--";
        case 'n':
            return "-.";
        case 'o':
            return "---";
        case 'p':
            return ".--.";
        case 'q':
            return "--.-";
        case 'r':
            return ".-.";
        case 's':
            return "...";
        case 't':
            return "-";
        case 'u':
            return "..-";
        case 'v':
            return "..-";
        case 'w':
            return ".--";
        case 'x':
            return "-..-";
        case 'y':
            return "-.--";
        case 'z':
            return "--..";
        case '1':
            return ".----";
        case '2':
            return "..---";
        case '3':
            return "...--";
        case '4':
            return "....-";
        case '5':
            return ".....";
        case '6':
            return "-....";
        case '7':
            return "--...";
        case '8':
            return "---..";
        case '9':
            return "----.";
        case '0':
            return "-----";
        case '.':
            return ".-.-.-";
        case ',':
            return "--..--";
        case '?':
            return "..--..";
        default:
            return "";
    }
}

int main() {
    ifstream fin;
    ofstream fout;
    fin.open("./english-text.txt", ios::in);
    fout.open("./morse-code.txt", ios::out);
    char ch;
    fin.get(ch);
    while(!fin.eof()) {
        fout << morseEncode(ch);
        fout << ' ';
        fin.get(ch);
    }
    fin.close();
    fout.close();
    return 0;
}