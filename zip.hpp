#include "iostream"
#pragma once
namespace itertools{
    
    template<typename x,typename y>
    class zip{
        protected:
     x a1;
     y a2;
        public:
        zip(x b,y e):a1(b),a2(e){}
        ~zip(){}
          
          
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
		return zip<x,y>::iterator(a1.begin());
	}

iterator end()
	{
		return zip<x,y>::iterator(a2.end());
	} 
    };

   
    
}