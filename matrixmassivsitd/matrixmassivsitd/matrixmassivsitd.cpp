
#include <iostream>
using namespace std;
#include <cstdlib>

int main()
{
    string m[20][20];
    string h = "o";
    int x = 0;
    int y = 0;
    string answ;
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            m[i][j] = ".";
        }
    }
    
    while (true) {
        
        m[y][x] = h;
        system("cls");
        cout << "Game space:\n";
        for (int i = 0; i < 20; i++) {
            for (int j = 0; j < 20; j++) {
                cout << m[i][j] << " ";

            }
            cout << endl;
        }
        cout << "A-left, D-right, W-up, S-down" << endl;
        cout << "y:"<< y << " " << "x:" << x << " " << endl;
        cin >> answ;
        if (answ == "A" || answ == "a" || answ == "ф" || answ == "Ф") {
            if (x < 0) {
                x = 0;
            }
            else if (x != 0) {
                m[y][x] = ".";
                x--;
            }
        }
        else if (answ == "D" || answ == "d" || answ == "в" || answ == "В") {
            if (x > 19) {
                x = 19;
            }
            else if(x != 19) {
                m[y][x] = ".";
                x++;
            }
        }
        else if (answ == "W" || answ == "w" || answ == "ц" || answ == "Ц") {
            

            if (y < 0) {
                y = 0;
            }
            else if (y != 0) {
                m[y][x] = ".";
                y--;
            }
        }
        else if (answ == "S" || answ == "s" || answ == "ы" || answ == "Ы") {
            if (y > 19) {
                y = 19;
            }
            else if (y != 19) {
                m[y][x] = ".";
                y++;
            }
        }
        



    }
    


    
    
        
}
