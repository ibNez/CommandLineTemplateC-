//
//  main.cpp
//  Command Line Template v.01
//
//  Created by tony philip on 4/4/15.
//  Copyright (c) 2015 tony philip. All rights reserved.
//

#include <iostream>// works with inputs and outputs

using namespace std;  // Load standard library so that you can use the cout = console out function

int main(int argc,char* argv[])
{
    if (argc==1) // Check for passed in argument.  If none is provide print usage message
        cout << "Usage; ./program_name arg1" << endl;
    else
    {
        for(int i=1;i < argc; i++) // For each argument passed at the command line do
            cout << argv[i] << endl;
    }
    return 0;  // End the application
}