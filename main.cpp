#include <stdio.h>
#include <list>
#include <string.h>

using namespace std;

int main()
{
	list<const char*>stations =
	{
	 "Tokyo","Kanda","Akihabara",
	 "Okachimachi","Ueno","Uguisudani",
	 "Nippori","Tabata","Komagome",
	 "Sugamo","Otsuka","Ikebukuro",
	 "Mejiro","Takadanobaba","Shin-Okubo",
	 "Shinjuku","Yoyogi","Harajuku",
	 "Shibuya","Ebisu","Meguro",
	 "Gotanda","Osaki","Shinagawa",
	 "Tamachi","Hamamatsucho","Shimbashi",
	 "Yurakucho"
	};


	printf("---1970---\n");
	for (auto itr = stations.begin(); itr != stations.end(); itr++)
	{
		printf("%s\n", *itr);
	}

	for (auto itr = stations.begin(); itr != stations.end(); itr++)
	{
		if (strcmp(*itr, "Tabata") == 0)
		{
			stations.insert(itr, "Nishi-Nippori");
			break;
		}
	}

	printf("---2019---\n");
	for (auto itr = stations.begin(); itr != stations.end(); itr++)
	{
		printf("%s\n", *itr);
	}

	for (auto itr = stations.begin(); itr != stations.end(); itr++)
	{
		if (strcmp(*itr, "Tamachi") == 0)
		{
			stations.insert(itr, "Takanawa-Geto-Way");
			break;
		}
	}

	printf("---2022---\n");
	for (auto itr = stations.begin(); itr != stations.end(); itr++)
	{
		printf("%s\n", *itr);
	}

	return 0;
}