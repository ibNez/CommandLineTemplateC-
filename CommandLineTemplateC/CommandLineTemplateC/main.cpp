//
//  main.cpp
//  Command Line Template v.01
//
//  Created by tony philip on 4/4/15.
//  Copyright (c) 2015 tony philip. All rights reserved.
//

#include <iostream>// works with inputs and outputs
#include <cmath>
#include <fstream>
#include <streambuf>
#include <cstdlib>
#include "../main.h"


using namespace std;  // Load standard library so that you can use the cout = console out function

int main(int argc,char* argv[])
{
    char filename[50];
    ifstream filestreamer;
    
    if (argc==1) // Check for passed in argument.  If none is provide print usage message
    {
        //cout << "Usage; ./program_name arg1" << endl;
        cout << "Read File: ";
        //cin.getline(filename, 50);
        scanf("%s", filename);
        filestreamer.open(filename);
        
        if(!filestreamer.is_open()) // if the file is already open we kill the execution
        {
            cout << printf("File '%s' is currently Open or does not exist", filename);
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        for(int i=1;i < argc; i++) // For each argument passed at the command line do
        {
            
            
            if (i == 1)
            {
                strcpy(filename, argv[i]);
                filestreamer.open(filename);
                if(!filestreamer.is_open()) // if the file is already open we kill the execution
                {
                    cout << printf("File '%s' is currently Open or does not exist", filename);
                    exit(EXIT_FAILURE);
                }
            }
        }
    }
    
    char word[50];
    filestreamer >> word;
    while(filestreamer.good())
    {
        cout << word << " ";
        filestreamer >> word;
    }
    
    return 0;  // End the application
}

