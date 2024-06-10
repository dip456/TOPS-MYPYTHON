#include <iostream>
#include <cstring>
using namespace std;

class AddString {
public:
    char s1[25], s2[25];

    AddString(const char str1[], const char str2[]) {
        strcpy(s1, str1);
        strcpy(s2, str2);
    }

    void operator+() {
        cout << "Concatenation: " << strcat(s1, s2) <<endl;
    }
};

int main() {
    const char str1[] = "DIPAK";
    const char str2[] = "kumar";

    
    AddString a1(str1, str2);

    +a1;

    return 0;
}
