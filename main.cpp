#include <iostream>
#include <string>
#include "chain.hpp"
//#include "powerset.hpp"
//#include "product.hpp"
#include "range.hpp"
//#include "zip.hpp"

using namespace std;
using namespace itertools;
int main()
{
   for (char c : range<char>('E', 'H'))
            cout << c;   
            cout<<endl;
                 for (double d : range<double>(1.1, 3.1))
            cout << d ;
               for (char c : chain<range,range>(range<char>('E', 'H'), range<char>('a', 'd')))
            cout << c;
    
}
