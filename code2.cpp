#include <iostream>
using namespace std;

int main()
{

    int count = 0;

    while (count != 5)

    {
        int x, y, z, sum = 0, product = 0;
        int FindSum, FindProduct, Found = 0;
        cout << "\n Enter your sum" << endl;
        cin >> FindSum;
        cout << "\n Enter Your Product" << endl;
        cin >> FindProduct;
        for (int i = 0; i <= 9; i++)
        {
            x = i;
            for (int j = 0; j <= 9; j++)
            {
                y = j;
                for (int k = 0; k <= 9; k++)
                {
                    z = k;
                    sum = x + y + z;
                    product = x * y * z;
                    if (sum == FindSum && product == FindProduct)
                    {
                        cout << "Got the number  " << x << " " << y << " " << z << endl;
                        Found = 1;
                        break;
                    }
                }
            }
        }
        if (Found != 1)
        {
            cout << "\n Number not found" << endl;
        }
        count++;
    }

    return 0;
}