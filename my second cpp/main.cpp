//
//  main.cpp
//  my second cpp
//
//  Created by Rafi Izzatul Rizqu Faris on 22/07/21.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int usia;
    std::cout << "Masukkan usia\n";
    
    std::cin >> usia;
    
    if (usia >= 1 && usia <= 5) {
        std::cout << "Kelompok Balita\n";
    } else if (usia >= 6 && usia <= 13) {
        std::cout << "Kelompok Anak - Anak\n";
    } else if (usia >= 14 && usia <= 18) {
        std::cout << "Kelompok Remaja\n";
    } else if (usia >= 19 && usia <= 22) {
        std::cout << "Kelompok Dewasa Awal\n";
    } else if (usia >= 23 && usia <= 35) {
        std::cout << "Kelompok Dewasa Akhir\n";
    } else if (usia >= 36 && usia <= 55) {
        std::cout << "Kelompok Orang Tua\n";
    } else if (usia >= 56 && usia <= 80) {
        std::cout << "Kelompok Kakek - Nenek\n";
    } else if (usia >= 80) {
        std::cout << "Kelompok Luar Biasa\n";
    }
    
    return 0;
}
