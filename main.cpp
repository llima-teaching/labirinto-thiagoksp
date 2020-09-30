#include <iostream>
#include "Pilha.h"
using namespace std;

template<typename T>
void printlab(T lab) {
    int i, j;
    for (i = 0; i <= 20; i++) {
        for (j = 0; j < 22; j++) {
            cout << *(*(lab + i) + j) << " ";
        }
        cout << ("\n");
    }
}
int main() {
    char lab[20][22] = {
            "X XXXXXXXXXXXXXXXXXXX",
            "X     X     X     X X",
            "XX XX XXXXX X X X   X",
            "X   X X     XXXXX X X",
            "X X X XXXXXXX   X   X",
            "X X   X   X X X   X X",
            "X XXXXX X X   XXXXX X",
            "X X     X XXX  X    X",
            "X X X X X   XX XX XXX",
            "X X XXX X X     X   X",
            "X X X X X XXXXX XX XX",
            "X     X X   X X X   X",
            "X XXXXX XXX X XXX X X",
            "X X       X X   X X X",
            "X   XXX X X XXX X X X",
            "XXX X X X X X X X XXX",
            "X X   X X   X   X   X",
            "X XXX XXXXXXXXX XXX X",
            "X                 X X",
            "XXXXXXXXXXXXXXXXXXX X",
    };
    int x = 0;
    int y = 1;
    Pilha px, py;
    while(lab[19][19] == ' ') {
        lab[x][y] = '*';
        printlab(lab);
        if (lab[x][y + 1] == ' ') {
            y++;
            px.push(x);
            py.push(y);
        } else if (lab[x + 1][y] == ' ') {
            x++;
            px.push(x);
            py.push(y);
        } else if (lab[x][y - 1] == ' ') {
            y--;
            px.push(x);
            py.push(y);
        } else if (lab[x - 1][y] == ' ') {
            x--;
            px.push(x);
            py.push(y);
        } else {
            lab[x][y] = NULL;
            x = px.pop();
            y = py.pop();
        }
    }
    return 0;
}

