//
//  main.cpp
//  my second cpp
//
//  Created by Rafi Izzatul Rizqu Faris on 22/07/21.
//

#include <iostream>

int main(int argc, const char * argv[]) {
//    int usia;
//    std::cout << "Masukkan usia\n";
//
//    std::cin >> usia;
//
//    if (usia >= 1 && usia <= 5) {
//        std::cout << "Kelompok Balita\n";
//    } else if (usia >= 6 && usia <= 13) {
//        std::cout << "Kelompok Anak - Anak\n";
//    } else if (usia >= 14 && usia <= 18) {
//        std::cout << "Kelompok Remaja\n";
//    } else if (usia >= 19 && usia <= 22) {
//        std::cout << "Kelompok Dewasa Awal\n";
//    } else if (usia >= 23 && usia <= 35) {
//        std::cout << "Kelompok Dewasa Akhir\n";
//    } else if (usia >= 36 && usia <= 55) {
//        std::cout << "Kelompok Orang Tua\n";
//    } else if (usia >= 56 && usia <= 80) {
//        std::cout << "Kelompok Kakek - Nenek\n";
//    } else if (usia >= 80) {
//        std::cout << "Kelompok Luar Biasa\n";
//    }
    
//    int month;
//
//    std::cout << "Masukkan urutan bulan\n";
//
//    std::cin >> month;
//
//    switch (month) {
//      case 1:
//        std::cout << "January";
//        break;
//      case 2:
//        std::cout << "February";
//        break;
//      case 3:
//        std::cout << "March";
//        break;
//      case 4:
//        std::cout << "April";
//        break;
//      case 5:
//        std::cout << "May";
//        break;
//      case 6:
//        std::cout << "June";
//        break;
//      case 7:
//        std::cout << "July";
//        break;
//      case 8:
//        std::cout << "August";
//        break;
//        case 9:
//            std::cout << "September";
//            break;
//        case 10:
//            std::cout << "October";
//            break;
//        case 11:
//            std::cout << "November";
//            break;
//        case 12:
//            std::cout << "December";
//            break;
//        default:
//            std::cout << "Tidak ada bulan yang dipilih";
//    }
    
    int i = 1;
//    while (i <= 10) {
//        if (i % 2 == 0) {
//            std::cout << i << ", ";
//        }
//        i++;
//    }
    
    do {
        if (i % 2 == 0) {
            std::cout << i << " adalah angka genap" << std::endl;
        } else {
            std::cout << i << " adalah angka ganjil" << std::endl;
        }
        i++;
    } while (i <= 10);
    
    return 0;
}
