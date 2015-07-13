#include <iostream>

using namespace std;

int main()
{
    int x,fact=1 ;

    cout << "Give the count: ";
    cin >> x;

        for (int i =x; i>=1;i--){
            fact = fact* i;

        }
cout << "factorial: "<< fact << endl;
  return 0;
}
