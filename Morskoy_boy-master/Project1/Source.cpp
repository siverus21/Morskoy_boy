#include <iostream>
#include <clocale>
using namespace std;

int mas[11][11];
int mas_prot[11][11];

class Map
{
public:
	int i = 0;
	int j = 0;
	int shetchik = 0;
	void obnylenie()
	{
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				mas[i][j] = 0;
				mas_prot[i][j] = 0;
			}
		}
	}

	void koordinati()
	{
		for (int j = 0; j < 10; j++)
		{
			mas[i][j] = shetchik;
			mas_prot[i][j] = shetchik;
			shetchik++;
		}
		shetchik = 0;
		for (int i = 0; i < 10; i++)
		{
			mas[i][j] = shetchik;
			mas_prot[i][j] = shetchik;
			shetchik++;
		}
	}
	void vivod()
	{
		cout << "Ваше поле" << endl;
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				cout << " " << mas[i][j];
			}
			cout << endl;
		}
		cout << endl;
		cout << "Поле противника" << endl;
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				cout << " " << mas_prot[i][j];
			}
			cout << endl;
		}
	}
};

class Ship
{
public:
	Map map;
	void ship_4()
	{
		int main_ship_4 = 4;
		int ship_4_polozhenie_na_pole = 4;
		int i = 0;
		int j = 0;
		while(main_ship_4 != 0)
		{
			cin >> i;
			cin >> j;
			mas[i][j] = ship_4_polozhenie_na_pole;
			main_ship_4--;
			map.vivod();
		}
	}

	void ship_3() 
	{
		int main_ship_3 = 6;
		int ship_3_polozhenie_na_pole = 3;
		int i = 0;
		int j = 0;
		while (main_ship_3 != 0)
		{
			cin >> i;
			cin >> j;
			mas[i][j] = ship_3_polozhenie_na_pole;
			main_ship_3--;
			map.vivod();
		}
	}

	void ship_2() 
	{
		int main_ship_2 = 6;
		int ship_2_polozhenie_na_pole = 2;
		int i = 0;
		int j = 0;
		while(main_ship_2 != 0)
		{
			cin >> i;
			cin >> j;
			mas[i][j] = ship_2_polozhenie_na_pole;
			main_ship_2--;
			map.vivod();
		}
	}

	void ship_1()
	{
		int main_ship_1 = 4;
		int ship_1_polozhenie_na_pole = 1;
		int i = 0;
		int j = 0;
		while(main_ship_1 != 0)
		{
			cin >> i;
			cin >> j;
			mas[i][j] = ship_1_polozhenie_na_pole;
			main_ship_1--;
			map.vivod();
		}
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	Map map;
	map.obnylenie();
	map.koordinati();
	map.vivod();
	cout << endl;
	Ship ship;
	ship.ship_4();
	map.vivod();
	ship.ship_3();
	map.vivod();

	system("pause");
	return 0;
}

