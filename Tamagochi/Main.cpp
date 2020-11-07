#include <iostream>
#include <string>
#include <windows.h>
#include "Pet.h"

using namespace std;


int main() {
    Tamago tamago;
    int ans = 1;
    string ans1;
  


    while (ans != 0) {

        cout << "\n\n\n Que voulez vous faire avec votre petit Tamago?\n\n0-exit\n1-Jouer\n2-Le faire manger\n3-Parler avec lui\n4-Voir sa vie\n";
        cout << "Votre choix: ";
        cin >> ans;

        switch (ans) {
        case 1:
            tamago.play();
            break;
        case 2:
            tamago.eat();
            break;
        case 3: {
            string ans3;
            cout << "Que veux tu lui dire :\n";
            tamago.talk(ans3);
            break;
        }
        case 4: {
            int vi;
            vi = tamago.get_vie();
            cout << vi << "\n";
            z3();
            break;
        }


        default:
            cout << "Action inconnu, veuillez reesayer\n";
            break;
        }
        if (system("CLS")) system("clear");
    } //fin






}