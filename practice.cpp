#include <iostream>
using namespace std;

main(){

string name;
float inter;
float ecat;
float interWeigthage;
float ecatWeigthage;
float aggregate;

cout << "Enter you name..... ";
cin >> name;

cout << "Marks in inter.... ";
cin >>inter;

cout << "Marks in ecat.... ";
cin >> ecat;

interWeigthage = inter/1100 * 100 * 0.7;
ecatWeigthage = ecat/400 * 100 * 0.3;

aggregate = interWeigthage + ecatWeigthage;
cout << "Your aggregate is: " <<aggregate;


















}