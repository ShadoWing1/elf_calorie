#include<iostream>
#include<fstream>
#include<string>

int main(int argc, char const *argv[])
{
    int cevap1 = 69177;
    int cevap2 = 69171;
    int cevap3 = 69108;




    std::ifstream sayilar("sayilar.txt");

    std::string satir;

    int sayi0 = 0;
    int sayi1 = 0;
    int sayi2 = 0;

    while(std::getline(sayilar, satir))
    {
        if (satir == "")
        {
            sayi0 = sayi1;
            
            if(sayi0 >= sayi2)
            {
                sayi2 = sayi0;
            }
           
            std::cout << sayi0 << "\n";
            std::cout << sayi2 << "\n";
            sayi1 = 0;
        }

        else
        {
            int i = std::stoi(satir);
            sayi1 += i;

    
        if(sayi1 == 69108)
        {
            std::cout << "-------------------------------" << "\n ";
            std::cout << satir << "\n ";
        }
    
        }
    
    //en büyük 2.nin en son ki sayisini bul
    }
    std::cout<<  "\n";
    std::cout<< "bitti" << "\n";

    std::cout<< cevap1+cevap2+cevap3 << "\n"; //207456
    

    sayilar.close();
    return 0;
}
