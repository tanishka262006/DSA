#include<iostream> 
#include <string> 
 #include<stdlib.h>
using namespace std; 
 
class Song { 
private: 
    string title; 
    double duration; 
    Song* next; 
 
public: 
    Song(const string& t, double d) : title(t), duration(d), next(NULL) {} 
 
    void setNext(Song* n) { next = n; } 
    Song* getNext() const { return next; } 
 
    string getTitle() const { return title; } 
    double getDuration() const { return duration; } 
}; 
 
class Playlist { 
private: 
    Song* current; 
 
public: 
    Playlist() : current(NULL) {} 
 
    // Add a new song 
    void addSong(const string& title, double duration) { 
        Song* newSong = new Song(title, duration); 
        if (!current) { 
            current = newSong; 
            current->setNext(current); 
        } else { 
            Song* temp = current; 
            while (temp->getNext() != current) 
                temp = temp->getNext(); 
 
            temp->setNext(newSong); 
            newSong->setNext(current); 
        } 
        cout << "Added: " << title << " (" << duration << " mins)\n"; 
    } 
 
    // Delete a song by title 
    void deleteSong(const string& title) { 
        if (!current) { 
            cout << "Playlist is empty.\n"; 
 
 
            return; 
        } 
 
        Song* temp = current; 
        Song* prev = NULL; 
 
        do { 
            if (temp->getTitle() == title) 
                break; 
            prev = temp; 
            temp = temp->getNext(); 
        } while (temp != current); 
 
        if (temp->getTitle() != title) { 
            cout << "Song not found.\n"; 
            return; 
        } 
 
        if (temp == current && temp->getNext() == current) { 
            // Only one song 
            delete temp; 
            current = NULL; 
        } else { 
            if (temp == current) 
                current = current->getNext(); 
 
            if (prev) { 
                prev->setNext(temp->getNext()); 
            } else { 
                // Deleting the first song, need to update last's next 
                Song* last = current; 
                while (last->getNext() != temp) 
                    last = last->getNext(); 
                last->setNext(temp->getNext()); 
            } 
 
            delete temp; 
        } 
 
        cout << "Deleted: " << title << endl; 
    } 
 
    // Move to next song 
    void nextSong() { 
        if (!current) { 
            cout << "Playlist is empty.\n"; 
            return; 
        } 
        current = current->getNext(); 
        cout << "Now playing: " << current->getTitle() 
             << " (" << current->getDuration() << " mins)\n"; 
    } 
 
    // Display the full playlist 
    void displayPlaylist() { 
        if (!current) { 
            cout << "Playlist is empty.\n"; 
            return; 
        } 
  
 
 
        cout << "\n=== Playlist ===\n"; 
        Song* temp = current; 
        do { 
            cout << temp->getTitle() << " (" << temp->getDuration() << " mins)\n"; 
            temp = temp->getNext(); 
        } while (temp != current); 
        cout << "================\n"; 
    } 
 
    // Destructor to free memory 
    ~Playlist() { 
        if (!current) return; 
 
        Song* temp = current->getNext(); 
        while (temp != current) { 
            Song* toDelete = temp; 
            temp = temp->getNext(); 
            delete toDelete; 
        } 
        delete current; 
        current = NULL; 
    } 
}; 
 
// Main menu 
int main() { 
    Playlist playlist; 
    int choice; 
    string title; 
    double duration; 
 
    do { 
        cout << "\n--- Music Playlist Menu ---\n"; 
        cout << "1. Add Song\n"; 
        cout << "2. Delete Song\n"; 
        cout << "3. Next Song\n"; 
        cout << "4. Display Playlist\n"; 
        cout << "5. Exit\n"; 
        cout << "Enter your choice: "; 
        cin >> choice; 
        cin.ignore(); // Clear newline 
 
        switch (choice) { 
            case 1: 
                cout << "Enter song title: "; 
                getline(cin, title); 
                cout << "Enter duration (in minutes): "; 
                cin >> duration; 
                playlist.addSong(title, duration); 
                break; 
            case 2: 
                cout << "Enter song title to delete: "; 
                getline(cin, title); 
                playlist.deleteSong(title); 
                break; 
            case 3: 
                playlist.nextSong(); 
                break; 
 
 
            case 4: 
                playlist.displayPlaylist(); 
                break; 
            case 5: 
                cout << "Exiting playlist...\n"; 
                break; 
            default: 
                cout << "Invalid choice. Try again.\n"; 
        } 
 
    } while (choice != 5); 
 
    return 0; 
} 
 
//OUTPUT --- Music Playlist Menu --- 
//1. Add Song 
//2. Delete Song 
//3. Next Song 
//4. Display Playlist 
//5. Exit 
//Enter your choice: 1 
//Enter song title: Imagine 
//Enter duration (in minutes): 3.5 
//Added: Imagine (3.5 mins) 
//Enter your choice: 1 
//Enter song title: Hey Jude 
//Enter duration (in minutes): 4.1 
//Added: Hey Jude (4.1 mins) 
//Enter your choice: 4 
//Imagine (3.5 mins) 
//Hey Jude (4.1 mins) 
//Enter your choice: 3 
//Now playing: Hey Jude (4.1 mins) 
//Enter your choice: 2 
//Enter song title to delete: Imagine 
//Deleted: Imagine
