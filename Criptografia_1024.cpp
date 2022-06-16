#include <iostream>
using namespace std;
#include <string>

int main() {
    std::string criptografia;
    std::string metadecripto;
    int entrada, i, j;
    std::cin >> entrada;
    std::cin.ignore();
    while(entrada>0){
        entrada--;
        getline(std::cin, criptografia);
        //primeira passada
        int k = criptografia.length();
        for(i=0; i<k; i++){
            if(((65<= criptografia[i]) && (criptografia[i] <=90)) || ((97<= criptografia[i]) && (criptografia[i] <=122))){
                criptografia[i] = criptografia[i]+3;
            }  
        }
        // std::cout << "\n" +criptografia; 
        //segunda passada
        metadecripto = "";
        for(i=k-1; i>=0; i--){
            metadecripto += criptografia[i];
        }
        int l = metadecripto.length();
        //ultima passada
        // std::cout << "\n" +metadecripto; 
        
        for(i= (l/2); i<l; i++){
                metadecripto[i] = metadecripto[i]-1;
        }
        
        std::cout << metadecripto+"\n";  
    }
    return 0; 