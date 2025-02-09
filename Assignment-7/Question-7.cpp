#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("test.txt");
    if (!file) {
        cout << "File not found!\n";
        return 1;
    }

    int chars = 0, words = 0, lines = 0;
    string word, line;

    while (getline(file, line)) {
        lines++;
        chars += line.length();
    }

    file.clear();
    file.seekg(0, ios::beg);
    while (file >> word) words++;

    cout << "Characters: " << chars << ", Words: " << words << ", Lines: " << lines << endl;

    file.close();
    return 0;
}
