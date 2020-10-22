// pengurangan.cpp adalah program untuk untuk melihat pengurangan bilangan yang besar
// 4.999.999.999.999.999.999 − 4.999.999.999.999.999.998 dalam C++. Program ini bisa dikompilasi
// menggunakan kompiler GNU GCC dan Clang atau kompiler lain yang mendukung C++20:
// Pada GNU GCC: g++ -std=c++2a -Wall -Werror -Og perkalian_01.cpp -o pengurangan_01.exe
// pada Clang++: g++ -std=c++2a -Wall -Werror -Og perkalian_01.cpp -o pengurangan.exe
// Penulis: I Wayan Sumarjaya
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
