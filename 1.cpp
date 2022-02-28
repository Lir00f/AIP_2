#include <iostream>
using namespace std;
struct weather {
	int temp;
	double wspeed;
	char wind;
	string prec;

};
int main()
{
	setlocale(LC_ALL, "RUS");
	int avgtemp, daynumber, west, south, north, east, Rain, Snow, maximum;
	double awgspeed;
	string flag, veter;
	daynumber = 1;
	Snow = 0;
	Rain = 0;
	west = 0;
	south = 0;
	north = 0;
	east = 0;
	avgtemp = 0;
	awgspeed = 0;
	while (flag != "quit")
	{
		weather day;
		cout << "day " << daynumber << endl;
		cout << "temperature: ";
		cin >> day.temp;
		cout << endl << "windspeed: ";
		cin >> day.wspeed;
		cout << endl << "wind: ";
		cin >> day.wind;
		cout << endl << "precipitation: ";
		cin >> day.prec;
		avgtemp = avgtemp + day.temp;
		awgspeed = awgspeed + day.wspeed;
		if (day.wind == 'w')
			west = west + 1;
		else if (day.wind == 'n')
			north = north + 1;
		else if (day.wind == 'e')
			east = east + 1;
		else if (day.wind == 's')
			south = south + 1;
		else if (day.prec == "Rain")
			Rain = Rain + 1;
		else if (day.prec == "Snow")
			Snow = Snow + 1;
		daynumber = daynumber + 1;
		cout << "enter quit to exit : ";
		cin >> flag;
		cout << endl;
	}
	maximum = max(max(max(north, south), east), west);
	if (maximum = north) {
		veter = "north";
	}
	else if (maximum = east) {
		veter = "east";
	}								
	else if (maximum = south) {
		veter = "south";
	}
	else if (maximum = west) {
		veter = "west";
	}
	avgtemp = avgtemp / daynumber;
	awgspeed = awgspeed / daynumber;
	cout << "avg windspeed=" << awgspeed << endl;
	cout << "avg temp=" << avgtemp << endl;
	cout << "wind directioin : " << veter << endl;
	cout << "Rain=" << Rain << endl;
	cout << "Snow=" << Snow << endl;

}
