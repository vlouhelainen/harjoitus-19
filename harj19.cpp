/*		Valtteri Louhelainen
Tee ohjelma, joka toimii auton nopeusmittarina.
Periaate on seuraava: Näppäimistä toimii
nopeusanturina ja näyttä mittarin näyttänä.
Nopeusmittari laskee viiden viimeisen nopeuden
keskiarvon ja tulostaa sen nykyisenä nopeutena
näytälle. Negatiivinen nopeus lopettaa ohjelman.
Toiminta on siis seuraava:
Ohjelman kaynnistyksessa mittari näyttää nolla
0
0
0
0
0 (alkutila) nopeus = 0 km/h
Anna nopeus: 10 => 2 km/h
Anna nopeus: 20 => 6 km/h
Anna nopeus: 30 => 12 km/h
Anna nopeus: 40 => 20 km/h
Anna nopeus: 50 => 30 km/h
Anna nopeus: 50 => 38 km/h
Anna nopeus: 50 => 44 km/h
Anna nopeus: 50 => 48 km/h
Anna nopeus: 50 => 50 km/h
Anna nopeus: 50 => 50 km/h
Anna nopeus: -5 => loppu

Toteuta kayttaen taulukkoa.*/

#include <iostream>
using namespace std;

void main()
{
	int speed[] {0, 0, 0, 0, 0};
	int input = 0;

	while (input >= 0)
	{
		for (int n = 0; n < 5; n++)
		{
			printf("%3d km/h +", (speed[0] + speed[1] + speed[2] + speed[3] + speed[4]) / 5);
			cin >> input;
			if (input < 0)
				break;
			speed[n] = input;
		}
	}
}