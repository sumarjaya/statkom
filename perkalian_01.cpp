// perkalian.cpp untuk melihat perkalian
// 111.111.111 x 111.111.111 dalam C++
// compile dengan: g++ -std=c++2a -Wall -Werror -Og perkalian_01.cpp -o perkalian_01.exe
// atau g++ -std=c++2a -Wall -Werror -Og perkalian_01.cpp -o perkalian_01.exe
#include <iostream>

int main()
{
	long long int i = 111111111; //
	std::cout << "Hasil kali: "<< i <<" kali "<< i <<" adalah "<< i*i <<std::endl;
	return 0;
}

// D:\workdir\statkom\CPP>g++ -std=c++2a -Wall -Werror -Og perkalian_01.cpp -o perkalian_01.exe
// D:\workdir\statkom\CPP>perkalian_01
// Hasil kali: 111111111 kali 111111111 adalah 12345678987654321
// D:\workdir\statkom\CPP>clang++ -std=c++2a -Wall -Werror -Og perkalian_01.cpp -o perkalian_01.exe
// D:\workdir\statkom\CPP>del perkalian_01.exe
// D:\workdir\statkom\CPP>clang++ -std=c++2a -Wall -Werror -Og perkalian_01.cpp -o perkalian_01.exe
// D:\workdir\statkom\CPP>perkalian_01
// Hasil kali: 111111111 kali 111111111 adalah 12345678987654321
