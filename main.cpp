#include "Notebook.h"

int main()
{
    Notebook one;
    one.print();

    Notebook two("MSI","Intel",8);
    two.print();

    Notebook three(two);
    three.setModel("Acer");
    three.setMemory(8);
    three.print();
    cout << "\n";

    if(one == two)
        cout << one.getMemory();
    else
    {
        ++one;
        if(one == two)
        {
            cout << one.getMemory();
        }
    }
    return 0;
}
