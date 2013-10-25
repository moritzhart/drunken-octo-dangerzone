#include <iostream>

using namespace std;

int main(){
//Variablen Anlegen
int x , x2, y, y2, m, b;
//b= y-(m*x)
//m= (y2-y)/(x2-x)
cout << "===1.Punkt===" << endl;
cout << "x1?" << endl;
cin >> x;
cout << "y1?" << endl;
cin >> y;
cout << "===2.Punkt===" << endl;
cout << "x2?" << endl;
cin >> x2;
cout << "y2?" << endl;
cin >> y2;
cout << "===Ergebnis===" << endl;


//m 
m= (y2-y)/(x2-x);
cout << "m ist gleich: " << m << endl;
b= y-(m*x);
cout << "b ist gleich: " << b << endl;



return 0;
}
