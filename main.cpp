#include <iostream>
#include <chrono>
#include <cstring>
#include <cstdlib>
#include <winsock2.h>
#include <conio.h>

using namespace std;

void SetConsoleColor(int textColor, int bgColor) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgColor << 4) | textColor);
}

double performDownloadTest(const char* serverIP, int port) {
    return 100.0;
}

void displayBanner() {
//    SetConsoleColor(15, 1);
    cout << endl << endl;
    cout << "   N   N  EEE   TTT  M   M  OOO  N   N   I   T   OOO  RRR   " << endl;
    cout << "   NN  N  E      T   MM MM  O O  NN  N   I   T   O O  R  R  " << endl;
    cout << "   N N N  EEE    T   M M M  O O  N N N   I   T   O O  RRR   " << endl;
    cout << "   N  NN  E      T   M   M  O O  N  NN   I   T   O O  R  R  " << endl;
    cout << "   N   N  EEE    T   M   M  OOO  N   N   I   T   OOO  R   R " << endl;
    cout << endl;
    SetConsoleColor(7, 0);
}

void showMenu() {
    system("cls");

    displayBanner();

    SetConsoleColor(14, 0);
    cout << "   [1]  Test Download Speed" << endl;
    cout << "   [2]  Ping Test" << endl;
    cout << "   [3]  Traceroute" << endl;
    cout << "   [4]  Show Network Stats" << endl;
    cout << "   [5]  Exit" << endl;
    cout << endl;

    SetConsoleColor(7, 0);

    cout<<" Choice: ";
    char choice = _getch();

    switch (choice) {
        case '1':
        {
            double speed = performDownloadTest("speedtest.server.com", 80);
            SetConsoleColor(10, 0);
            cout << endl << "   Download Speed: " << speed << " Mbps" << endl;
            SetConsoleColor(7, 0);
            break;
        }
        case '2':
            SetConsoleColor(11, 0);
            cout << endl << "   Ping Test functionality coming soon..." << endl;
            SetConsoleColor(7, 0);
            break;
        case '3':
            SetConsoleColor(11, 0);
            cout << endl << "   Traceroute functionality coming soon..." << endl;
            SetConsoleColor(7, 0);
            break;
        case '4':
            SetConsoleColor(11, 0);
            cout << endl << "   Network Stats functionality coming soon..." << endl;
            SetConsoleColor(7, 0);
            break;
        case '5':
            SetConsoleColor(12, 0);
            cout << endl << "   Exiting... Goodbye!" << endl;
            SetConsoleColor(7, 0);
            break;
        default:
            SetConsoleColor(12, 0);
            cout << endl << "   Invalid choice, try again..." << endl;
            SetConsoleColor(7, 0);
            break;
    }

    cout << endl;
    system("pause");
}

int main() {
    showMenu();
    return 0;
}
