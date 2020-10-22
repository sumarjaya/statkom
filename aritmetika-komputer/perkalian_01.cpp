// perkalian.cpp adalah program C++ untuk melihat perkalian
// 111.111.111 x 111.111.111 (bilangan yang cukup besar). Tujuan program 
// ini adalah untuk mengamati lebih lanjut sifat-sifat titik kambang (floating point). 
// Program ini dapat di-compile dengan compiler GNU GCC, Clang atau compiler
// lain yang mendukung C++20. Lakukan:
// pada GCC: g++ -std=c++2a -Wall -Werror -Og perkalian_01.cpp -o perkalian_01.exe
// atau pada Clang: clang++ -std=c++2a -Wall -Werror -Og perkalian_01.cpp -o perkalian_01.exe
// Penulis: I Wayan Sumarjaya

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
// Hasil ini eksak.
