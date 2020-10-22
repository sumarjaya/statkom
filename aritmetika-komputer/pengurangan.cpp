// pengurangan.cpp untuk melihat pengurangan
// 4.999.999.999.999.999.999 − 4.999.999.999.999.999.998 dalam C++
// compile dengan: g++ -std=c++2a -Wall -Werror -Og perkalian_01.cpp -o pengurangan_01.exe
// atau g++ -std=c++2a -Wall -Werror -Og perkalian_01.cpp -o pengurangan.exe
#include <iostream>

int main()
{
	long long int i = 4999999999999999999; //
	long long int j = 4999999999999999998; //
	std::cout << "Nilai "<< i <<" dikurangi "<< j <<" adalah "<< i-j <<std::endl;
	return 0;
}

// D:\workdir\statkom\CPP>clang++ -std=c++2a -Wall -Werror -Og pengurangan.cpp -o pengurangan.exe
// D:\workdir\statkom\CPP>pengurangan
// Nilai 4999999999999999999 dikurangi 4999999999999999998 adalah 1
// D:\workdir\statkom\CPP>del pengurangan.exe
// D:\workdir\statkom\CPP>g++ -std=c++2a -Wall -Werror -Og pengurangan.cpp -o pengurangan.exe
// D:\workdir\statkom\CPP>pengurangan
// Nilai 4999999999999999999 dikurangi 4999999999999999998 adalah 1
