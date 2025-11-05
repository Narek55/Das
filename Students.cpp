#include <iostream>
using namespace std;

struct Student {
    char name[10];
    int age;
    float avg;
};

int main() {
    Student students[5];

    for(int i = 0; i < 5; i++) {
        cout << "Nermucel anun usanox hamar " << i+1 << " i hamar" << ": ";
        cin >> students[i].name;

        cout << "Nermucel tariq usanox hamar " << i+1 << " i hamar" << ": ";
        cin >> students[i].age;

        cout << "Nermucel mijin gnahatakan usanox hamar " << i+1 << " i hamar" << ": ";
        cin >> students[i].avg;

        cout << endl;
    }

    for(int i = 0; i < 5 - 1; i++) {
        for(int j = 0; j < 5 - i - 1; j++) {
            if(students[j].avg < students[j+1].avg) {
                Student temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }

    Student oldest = students[0];
    for(int i = 1; i < 5; i++) {
        if(students[i].age > oldest.age) {
            oldest = students[i];
        }
    }

    cout << "--- Usanoxner yst mijin gnahatakani ---" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Anun: " << students[i].name 
             << ", Tariq: " << students[i].age 
             << ", Avg: " << students[i].avg << endl;
    }
    cout << ' ' << endl;
    cout << "-- Amenamec usanox --" << endl;
    cout << "Anun: " << oldest.name 
         << ", Tariq: " << oldest.age 
         << ", Avg: " << oldest.avg << endl;

    return 0;
}
