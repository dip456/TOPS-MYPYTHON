//private inheritance
#include <iostream>
using namespace std;

class Base {
  private:
    int p = 1;

  protected:
    int pr = 2;

  public:
    int pub = 3;

    // function to access private member
    int getP() {
      return p;
    }
};

class PrivateDerived : private Base {
  public:
    // function to access protected member from Base
    int getProt() {
      return pr;
    }

    // function to access private member
    int getPub() {
      return pub;
    }
};

int main() {
  PrivateDerived object1;
  cout << "Private cannot be accessed." << endl;
  cout << "Protected = " << object1.getProt() << endl;
  cout << "Public = " << object1.getPub() << endl;
  return 0;
}