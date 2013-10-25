#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

static string txtWald = "Das Haus gefaellt dir nicht also gehst du wieder in den  dunklen Wald... Die Eulen rufen, die Woelfe heulen und du siehst zwei Augen im Gebuesch. Was ist das fragst du dich , doch da kommt es schon heraus gesprungen und greift dich an. Ein Wolf!!! Was tust du? [W]: Weglaufen [V]: Dein Messer nehmen und dich verteidigen";
static 
void SzeneWald(){
	
	cout << txtWald<<endl;
	
	
}

void SzeneEingang(){
	
	//cout << txtEingang<<endl;
	
	
}

void SzeneHaus(){
	//cout << txtHaus << endl;
	char select;
	select = getchar();
	switch(select){
		case 'W':
			SzeneWald();
		case 'E':
			SzeneEingang();
	}
	
	
}



int main(){
	SzeneHaus();
	return 0;
}
