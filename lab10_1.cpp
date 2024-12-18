#include <iostream>
#include <string>
using namespace std;

int main() {
    char grade;
    int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;
    int studentCount = 0;

    cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;

    while (true) {
        cout << "Student [" << (studentCount + 1) << "]: ";
        cin >> grade;

        if (grade == '0') {
            break; // ออกจากลูปเมื่อผู้ใช้อินพุต 0
        }

        if (grade == 'A') {
            countA++;
        } else if (grade == 'B') {
            countB++;
        } else if (grade == 'C') {
            countC++;
        } else if (grade == 'D') {
            countD++;
        } else if (grade == 'F') {
            countF++;
        } else {
            cout << "Wrong input. Please input again." << endl;
            continue; // ข้ามการเพิ่มตัวนับนักศึกษาและวนลูปใหม่
        }

        studentCount++;
    }

    cout << "In total " << studentCount << " students." << endl;
    cout << "A = " << countA << ", B = " << countB << ", C = " << countC << ", D = " << countD << ", F = " << countF << endl;

    return 0;
}
