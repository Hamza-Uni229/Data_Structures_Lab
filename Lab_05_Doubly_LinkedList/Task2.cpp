#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string image;
    Node* prev;
    Node* next;

    Node(string name) {
        image = name;
        prev = nullptr;
        next = nullptr;
    }
};

class ImageGallery {
private:
    Node* head;
    Node* tail;

public:
    ImageGallery() {
        head = nullptr;
        tail = nullptr;
    }

    void addImage(string image) {
        Node* newNode = new Node(image);

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

        cout << "Images (First to Last):" << endl;

        while (current != nullptr) {
            cout << current->image << endl;
            current = current->next;
        }
    }

    void displayBackward() {
        Node* current = tail;

        cout << "\nImages (Last to First):" << endl;

        while (current != nullptr) {
            cout << current->image << endl;
            current = current->prev;
        }
    }

    void demonstrateNavigation() {
        Node* current = head;

        cout << "\nMoving Forward:" << endl;

        while (current != nullptr) {
            cout << current->image << endl;
            current = current->next;
        }

        current = tail;

        cout << "\nMoving Backward:" << endl;

        while (current != nullptr) {
            cout << current->image << endl;
            current = current->prev;
        }
    }
};

int main() {
    ImageGallery gallery;

    gallery.addImage("Nature.jpg");
    gallery.addImage("Mountain.jpg");
    gallery.addImage("Beach.jpg");
    gallery.addImage("Football.jpg");
    gallery.addImage("Family.jpg");

    gallery.displayForward();
    gallery.displayBackward();
    gallery.demonstrateNavigation();

    return 0;
}
