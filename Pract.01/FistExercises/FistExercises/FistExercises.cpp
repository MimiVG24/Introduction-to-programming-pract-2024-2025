

#include <iostream>
#include <cmath>
#include <math.h>
using namespace std; 

int main()
{
	



}




// task 3
// char helpertext[] = "Give a value to convert to Euro and USD";
	//cout << helpertext << endl; 
	//double inputinlv; 
	//cin >> inputinlv;
	//double inputinEuro;
	//inputinEuro = inputinlv * 1.9558;
	//char levtoeuro[] = "Your value in Euro cents is...";
	//cout << levtoeuro << endl; 
	//cout << inputinEuro << endl; 
	//char levtoUSD[] = "Your value in US dollars is...";
	//cout << levtoUSD << endl; 
	//double inputinUSD;
	//inputinUSD = inputinlv * 1.670;
	//cout << inputinUSD << endl; 

    // task 3 (yassified)
	/*char helpertext[] = "Enter a value to convert to EURO or USD";
	cout << helpertext << endl;
	double inputinlv;
	cin >> inputinlv;
	char helpertext2[] = "Please enter which of the two currencies you would like to convert your value to (in capital letters):";
	cout << helpertext2 << endl;
	const char euro[] = "EURO";
	const char usd[] = "USD";
	char chosencurrency [10];
	cin >> chosencurrency;
	double outputinEU;
	outputinEU = inputinlv * 1.9558;
	if (strcmp(chosencurrency, euro) == 0) { cout << outputinEU << endl; }
	double outputinUSD;
	outputinUSD = inputinlv * 1.670;
	if (strcmp(chosencurrency, usd) == 0) { cout << outputinUSD << endl; }*/

	// task 5 (yassified)
	//char conditiontext[] = "Please enter three values so that they're in ascending order";
	//cout << conditiontext << endl; 
	//
	//while (true) {
	//	double firstvalue;
	//	double secondvalue;
	//	double thirdvalue;
	//	cin >> firstvalue; 
	// 
	// // it didnt work in the beginning bc the variables weren't in the loop
	// // therefore it reading only till "thats wrong" and not asking for more variables as they were not in the loop
	// 
	//	cin >> secondvalue;
	//	cin >> thirdvalue;
	//	if (firstvalue < secondvalue && secondvalue < thirdvalue)
	// 
	// // here you can't compare three variable - only two at a time; if you put in three it compares the first two
	// // then reads it as a bool (true/false) and then compares the 1,0 of the bool to the third variable 
	// 
	//	{ cout << "That's right! Thank you!" << endl;
	//	break;
	//}
	//else { cout << "Those numbers are not in ascending order. Please try again." << endl; }

	//}


	// task 5
	//char helpertext[] = "PLease enter three numbers to check whether they're in ascending or descending order:";
	//cout << helpertext << endl; 

	//double firstvalue;
	//double secondvalue;
	//double thirdvalue;
	//cin >> firstvalue; 
	//cin >> secondvalue;
	//cin >> thirdvalue;

	//if (firstvalue > secondvalue && secondvalue > thirdvalue) { cout << "Your numbers are in descedning order" << endl; }
	//else if (firstvalue < secondvalue && secondvalue < thirdvalue) { cout << "Your numbers are in ascending order" << endl; }
	//else { cout << "Your numbers are in neither descending nor ascending order" << endl; } 


	///*while (true) {
	//	if (firstvalue > secondvalue && secondvalue > thirdvalue) { cout << "Your numbers are in descedning order" << endl; break; }
	//	else if (firstvalue < secondvalue && secondvalue < thirdvalue) { cout << "Your numbers are in ascending order" << endl; break; }
	//	else {
	//		cout << "Your numbers are in neither descending nor ascending order" << endl;
	//		break; 
	//	}
	//}
	//*/ // for conditions that are finite - for a condition we want said and said result, 
	//// without seeking a particular answer loops are unneccessary; loops are for when you seek a particilar result given a certian condition
	//// and therefore you loop the program until you get said result :)

	// task 6
	/*char helpertext[] = "Enter two values to determine the quotient and remainder of their devision: ";
	cout << helpertext << endl;
	char helpertext1[] = "Please enter the value you wish to divide:";
	cout << helpertext1 << endl;
	double firstvalue;
	double secondvalue;
	cin >> firstvalue;
	char helpertext2[] = "Please enter the value you wish to divide by:";
	cout << helpertext2 << endl;
	cin >> secondvalue;

	int quotient;
	quotient = firstvalue / secondvalue;
	int remainder;
	remainder = (firstvalue - (secondvalue * quotient));

	char quotienttext[] = "The quotient is:";
	cout << quotienttext << endl;
	cout << quotient << endl;
	char remaindertext[] = "The remainder is:";
	cout << remaindertext << endl;
	cout << remainder << endl; */

	// task 7
	/*int apples;
	int pears;
	int bananas;
	char applestext[] = "Enter apples count";
	char peartext[] = "Enter pears count";
	char bananastext[] = "Enter bananas count";

	cout << applestext << endl;
	cin >> apples;
	cout << peartext << endl;
	cin >> pears;
	cout << bananastext << endl;
	cin >> bananas;

		cout << "You need to buy " << apples << " apples, " << pears << " pears and " << bananas << " banans." << endl;*/

	// task 8
		/*double radius;
	cout << "PLease enter the radius of a circle." << endl;
	cin >> radius;
	const double PI = 3.14159265;
	double lengthofcircle = 2 * radius * PI;
	cout << "The length of the circle is " << lengthofcircle << endl;
	double surfaceofcircle = PI * pow(radius, 2);
	cout << "And the surface area of the circle is " << surfaceofcircle << endl;*/

	// task 9
	/*/cout << "Enter a,b and c for a quadratic formula (ax^2 + bx + c)" << endl;
	double a;
	double b;
	double c;
	cin >> a;
	cin >> b;
	cin >> c;
	double discriminant = pow(b, 2) - 4 * a * c;

	double valueofx1 = (-b + sqrt(discriminant)) / 2 * a;
	double valueofx2 = (-b - sqrt(discriminant)) / 2 * a;
	while (true) {
		if (discriminant < 0) { cout << "This equasion doesn't have real values for x" << endl; break; }
		else { cout << "The discriminant is " << discriminant << endl << "The two values are " << valueofx1 << " and " << valueofx2 << endl; break;  }
		}*/

	// task 12
	/* cout << "Enter any amount of seconds" << endl;
	double seconds;
	cin >> seconds;
	double secondstominutes = seconds / 60;
	double secondstohours = seconds / 3600;
	double secondstodays = seconds / 86400;
		if (seconds < 60) { cout << "This is " << seconds << " seconds" << endl; }
    	else if (seconds < 3600) { cout << "This is " << secondstominutes << " minutes" << endl; }
		else if (seconds < 86400) { cout << "This is " << secondstohours << " hours and " << secondstohours << " hours." << endl; }
		else if (seconds >= 84600) {
	    cout << "This is " << secondstominutes << " minutes, " << secondstohours << " hours and "
					<< secondstodays << " days" << endl;}*/

// task 12 (yassified)
	/* cout << "Enter any amount of seconds" << endl;
	int seconds;
	cin >> seconds;
	int secondstominutes = seconds / 60;
	int secondstohours = seconds / 3600;
	int secondstodays = seconds / 86400;
		if (seconds < 60) { cout << "This is " << seconds << " seconds" << endl; }
    	else if (60 <= seconds && seconds < 120) { cout << "This is " << secondstominutes << " minute" << endl; }
		else if (120 <= seconds && seconds < 3600) { cout << "This is " << secondstominutes << " minutes" << endl; }
		else if (3600 <= seconds && seconds < 7200) { cout << "This is " << secondstohours << " minutes and " << secondstohours << " hour." << endl; }
		else if (7200 <= seconds && seconds < 86400) { cout << "This is " << secondstominutes << " minutes and " << secondstohours << " hours." << endl; }
		else if (84600 <= seconds && seconds < 172800) {cout << "This is " << secondstominutes << " minutes, " << secondstohours << " hours and "
					<< secondstodays << " day" << endl;}
		else if (172800 <= seconds) {cout << "This is " << secondstominutes << " minutes, " << secondstohours << " hours and "
					<< secondstodays << " days" << endl;} */

	
// BONUS 1					
 /*cout << "Please enter the sum you wish you deposit (for 5 years with an IR of 3%):" << endl;
double initialsum;
cin >> initialsum;
const double interestrate = 3.0 / 100;
const int yearsofdeposit = 5;
double endsum;
endsum = initialsum + initialsum * (interestrate * yearsofdeposit);
cout << "Your end sum will be: " << endsum << endl; */

// B task 2
/*cout << "Enter temperature in celcius and relative humidity to calculate the DEW POINT:" << endl;
	double Tcelcius;
	cin >> Tcelcius;
	double RH;
	cin >> RH;
	double DP = Tcelcius - ((100 - RH) / 5);
	cout << DP << endl;*/

// B tast 3
/*cout << "Enter acceleration(m/s^2) and distance (m) to calculate expected time for arrival: " << endl;
	double acceleration;
	cin >> acceleration;
	double distance;
	cin >> distance;
	double time = sqrt((2 * distance) / acceleration);
	cout << "The expected time is: " << time << endl;*/

// B task 5
/*cout << "Enter sum in EUROS" << endl;
	double initialsum;
	cin >> initialsum;
	const double ER = 0.5094;
	double endsumlv = initialsum / 0.5094;
	cout << "Sum in leva " << endsumlv << endl;
	double aftertax = initialsum - initialsum * (2.0 / 100);
	cout << "Sum in leva after tax " << aftertax << endl; */





