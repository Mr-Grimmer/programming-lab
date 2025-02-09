#include <iostream>
using namespace std;

class Marks {
protected:
    int roll;
    string name;
    int marks;
public:
    Marks(int r, string n, int m) : roll(r), name(n), marks(m) {}
    int getMarks() { return marks; }
};

class Physics : public Marks {
public:
    Physics(int r, string n, int m) : Marks(r, n, m) {}
};

class Chemistry : public Marks {
public:
    Chemistry(int r, string n, int m) : Marks(r, n, m) {}
};

class Mathematics : public Marks {
public:
    Mathematics(int r, string n, int m) : Marks(r, n, m) {}
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int totalMarks = 0;
    for (int i = 1; i <= n; i++) {
        string name;
        int p, c, m;
        cout << "Enter name and marks in Physics, Chemistry, Mathematics: ";
        cin >> name >> p >> c >> m;

        Physics phy(i, name, p);
        Chemistry chem(i, name, c);
        Mathematics math(i, name, m);

        int total = phy.getMarks() + chem.getMarks() + math.getMarks();
        totalMarks += total;

        cout << "Total marks for " << name << ": " << total << endl;
    }

    cout << "Class average: " << (float)totalMarks / (n * 3) << endl;
    return 0;
}
