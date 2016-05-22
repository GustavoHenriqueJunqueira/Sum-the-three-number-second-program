//
//  main.cpp
//  Soma de 3 notas e a media
//
//  Created by Gustavo Henrique Furtado Junqueira on 30/03/16.
//  Copyright © 2016 Gustavo Henrique Furtado Junqueira. All rights reserved.
//

#include<iostream>
using namespace std;
int main (){
    float number1, number2, number3, sum, average;
    cout<<"\tEnter the first number\n";
    cin>>number1;
    cout<<"\tEnter the second number:\n";
    cin>>number2;
    cout<<"\tEnter the third number:\n";
    cin>>number3;
    sum=(number1+number2+number3);
    average=(sum/3);
    cout<<"\t The sum is:\n"<<sum<<"\n\t The average is :\n"<<average<<"\n";
    
    
    return 0;
    
}



