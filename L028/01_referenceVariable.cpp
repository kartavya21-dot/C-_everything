#include <iostream>
using namespace std;

void update(int& n){
    n++;
}
int main()
{
    /*
    int i = 5;
    
    // creating a reference variable

    int& j = i;
    cout << i << endl;
    i++;
    cout << j << endl;
    j++;
    cout << i << endl;
    */

    int n = 5;
    
    cout << "Before: " << n << endl;
    update(n);
    cout << "After: " << n << endl;
    

    return 0;
}