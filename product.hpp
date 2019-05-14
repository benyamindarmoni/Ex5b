#include "iostream"
#pragma once
namespace itertools{
    
    template<typename x,typename y>
    class product{
        protected:
     x a1;
     y a2;
        public:
        product(x a,y b):a1(a),a2(b){}
        ~product(){}
          
          
        class iterator{
            protected:
          typename x::iterator a;
            typename y::iterator b;
            public:
            iterator (typename x::iterator itr1, typename y::iterator itr2) : a(itr1),b(itr2){}
            
             auto operator*() const {
                return *a;
            }

          iterator& operator++()
		{
		
			return *this;
		}

           

            bool operator==(const iterator &i) const {
                return false;
            }

            bool operator!=(const iterator& i) const {
                return false;
            }
               iterator& operator=(const iterator& i)  {
                 *this;
                   
            }
            
            
        };
        
        
iterator begin()
	{
		return product<x,y>::iterator(a1.begin(),a2.begin());
	}

iterator end()
	{
		return product<x,y>::iterator(a1.end(),a2.end());
	} 
    };

   
    
}