Pass by value


Pass by value means that a copy of the actual parameter’s value is made in memory, i.e. the caller and callee have two independent variables with the same value. If the callee modifies the parameter value, the effect is not visible to the caller.
Overview:
    1. Passes an argument by value.
    2. Callee does not have any access to the underlying element in the calling code.
    3. A copy of the data is sent to the callee.
    4. Changes made to the passed variable do not affect the actual value

Use of pass by value

If we are building multi-threaded application, then we don’t have to worry of objects getting modified by other threads. In distributed application pass by value can save the over network overhead to keep the objects in sync.
C++ Implementation:
#include <iostream>
using namespace std;
void passByValue(int x, int y) //passed by value



Pass by reference


Pass by reference (also called pass by address) means to pass the reference of an argument in the calling function to the corresponding formal parameter of the called function so that a copy of the address of the actual parameter is made in memory, i.e. the caller and the callee use the same variable for the parameter. If the callee modifies the parameter variable, the effect is visible to the caller’s variable.
Overview:
    1. Passes an argument by reference.
    2. Callee gives a direct reference to the programming element in the calling code.
    3. The memory address of the stored data is passed.
    4. Changes to the value have an effect on the original data.
Use of pass by Reference 

In pass by reference, no new copy of the variable is made, so overhead of copying is saved. This makes programs efficient especially when passing objects of large structs or classes.

