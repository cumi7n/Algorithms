#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
    deque<int> deck; // Создаем дек

    string command;
    int value;

    while (true) {
        cin >> command;

        if (command == "push_back") {
            cin >> value;
            deck.push_back(value);
            cout << "ok" << endl;
        } else if (command == "push_front") {
            cin >> value;
            deck.push_front(value);
            cout << "ok" << endl;
        } else if (command == "pop_back") {
            if (!deck.empty()) {
                cout << deck.back() << endl;
                deck.pop_back();
            } else {
                cout << "error" << endl;
            }
        } else if (command == "pop_front") {
            if (!deck.empty()) {
                cout << deck.front() << endl;
                deck.pop_front();
            } else {
                cout << "error" << endl;
            }
        } else if (command == "front") {
            if (!deck.empty()) {
                cout << deck.front() << endl;
            } else {
                cout << "error" << endl;
            }
        } else if (command == "back") {
            if (!deck.empty()) {
                cout << deck.back() << endl;
            } else {
                cout << "error" << endl;
            }
        } else if (command == "size") {
            cout << deck.size() << endl;
        } else if (command == "clear") {
            deck.clear();
            cout << "ok" << endl;
        } else if (command == "exit") {
            cout << "bye" << endl;
            break;
        }
    }

    return 0;
}