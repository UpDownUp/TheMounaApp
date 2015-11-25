/* Readme
Mouna.cpp
Written by UpDownUp
Version 0.1.1

Changelog:
 	0.1:
 	Initial release
	0.1.1:
	Added help dialog and license information
	Fixed issue with .dll files
(Realistic) To do:
	Get specific messages from Mouna for each flag
	somehow reduce the redundancy level of check() statements
	case sensitivity, somehow bardo
	see if program can be made perfectly loop-able
*/

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

string postget();
bool check(string msg);
void help();

int main() {
	string msg = "0";

	cout << "Send a message to Mouna! Or press h for help." << endl << "> ";
	getline(cin, msg);
	
	{
	if (msg == "h") {
			help();}
		else {
			check(msg);}
	}
	
	{
	if (check(msg) == true) {
			cout << "I regret to inform you that Mouna does not regret to inform you that she would like you to fuck off." << endl;}
		else {
			cout << "Hi. My name is Mouna and I immensely enjoyed your delicious and satisfying message. We should hang out sometime." << endl;}
	}
	cout << endl << "---" << endl << "Official Mouna \"\"app\"\" v0.1, written by UpDownUp. Android version coming in 2018." << endl;
	
return 0;}

bool check(string msg) {
	bool pissed = false;
	
	size_t rr_test = msg.find("reverse racism");
		if (rr_test != string::npos) {pissed = true;}
	
	size_t fn_test = msg.find("feminazi");
		if (fn_test != string::npos) {pissed = true;}
	
	size_t nsb_test = msg.find("not sexist but");
		if (nsb_test != string::npos) {pissed = true;}
	
	size_t nrb_test = msg.find("not racist but");
		if (nrb_test != string::npos) {pissed = true;}
	
	size_t alm_test = msg.find("all lives matter");
		if (alm_test != string::npos) {pissed = true;}
	
	size_t msm_test = msg.find("meninis");
		if (msm_test != string::npos) {pissed = true;}

return pissed;}

string postget() {
	string msg = "0";

	cout << "Send a message to Mouna ...pls" << endl << "> ";
	getline(cin, msg);
	cin.ignore(1,'p'); 
	
return msg;
}

void help() {
	char choice;
	
	cout << "Q: How to use: " << endl << "A: Type a message and let the magic happen." << endl;
	cout << "Q: License: " << endl << "A: The Unlicense (no that's what it's actually called). If - god forbid - you see something of value in this shitware and want to reuse it, feel free to grab the source code at http://github.com/UpDownUp/TheMounaApp." << endl;
	cout << "Q: Why does Mouna like me so much even when I say really stupid things?" << endl << "A: You see, Mouna loves everyone by default. It's only a specific set of words that turns that upside down." << endl;
	cout << "Q: I'm wondering something else/I want to send you a (suggestion/love letter/death threat). Where can I reach you?" << endl << "A: If you're not Mouna, see the link in the license information. If you are, I dunno like, text me or some shit." << endl << endl;
	
	cout << "Press p to return to (actually reset, but no matter) the program, or q to quit." << endl;
	cin >> choice;
	
	{
	if (choice == 'p') {
		postget();}
	else if (choice == 'q') {
		_Exit(1);}
	}
}
