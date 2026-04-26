#include <iostream>
#include<iostream>
#include <iomanip>
#include <cstring>
#ifdef _WIN32
#include <windows.h>
#endif
using namespace std;

int main()
{
    char sel;
    do {
        system("cls");
        string name, fname, surname, school, cl;
        int roll;
        float en, pf, ict, ps, sc, pr, sum, is;
        	#define RED_TEXT     "\033[1;31m"
#define GREEN_TEXT   "\033[1;32m"
#define YELLOW_TEXT  "\033[1;33m"
#define BLUE_TEXT    "\033[1;34m"
#define MAGENTA_TEXT "\033[1;35m"
#define CYAN_TEXT    "\033[1;36m"
#define WHITE_TEXT   "\033[1;37m"
#define RESET_COLOR  "\033[0m"

    // Set color for the ASCII art
    cout << RED_TEXT;
    

    cout << "\t\t\t\t .--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--. \n";
    cout << "\t\t\t\t/ .. \\.. \\.. \\.. \\.. \\.. \\.. \\.. \\.. \\.. \\.. \\.. \\.. \\.. \\.. \\.. \\.. \\.. \\.. \\.. \\.. \\.. \\.. \\.. \\ \n";
    cout << "\t\t\t\t\\ \\/\\ `\\`\\ `\\`\\ `\\`\\ `\\`\\ `\\`\\ `\\`\\ `\\`\\ `\\`\\ `\\`\\ `\\`\\ `\\`\\ `\\`\\ `\\`\\ `\\`\\ `\\`\\ `\\`\\ `\\`\\ `\\`\\ \\/ / \n";
    cout << "\t\t\t\t \\/ /`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'\\/ / \n";
    cout << "\t\t\t\t / /\\                                                                                                / /\\ \n";
    cout << "\t\t\t\t/ /\\ \\  _______ _________          ______   _______  _       _________                              / /\\ \\ \n";
    cout << "\t\t\t\t\\ \\/ / (  ____ \\__   __/|\\     /|(  __  \\ (  ____ )( (    /|\\__   __/                              \\ \\/ / \n";
    cout << "\t\t\t\t \\/ /  | (    \\/   ) (   | )   ( || (  \\  )| (    \\/|  \\  ( |   ) (                                  \\/ / \n";
    cout << "\t\t\t\t / /\\  | (_____    | |   | |   | || |   ) || (__    |   \\ | |   | |                                  / /\\ \n";
    cout << "\t\t\t\t/ /\\ \\ (_____  )   | |   | |   | || |   | ||  __)   | (\\ \\) |   | |                                 / /\\ \\ \n";
    cout << "\t\t\t\t\\ \\/ /       ) |   | |   | |   | || |   ) || (      | | \\   |   | |                                 \\ \\/ / \n";
    cout << "\t\t\t\t \\/ /  /\\____) |   | |   | (___) || (__/  )| (____/\\| )  \\  |   | |                                  \\/ / \n";
    cout << "\t\t\t\t / /\\  \\_______)   )_(   (_______)(______/ (_______/|/    )_)   )_(                                  / /\\ \n";
    cout << "\t\t\t\t/ /\\ \\                                                                                              / /\\ \\ \n";
    cout << "\t\t\t\t\\ \\/ /  _______  _______  _______  _______  _______ _________   _______  _______  _______  ______    \\ \\/ / \n";
    cout << "\t\t\t\t \\/ /  (  ____ )(  ____ \\(  ____ )(  ___  )(  ____ )\\__   __/  (  ____ )(  ___  )(  ____ )(  __  \\    \\/ / \n";
    cout << "\t\t\t\t / /\\  | (    )|| (    \\/| (    )|| (   ) || (    )|   ) (     | (    \\/| (   ) || (    )|| (  \\  )  / /\\ \n";
    cout << "\t\t\t\t/ /\\ \\ | (____)|| (__    | (____)|| |   | || (____)|   | |     | |      | (___) || (____)|| |   ) | / /\\ \\ \n";
    cout << "\t\t\t\t\\ \\/ / |     __)|  __)   |  _____)| |   | ||     __)   | |     | |      |  ___  ||     __)| |   | | \\ \\/ / \n";
    cout << "\t\t\t\t \\/ /  | (\\ (   | (      | (      | |   | || (\\ (      | |     | |      | (   ) || (\\ (   | |   ) |  \\/ / \n";
    cout << "\t\t\t\t / /\\  | ) \\ \\__| (____/\\| )      | (___) || ) \\ \\__   | |     | (____/\\| )   ( || ) \\ \\__| (__/  )  / /\\ \n";
    cout << "\t\t\t\t/ /\\ \\ |/   \\__/(_______/|/       (_______)|/   \\__/   )_(     (_______/|/     \\||/   \\__/(______/  / /\\ \\ \n";
    cout << "\t\t\t\t\\ \\/ /                                                                                              \\ \\/ / \n";
    cout << "\t\t\t\t \\/ /                                                                                                \\/ / \n";
    cout << "\t\t\t\t / /\\ .--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--..--. / /\\ \n";
    cout << "\t\t\t\t/ /\\ \\.. \\.. \\.. \\.. \\.. \\.. \\.. \\.. \\.. \\.. \\.. \\.. \\.. \\.. \\.. \\.. \\.. \\.. \\.. \\.. \\.. \\.. \\.. \\.. \\ \n";
    cout << "\t\t\t\t\\ `\\`\\ `\\`\\ `\\`\\ `\\`\\ `\\`\\ `\\`\\ `\\`\\ `\\`\\ `\\`\\ `\\`\\ `\\`\\ `\\`\\ `\\`\\ `\\`\\ `\\`\\ `\\`\\ `\\`\\ `\\`\\ `\\`\\ `\\`\\ `' / \n";
    cout << "\t\t\t\t `--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'`--'  \n";

  cout << RESET_COLOR;

   // Set color for the ASCII art
    cout << BLUE_TEXT;
       
        
        cout << "Name: ";
        cin.ignore();
        getline(cin, name);
       // cin.ignore();
        cout << "Father's Name: ";
        getline(cin, fname);

        cout << "Surname: ";
        getline(cin, surname);

        cout << "Name of Institute: ";
        getline(cin, school);

        cout << "Enter your Class: ";
        getline(cin, cl);

        cout << "Roll Number: ";
        cin >> roll;

        cout << "Enter marks of English subjects: ";
        cin >> en;

        cout << "Enter marks of Pre Calculus subjects: ";
        cin >> pr;

        cout << "Enter Marks of Programming Fundamentals Subjects: ";
        cin >> pf;

        cout << "Enter marks of ICT Subjects: ";
        cin >> ict;

        cout << "Enter marks of Science subjects: ";
        cin >> sc;

        cout << "Enter marks of Pak Studies subjects: ";
        cin >> ps;

        cout << "Enter marks of Islamic Studies: ";
        cin >> is;

        cout << "\t\t\t\t================================================================================" << endl;
        cout << "\t\t\t\t||                      |   STUDENT REPORT CARD     |                         ||" << endl;
        cout << "\t\t\t\t================================================================================" << endl;
        cout << "\t\t\t\t||                      | " << setw(50) << left<< school << "| ||" << endl;
        cout << "\t\t\t\t================================================================================" << endl;
        cout << "\t\t\t\t||Name:          " << setw(50) << left << name << "           ||" << endl;
        cout << "\t\t\t\t||Father's Name: " << setw(50) << left << fname << "           ||" << endl;
        cout << "\t\t\t\t||Surname:       " << setw(50) << left << surname << "           ||" << endl;
        cout << "\t\t\t\t||Class:         " << setw(50) << left << cl << "           ||" << endl;
        cout << "\t\t\t\t||Roll Number:   " << setw(50) << left << roll << "           ||" << endl;
        cout << "\t\t\t\t================================================================================" << endl;
        cout << "\t\t\t\t||                     | PROGRESS REPORT OF STUDENT|                          ||" << endl;
        cout << "\t\t\t\t================================================================================" << endl;

        sum = pr + en + pf + ict + ps + sc + pr;
        int per = sum * 100 / 700;

        cout << "\t\t\t\t================================================================================" << endl;
        cout << "\t\t\t\t||S.N|SUBJECTS NAME     |Total Marks|        |Obtained marks|                 ||" << endl;
        cout << "\t\t\t\t================================================================================" << endl;
        cout << "\t\t\t\t|| 01 |English          |100        |        | " << setw(15) << left << en << "                ||" << endl;
        cout << "\t\t\t\t|| 02 |Pre Calculus     |100        |        | " << setw(15) << left << pr << "                ||" << endl;
        cout << "\t\t\t\t|| 03 |PF               |100        |        | " << setw(15) << left << pf << "                ||" << endl;
        cout << "\t\t\t\t|| 04 |ICT              |100        |        | " << setw(15) << left << ict << "                ||" << endl;
        cout << "\t\t\t\t|| 05 |Pak Studies      |100        |        | " << setw(15) << left << ps << "                ||" << endl;
        cout << "\t\t\t\t|| 06 |Islamic studies  |100        |        | " << setw(15) << left << is << "                ||" << endl;
        cout << "\t\t\t\t|| 07 |Science          |100        |        | " << setw(15) << left << sc << "                ||" << endl;
        cout << "\t\t\t\t================================================================================" << endl;
        cout << "\t\t\t\t|| Total                |700        |        | " << setw(15) << left << sum << "                ||" << endl;
        cout << "\t\t\t\t================================================================================" << endl;

        if (per < 60) {
            cout << "\t\t\t\t================================================================================" << endl;
            cout << "\t\t\t\t||         " << "      |Grade :FAIL                                                 ||" << endl;
            cout << "\t\t\t\t||Percentage:" << per << "%" << "|=============================================================||" << endl;
            cout << "\t\t\t\t||         " << "      |Remark:IMPROVE                                              ||" << endl;
            cout << "\t\t\t\t================================================================================" << endl;
        }
        else if (per <= 69) {
            cout << "\t\t\t\t================================================================================" << endl;
            cout << "\t\t\t\t||         " << "      |Grade :B                                                    ||" << endl;
            cout << "\t\t\t\t||Percentage:" << per << "%" << "|=============================================================||" << endl;
            cout << "\t\t\t\t||         " << "      |Remark:GOOD                                                 ||" << endl;
            cout << "\t\t\t\t================================================================================" << endl;
        }
        else if (per <= 79) {
            cout << "\t\t\t\t================================================================================" << endl;
            cout << "\t\t\t\t||         " << "      |Grade :A                                                    ||" << endl;
            cout << "\t\t\t\t||Percentage:" << per << "%" << "|=============================================================||" << endl;
            cout << "\t\t\t\t||         " << "      |Remark:BEST                                                 ||" << endl;
            cout << "\t\t\t\t================================================================================" << endl;
        }
        else if (per < 101) {
            cout << "\t\t\t\t================================================================================" << endl;
            cout << "\t\t\t\t||         " << "      |Grade :A-1                                                  ||" << endl;
            cout << "\t\t\t\t||Percentage:" << per << "%" << "|=============================================================||" << endl;
            cout << "\t\t\t\t||         " << "      |Remark:EXCELLENT                                            ||" << endl;
            cout << "\t\t\t\t================================================================================" << endl;
        }
        else {
            cout << "\t\t\t\t================================================================================" << endl;
            cout << "\t\t\t\t|          " << "      |Grade :  ==                                              ||" << endl;
            cout << "\t\t\t\t|Percentage:  ==       |========================================================||" << endl;
            cout << "\t\t\t\t|          " << "      |Remark:  ==                                               ||" << endl;
            cout << "\t\t\t\t================================================================================" << endl;
        }

        cout << "Do You Want To Print Report Card Again? Press Y / N: ";
        cin >> sel;
        
        //Text colour
        cout << RESET_COLOR;
        
        
    } while (sel == 'Y' || sel == 'y');

    return 0;
}
