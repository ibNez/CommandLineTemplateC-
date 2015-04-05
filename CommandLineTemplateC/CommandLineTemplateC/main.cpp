//
//  main.cpp
//  Hello World
//
//  Created by tony philip on 4/4/15.
//  Copyright (c) 2015 tony philip. All rights reserved.
//
#include <iostream>// works with inputs and outputs

using namespace std;  //Load standard out controls for cout = console out

int main(int argc,char* argv[])
{
    if (argc==1) //Check for at least one arg.  If none are found display usage statement
        cout << "Usage; ./program_name arg1" << endl;
    else
    {
        for(int i=1; i < argc; i++) //For each argument passed with the command do
            cout << argv[i] << endl;
    }
    return 0;
}