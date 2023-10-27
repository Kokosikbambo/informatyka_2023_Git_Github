#include <stdio.h>
#include <iostream>
#include <string>

//zadanie 1
using namespace std;
struct player {
	int id;
	char name[50];
	float x;
	float y;
	float dx;
	float dy;
	int scores;
} p1, p2;

struct player wczytaj(void) {
	fflush(stdin);
	printf("\n Id: ");
	return p2;

}

void drukuj(struct player p2) {
	printf("\n Id: %d", p2.id);
	printf("\n Name: %s", p2.name);
};

//zadanie 2

/*typedef struct {
	int id;
	char name[50];
	float x;
	float y;
	float dx;
	float dy;
	int scores;
} players;

players fivepl[5] = {
{1,"first",5,5,5,5,20},
{2,"second",5,5,5,5,45},
{3,"third",5,5,5,5,18},
{4,"fourth",5,5,5,5,60},
{5,"fifth", 5,5,5,5,37}
};*/

int main() {
	p1.id = 1;
	p1.x = 5;
	p1.y = 5;
	p1.dx = 5;
	p1.dy = 5;
	p1.scores = 10;
	strcpy_s(p1.name, "player1");
	cout << "Wpisz 6 danych dla Player 2: ";
	cin >> p2.id;
	cin >> p2.x;
	cin >> p2.y;
	cin >> p2.dx;
	cin >> p2.dy;
	cin >> p2.scores;

	struct player wczytaj(void);
	void drukuj(struct player p2);

	cout << "Player 1 info:\n";
	cout << p1.id << "\n";
	cout << p1.x << "\n";
	cout << p1.y << "\n";
	cout << p1.dx << "\n";
	cout << p1.dy << "\n";
	cout << p1.scores << "\n";

	cout << "Player 2 info:\n";
	cout << p2.id << "\n";
	cout << p2.x << "\n";
	cout << p2.y << "\n";
	cout << p2.dx << "\n";
	cout << p2.dy << "\n";
	cout << p2.scores << "\n";
};