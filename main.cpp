
#include <iostream>
#include"NewUser.h"
#include "Ebill.h"
#include "Complaints.h"
int main()
{

    
    NewUser* u1 = new NewUser();
    NewUser* u2 = new NewUser();

    Ebill* bill1 = new Ebill();
    Ebill* bill2 = new Ebill();

    Complaints* com1 = new Complaints();
    Complaints* com2 = new Complaints();

    delete u1;
    delete u2;

    delete bill1;
    delete bill2;

    delete com1;
    delete com2;
    


    
    
    
}

