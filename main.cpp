#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream napisy_tj("tj.txt");
    ifstream napisy_sz("sz.txt");
    ifstream klucz_tj_in("klucze1.txt");
    ifstream klucz_sz_in("klucze2.txt");

    string wyraz_tj, klucz_tj, kod_tj;
    string wyraz_sz, klucz_sz, kod_sz;
    int znak;

    int dl_wyr, dl_key, poz=0,t;

    while(!napisy_tj.eof())
    {
        napisy_tj>>wyraz_tj;
        klucz_tj_in>>klucz_tj;
        poz=0;
        for(int i=0; i<wyraz_tj.length();i++)
        {
            if(poz>klucz_tj.length()-1)poz=0;
            znak=wyraz_tj[poz]+(klucz_tj[poz]-64);
            
            if(znak>90)
            {
                znak-=26;
                kod_tj+=znak;
            }
            else 
            {
                kod_tj+=znak;
            }
            poz++;
        }kod_tj+="\n";

    }
    while(!napisy_sz.eof())
    {
        napisy_sz>>wyraz_sz;
        klucz_sz_in>>klucz_sz;
        poz=0;
        for(int i=0; i<wyraz_sz.length();i++)
        {
            if(poz>klucz_sz.length()-1)poz=0;
            znak=wyraz_sz[poz]-(klucz_sz[poz]-64);
            
            if(znak<65)
            {
                znak+=26;
                kod_sz+=znak;
            }
            else 
            {
                kod_sz+=znak;
            }
            poz++;
        }kod_sz+="\n";

    }
    cout<<kod_sz;
}