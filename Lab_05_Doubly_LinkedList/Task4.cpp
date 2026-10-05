#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string song;
    Node* next;

    Node(string name) {
        song = name;
        next = nullptr;
    }
};

class Playlist {
private:
    Node* head;

public:
    Playlist() {
        head = nullptr;
    }

    void addSong(string song) {
        Node* newNode = new Node(song);

        if (head == nullptr) {
            head = newNode;
            newNode->next = head;
        } else {
            Node* current = head;

            while (current->next != head) {
                current = current->next;
            }

            current->next = newNode;
            newNode->next = head;
        }
    }

    void displayOnce() {
        if (head == nullptr) {
            return;
        }

        Node* current = head;

        cout << "Playlist:" << endl;

        do {
            cout << current->song << endl;
            current = current->next;
        } while (current != head);
    }

    void playTwoRounds() {
        if (head == nullptr) {
            return;
        }

        Node* current = head;

        cout << "\nPlaying Playlist for 2 Complete Rounds:" << endl;

        for (int i = 0; i < 10; i++) {
            cout << current->song << endl;
            current = current->next;
        }
    }
};

int main() {
    Playlist playlist;

    playlist.addSong("Shape of You");
    playlist.addSong("Believer");
    playlist.addSong("Perfect");
    playlist.addSong("Faded");
    playlist.addSong("Counting Stars");

    playlist.displayOnce();
    playlist.playTwoRounds();

    return 0;
}
