#include "class.h"

#include <iostream>

using namespace std;

void arya::setValue(const int & value) {
   i = value;
}

int arya::getValue() const {
   return i;
}

int main() {
   arya a;
   const int i = 1;
   a.setValue(i);
   cout << a.getValue();
   return 0;
}
