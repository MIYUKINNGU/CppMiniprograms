#include <iostream>

int main() {
    int elif1 = 0
    int elif2 = 0
    int elif3 = 0
    char ans = '\0'
    while (1) {
        cout << "あなたはツイ廃ですか？y/N:";
        cin >> ans;
        if (ans == 'y' && ans == 'Y') {
            cout << "インターネットやめろ\n";
            break;
        }
        else if (ans == 'N') {
            if (elif1 <= 9) {
                cout << "嘘つけ\n";
                elif++;
            }
            else
                cout << "現実みろ^^\n";
        }
        else if (ans == 'n') {
            if (elif2 <= 9) {
                cout << "Please enter N instead of n\n";
                elif2++;
            }
            else
                cout << "Nだっつってんだろ！！\n";
        }
        else {
            if (elif3 <= 19) {
                cout << "yかNって言ってんだろ\n";
                elif3++;
            }
            else if (elif3 <= 29) {
                cout << "答えろ\n";
                elif3++;
            }
            else if (elif3 <= 99) {
                cout << "...\n";
                elif3++;
            }
            else {
                cout << "お前の勝ちだ\n";
                break;
            }
        }
    }
    cin >> ans;
    return 0;
}
