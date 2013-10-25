#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

void SzeneTod();
void SzeneLichtung();

static string txtWald = "Das Haus gefaellt dir nicht also gehst du wieder in den  dunklen Wald... Die Eulen rufen, die Woelfe heulen und du siehst zwei Augen im Gebuesch. Was ist das fragst du dich , doch da kommt es schon heraus gesprungen und greift dich an. Ein Wolf!!! Was tust du? [W]: Weglaufen [V]: Dein Messer nehmen und dich verteidigen";

static string txtLichtung = "Endlich bist du aus diesem dunklen gruseligen Wald heraus. Auf der Lichtung vor dir steht ein heruntergekommenes Haus. Ob da noch jemand wohnt? Wahrscheinlich nicht. Was tust du? [E]: zum Eingang gehen [U]: das Haus umrunden  [W]: zurück in den Wald gehen";

static string txtEingang = "Okay. Du traust dich zum Eingang zu gehen. Doch dort siehst du das die Tür veriegelt ist. Was tust du? [Z]: zurueck gehen [A]: Tuer aufbrechen ";

void SzeneHinten(){
	//cout << txtHinten<<endl;
	
}

void SzeneWald(){
	
	cout << txtWald<<endl;
	char select;
	cin >> select;
	switch(select){
		case 'W':
			SzeneLichtung();
		case 'V':
			SzeneTod();
	}
	
}

void SzeneEingang(){
	
	cout << txtEingang<<endl;
	char select;
	cin >> select;
	switch(select){
		case 'Z':
			SzeneLichtung();
		case 'A':
			SzeneTod();
	}
	
}

void SzeneLichtung(){
	cout << txtLichtung << endl;
	char select;
	cin >> select;
	switch(select){
		case 'W':
			SzeneWald();
		case 'E':
			SzeneEingang();
		case 'U':
			SzeneHinten();
	}
	
	
}
void SzeneTod(){
	cout << "Du bist gestorben!!!! Willst du es nochmal versuchen?(y/n)";
	char select;
	cin >> select;
	switch(select){
		case 'y':
			SzeneLichtung();
		case 'n':
			break;
	}
}



int main(){
	SzeneLichtung();
	return 0;
}
