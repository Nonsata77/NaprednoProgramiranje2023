#include<iostream>  
using namespace std;
/*Кодот ги обработува броевите кои што се прво "мешано" во првиот myarray (23 линија) зададени,
потоа со for и while ги реди кодот по ред, односно во "Sorted list".*/ 
int main ()  
{   int i, chk=0;
    char c;
    int arr[24]={(int)'A',(int)'n',(int)'t',(int)'o',(int)'n',(int)'i',(int)'o',(int)'M',(int)'i',(int)'t',(int)'r',(int)'e',(int)'v',(int)'s',(int)'k',(int)'i',(int)'I',(int)'N',(int)'K',(int)'I',(int)'9',(int)'7',(int)'5'};
    
    
    
    cout<<"Ime, prezime, indeks\n";
    for(i=0; i<24; i++)
        cout<<(char)arr[i]<<"\t";
        cout<<endl;
        cout<<"\n";
        
    
    
    int myarray[10] = { 12,4,3,1,15,45,33,21,10,2};   
       
    cout<<"\nInput list is \n";
    for(int i=0;i<10;i++)  
    {  
        cout <<myarray[i]<<"\t";  
    }    
    for(int k=1; k<10; k++)   
    {  
        int temp = myarray[k];  
        int j= k-1;  
        while(j>=0 && temp <= myarray[j])  
        {  
            myarray[j+1] = myarray[j];   
            j = j-1;  
        }  
        myarray[j+1] = temp;  
    }  
    cout<<"\nSorted list is \n";
    for(int i=0;i<10;i++)  
    {  
        cout <<myarray[i]<<"\t";  
    }  
}