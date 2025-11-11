#include <iostream>
using namespace std;

class Student {
private:
    char firstName[20];
    char lastName[20];
    char gender[10];
    int grades[6];
    double average;

public:
    Student() {
        average = 0;
    }

    ~Student() {}

    void input() {
        cout << "Enter first name: ";
        cin >> firstName;
        cout << "Enter last name: ";
        cin >> lastName;
        cout << "Enter gender: ";
        cin >> gender;

        cout << "Enter 6 grades: " << endl;
        int sum = 0;
        for (int i = 0; i < 6; i++) {
            cin >> grades[i];
            sum += grades[i];
        }
        average = sum / 6.0;
    }

    void output() {
        cout << "Name: " << firstName << " " << lastName
             << ", Gender: " << gender
             << ", Average: " << average << endl;
    }

    double getAverage() {
        return average;
    }

    char* getFirstName() {
        return firstName;
    }
};
// Voronum yst anuni
void searchByName(Student arr[], int n) {
    char name[20];
    cout << "Enter first name to search: ";
    cin >> name;

    int found = 0;
    for (int i = 0; i < n; i++) {
        int same = 1;
        for (int j = 0; name[j] != '\0' || arr[i].getFirstName()[j] != '\0'; j++) {
            if (name[j] != arr[i].getFirstName()[j]) {
                same = 0;
                break;
            }
        }

        if (same == 1) {
            arr[i].output();
            found = 1;
        }
    }

    if (found == 0)
        cout << "Student not found!" << endl;
}

// sort yst mijin gnahatakani
void sortByAverage(Student arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].getAverage() < arr[j + 1].getAverage()) {
                Student temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "\nStudents sorted by average grade (high to low):\n";
    for (int i = 0; i < n; i++) {
        arr[i].output();
    }
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student students[50]; 

    for (int i = 0; i < n; i++) {
        cout << "\n--- Student " << i + 1 << " ---\n";
        students[i].input();
    }

    char command;
    cout << "\nPress F to search by first name\n";
    cout << "Press A to sort by average grade\n";
    cout << "Your choice: ";
    cin >> command;

    if (command == 'F' || command == 'f') {
        searchByName(students, n);
    } else if (command == 'A' || command == 'a') {
        sortByAverage(students, n);
    } else {
        cout << "Invalid choice!\n";
    }

    return 0;
}
