//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//
//Deoxyribonucleic acid, DNA is the primary information storage molecule in biological systems.It is composed of four
//nucleic acid bases Guanine('G'), Cytosine('C'), Adenine('A'), and Thymine('T').
//
//Ribonucleic acid, RNA, is the primary messenger molecule in cells.RNA differs slightly from DNA its chemical structureand 
//contains no Thymine.In RNA Thymine is replaced by another nucleic acid Uracil('U').
//
//Create a function which translates a given DNA string into RNA.
//
//The input string can be of arbitrary length - in particular, it may be empty.All input is guaranteed to be valid, i.e.each
//input string will only ever consist of 'G', 'C', 'A' and /or 'T'.
//"GCAT"  =>  "GCAU"



using namespace std;
#include <string>

std::string DNAtoRNA(std::string dna) {

    std::replace(dna.begin(), dna.end(), 'T', 'U'); // from StackOverflow

    // This passed the tests
//for (size_t i = 0; i < dna.size(); i++)
//{
//    if (dna.at(i) == 'T')
//        dna.at(i) = 'U';
//}


    // this didn't
//size_t start_pos = dna.find("GCAT");
//if (start_pos != std::string::npos)
//{
//  //  dna.at(dna.find("T")) = 'U';
//    dna.replace(dna.find("GCAT"), 4, "GCAU");

 //Expected: equal to "UGCAU"
// Actual: "UGCAT"
//Expected: equal to "UGCAU"
//Actual : "TGCAU"

//}
    return dna;

}

//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    cout << DNAtoRNA("UGCAT");
//
//}