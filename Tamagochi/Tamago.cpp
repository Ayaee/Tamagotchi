#include <iostream>
#include <string>
#include <windows.h>
#include "Tamago.h"

using namespace std;

void z() { Sleep(100); } //TEST
void z2() { Sleep(210); }
void z3() { Sleep(900); }
void clearscreen() { for (int i = 0; i < 100; i++) { cout << ""; } }


/*Tamago::Tamago() //TEST
{
    vie = 20;
}

void Tamago::

    void set_vie(int vie2) 
    {
        vie = vie2;
    }

    int get_vie() 
    {
        return vie;
    }

    void mod_vie(int type) 
    {
        int vie;
        vie = get_vie();

        if (type == 1) 
        { 
            vie = vie - 2;
        }
        else if (type == 2) 
        { 
            vie = vie + 2;
        }
        set_vie(vie);
    }*/


    void play() {
        string tama = "(^.w.^)";
        int vi;
        vi = get_vie();
        if (vi <= 0) {
            cout << "Il est trop faible pour jouer .. Nourrisez le !";
            z3();
        }
        else {
            for (int i = 0; i < 8; i++) {
                cout << "    ";
                z();
                for (int j = 0; j < i; j++) {
                    cout << tama;
                    z();
                    if (system("CLS")) system("clear");
                }
            }
            mod_vie(1);
        }
    }

    /*void surprise() { //TEST
        string tama = "(^.w.^)";
        string tama2 = "(^owo^)";

        for (int i = 0; i < 6; i++) {
            cout << tama;
            z();
            if (system("CLS")) system("clear");
            z();
            cout << " ";
            cout << tama2;
            z2();
            if (system("CLS")) system("clear");
            cout << " ";

        }
    }*/

    void eat() {
        string tama = "(^.w.^) ooo";
        string tama2 = "(^.0.^)  oo";
        string tama3 = "(^.w.^)   o";

        for (int i = 0; i < 6; i++) {
            cout << tama;
            z2();
            z2();
            if (system("CLS")) system("clear");
            z();
            cout << " ";
            cout << tama2;
            z2();
            z2();
            if (system("CLS")) system("clear");
            cout << " ";
            cout << tama3;
            z2();
            z2();
            if (system("CLS")) system("clear");
            cout << " ";

        }
        mod_vie(2);
    }

    void talk(string parle) {
        //string parle
        string tamadit = "Test 1\n";
        string tamadit2 = "Test 2\n";
        string tamadit3 = "Test 3\n";

        int count = 0;

        //repliques
        while (parle != "au revoir") {
            cin >> parle;
            int value = rand() % 100;
            if (value < 25) {
                cout << tamadit;
            }
            else if (value > 25 && value < 50) {
                cout << tamadit2;
            }
            else if (value < 100 && value>50) {
                cout << tamadit3;
            }
            else {
                cout << tamadit;
            }
            if (parle == "coucou") {
                cout << "Tu m'as manqué !\n";
            }
            if (yousay == "trop chou") {
                cout << ">.w.<\n";
            }
            /*if (yousay == "je t'aime") { //TEST
                Tamago tamago;
                tamago.surprised();
            }*/
            count++;
        }
    }


