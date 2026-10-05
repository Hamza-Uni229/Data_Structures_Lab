#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string website;
    Node* prev;
    Node* next;

    Node(string name) {
        website = name;
        prev = nullptr;
        next = nullptr;
    }
};

class BrowserHistory {
private:
    Node* head;
    Node* tail;

public:
    BrowserHistory() {
        head = nullptr;
        tail = nullptr;
    }

    void addWebsite(string website) {
        Node* newNode = new Node(website);

        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void displayForward() {
        Node* current = head;

        cout << "Browser History (First to Last):" << endl;

        while (current != nullptr) {
            cout << current->website << endl;
            current = current->next;
        }
    }

    void displayBackward() {
        Node* current = tail;

        cout << "\nBrowser History (Last to First):" << endl;

        while (current != nullptr) {
            cout << current->website << endl;
            current = current->prev;
        }
    }
};

int main() {
    BrowserHistory history;

    history.addWebsite("Google.com");
    history.addWebsite("YouTube.com");
    history.addWebsite("GitHub.com");
    history.addWebsite("Wikipedia.org");
    history.addWebsite("StackOverflow.com");

    history.displayForward();
    history.displayBackward();

    return 0;
}
