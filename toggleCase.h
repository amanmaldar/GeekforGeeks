//
// Created by Lenovo on 9/18/2017.
//
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void caseChange(string name);

void caseChange(string name)
{
    int len = name.length();
    for(int i=0;i<len;i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] = name[i] - 32;
            //cout << "inside 1";
        }

        else if (name[i] >= 'A' && name[i] <= 'Z')
        {
            name[i] = name[i] + 32;
            //cout << "inside 2";
        }
    }
    cout << "\n new string from new function is " << name;

}


