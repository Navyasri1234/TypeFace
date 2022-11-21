#include <iostream>
using namespace std;
void TernaryCon(int N)
{
    if (N == 0)
        return;
    int rem = N % 3;
    N /= 3;
    if (rem < 0)
        N += 1;
    TernaryCon(N);
    if (rem < 0)
        cout << rem + (3 * -1);
    else
        cout << rem;
}
 
int main()
{
    int n;
    cin>>n;
   if (n != 0) {
        TernaryCon(n);
   }
    else
        cout << "0" << endl;
        
    return 0;
}
