#include "bits\stdc++.h"
#include<conio.h>
using namespace std;

class student {
    int rno,reg_no;
public:

    void getnumber() {
        cout << "Enter Roll No:";
        cin>>rno;

        cout << "\n\nEnter your registration no. : ";
        cin >> reg_no;
    }

    void putnumber() {
        cout << "\n\n\tRoll No: " << rno << "\n";
        cout << "\n\n Reg. No.: " << reg_no;
    }
};

class test : virtual public student {
public:
    int part1, part2;

    void getmarks() {
        cout << "Enter Marks\n";
        cout << "Part1: ";
        cin>>part1;
        cout << "Part2: B";
        cin>>part2;
    }

    void putmarks() {
        cout << "\n\tMarks Obtained\n";
        cout << "\n\tPart1: " << part1;
        cout << "\n\tPart2: " << part2;
    }
};

class sports : public virtual student {
public:
    int score;

    void getscore() {
        cout << "\n\nEnter Sports Score: ";
        cin>>score;
    }

    void putscore() {
        cout << "\n\tSports Score is: " << score;
    }
};

class result : public test, public sports {
    int total;
public:

    void display() {
        total = part1 + part2 + score;
        putnumber();
        putmarks();
        putscore();
        cout << "\n\tTotal Score:" << total;
    }
};

int main() {
    result obj;
    obj.getnumber();
    obj.getmarks();
    obj.getscore();
    obj.display();
    getch();

    return 0;
}