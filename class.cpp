#include <iostream>
using namespace std;

class arya {
  int i = 0;
 public :
  void setValue(const int &value){ i = value;}
  int getValue() const {return i;}
};

int main(){
	arya a;
	const int i = 1;
	a.setValue(i);
	cout << a.getValue();
	return 0;
}
