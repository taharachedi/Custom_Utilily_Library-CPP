#include <iostream>
#include "clsUtil.h"

using namespace std;  


int main()
{
    system("color f3");


    clsUtil::Srand();
    cout << clsUtil::Random_Number(1, 10) << endl;  
    cout << clsUtil::Get_RandomCharacter(clsUtil::Capital_Letter) << endl;  
    cout << clsUtil::Generate_Word(clsUtil::MixChars, 8) << endl;
    cout << clsUtil::Generate_Key(clsUtil::MixChars) << endl;
    clsUtil::Generate_Keys(10, clsUtil::MixChars); 


    //Swap Int
    int x = 10, y = 20; 
    cout << x << " " << y << endl; 
    clsUtil::Swap(x, y); 
    cout << x << " " << y << endl << endl; 

    //Swap double
    double a = 10.5, b = 20.5;
    cout << a << " " << b << endl; 
    clsUtil::Swap(a, b); 
    cout << a << " " << b << endl << endl; 

    //Swap String
    string s1 = "Abderrazzak", s2 = "Hassania";  
    cout << s1 << " " << s2 << endl; 
    clsUtil::Swap(s1, s2); 
    cout << s1 << " " << s2 << endl << endl; 

    //Swap Dates
    clsDate d1(1, 10, 2022), d2(1, 1, 2022); 
    cout << d1.DateToString() << " " << d2.DateToString() << endl; 
    clsUtil::Swap(d1, d2); 
    cout << d1.DateToString() << " " << d2.DateToString() << endl;  



    //Shuffl Array

    //int array
    int Arr1[5] = { 1,2,3,4,5 };
    clsUtil::Shuffle_Array(Arr1, 5); 

    cout << "\nArray After shuffle:\n";
    for (int i = 0; i < 5; i++)  
    {
        cout << Arr1[i] << endl;  
    }

    //string array
    string Arr2[4] = { "Taha","Mohammed","Abderrazzak","Hassania" };
    clsUtil::Shuffle_Array(Arr2, 4);

    cout << "\nArray After shuffle:\n";
    for (int i = 0; i < 4; i++)
    {
        cout << Arr2[i] << endl; 
    }


    int Arr3[5];
    clsUtil::Fill_Array_With_Random_Numbers(Arr3, 5, 20, 50); 

    cout << "\nArray After Fill:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << Arr3[i] << endl;
    }


    string Arr4[5]; 
    clsUtil::Fill_Array_With_Random_Words(Arr4, 5, clsUtil::MixChars, 8);

    cout << "\nArray After Fill:\n";
    for (int i = 0; i < 5; i++) 
    {
        cout << Arr4[i] << endl;  
    }


    string Arr5[5]; 
    clsUtil::Fill_Array_With_Random_Keys(Arr5, 5, clsUtil::MixChars);
     
    cout << "\nArray After Filling Keys:\n";
    for (int i = 0; i < 5; i++) 
    {
        cout << Arr5[i] << endl; 
    }


    cout << "\nText1 " << clsUtil::Tabs(5) << "Text2\n";  

    const short EncryptionKey = 2; //This is The Key. 

    string TextAfterEncryption, TextAfterDecryption; 
    string Text = "Taha Rachedi";  
    TextAfterEncryption = clsUtil::Encryption_Text(Text, EncryptionKey); 
    TextAfterDecryption = clsUtil::Decryption_Text(TextAfterEncryption, EncryptionKey);

    cout << "\nText Before Encryption : " << Text << endl; 
    cout << "Text After Encryption  : " << TextAfterEncryption << endl; 
    cout << "Text After Decryption  : " << TextAfterDecryption << endl; 


    system("pause>0");
    return 0;
}