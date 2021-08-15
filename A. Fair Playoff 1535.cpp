#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t,a,b,c,d,e,f;
    cin >> t;
    for(int i = 0; i <t; i++){
        cin >> a >> b >> c >> d ;

      if(min(a,b)> max(c,d) || max(a,b)<min(c,d) )

        cout << "No\n";
        else
         cout<< "yes\n";
      
      
        
    }

    return 0;
}
