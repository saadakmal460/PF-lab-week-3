#include <iostream>
using namespace std;

main(){


int megaByte;
int kiloByte;
int bytes;
int bit;
int conversion;


kiloByte=1024;
bytes=1024;
bit = 8;




cout << "Enter megabytes...... ";
cin >> megaByte;

conversion = megaByte * kiloByte * bytes * bit;

cout << "Number of bits are " <<conversion;



}