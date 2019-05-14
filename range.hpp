#include "iostream"
#pragma once
namespace itertools{
    
    template<typename T>
    class range{
        protected:
        T a;
        T b;
        public:
        range(T x,T y):a(x),b(y){}
        ~range(){}
        
  
        
        
        class iterator{
            protected:
            T* p;
            public:
            iterator(T* a=NULL):p(a){}
            
             T operator*() const {
                return *p;
            }

          iterator& operator++()
		{
			++(*p);
			return *this;
		}

            const iterator operator++(int) {
             iterator help = *this;
			(*p)++;
			return help;
            }

            bool operator==(const iterator &i) const {
                return *p == *i.p;
            }

            bool operator!=(const iterator& i) const {
                return *p != *i.p;
            }
               iterator& operator=(const iterator& i)  {
                   p=i.p;
                   
            }
            
            
        };
        
        
 iterator begin()
	{
		return range<T>::iterator(a);
	}

	iterator end()
	{
		return range<T>::iterator(b);
	}
    };

    
    
}
