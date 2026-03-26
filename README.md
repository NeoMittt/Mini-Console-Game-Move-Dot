# -Mini-Console-Game-Move-Dot
A small console game written in C++ where you can move a symbol around a 20×20 grid using the keys `W`, `A`, `S`, `D`.

## 🚀 How it works
After launching, you’ll see a grid filled with dots.  
The `o` symbol is your player.  
Enter commands to move:

- `W` — up  
- `A` — left  
- `S` — down  
- `D` — right  

You can use either English or Russian letters (`ф`, `в`, `ы`, `ц`).  
After each move, the console clears and the grid is redrawn.

## ⚙️ Features
- 2D array (`20x20`) for the game field  
- `for` and `while` loops for rendering and movement  
- `system("cls")` to clear the console without closing it  
- Conditional statements for handling user input  

## 🧩 Example code
### Filling in the field
```cpp
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
```
### Player management
```сpp
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
```
