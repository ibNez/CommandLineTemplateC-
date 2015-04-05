//
//  main.cpp
//  Hello World
//
//  Created by tony philip on 4/4/15.
//  Copyright (c) 2015 tony philip. All rights reserved.
//
#include <iostream>// works with inputs and outputs

using namespace std;

int main(int argc,char* argv[])
{
    if (argc==1)
        cout << "Usage; ./program_name arg1" << endl;
    else
    {
        for(int i=1;i < argc; i++)
            cout << argv[i] << endl;
    }
    return 0;
}