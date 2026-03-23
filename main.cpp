#include <iostream>
using namespace std;
int main()
{
    int num, cMax;
    cout << "Insert 10 integers separated by spaces.\n";
    for (int i=0; i<10; i++){
        cin >> num;
        if (i==0 or num>cMax){
            cMax=num;
        }
    }
    cout << "The max value is: " << cMax << endl;
    return 0;
}
