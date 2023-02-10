#include <iostream>
#include <string.h>
#include "funzione.h"

using namespace std;

Student::Student(string name, string surname)
    {
        this -> name = name;
        this -> surname = surname;
    }


void Registro::insert_Grade()
    {
        FILE* fp;
        
        fp = fopen("registro", "a");
        
        fprintf(fp, "%c             %c          %d           %d             %d", name, surname, grade_Math, grade_English, grade_Italian);
        
        fclose(fp);
    }

void Registro::print_Register()
    {
        FILE* fp;
        string a,b,c,d;
        
        fp = fopen("registro", "a");
        
        fseek(fp, 5, SEEK_SET);
        while(!feof(fp))
        {
            fgets(fp,"%s %s %s %s ", a, b, c, d);
            cout<<a<<b<<c<<d;
        }
        
        fclose(fp);
        
    }