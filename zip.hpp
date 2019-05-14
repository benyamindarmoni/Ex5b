#pragma once
#include <iostream>
namespace itertools
{
    template <typename T1, typename T2>
    class zip 
    {
        private:
        T1 it1;
        T2 it2;
        
        public:
        zip(T1 a, T2 b) : it1(a), it2(b) {

        }
        
        template <typename P1, typename P2>
        class iterator
        {
          private:
            P1 data1;
            P2 data2;

            public:
            iterator(P1 p1, P2 p2) : data1(p1), data2(p2) {

            }

            std::pair<decltype(*data1),decltype(*data2)> operator*() const {

             return  std::pair<decltype(*data1),decltype(*data2)> (*data1 , *data2);
}

            iterator<P1, P2>& operator++() {

			    return *this;
            }

		    bool operator==(iterator<P1,P2> it) const {
			    return true;
		    }

		    bool operator!=(iterator<P1,P2> it) const {
			    return true;
            }
        };

        public:

        auto begin()
        {
            return iterator <decltype(it1.begin()),decltype(it2.begin())> (it1.begin(), it2.begin());;
        }

        auto end()
        {
            return iterator <decltype(it1.end()),decltype(it2.end())> (it1.end(), it2.end());;
        }      
    };
    
    template <typename T1,typename T2>
    ostream &operator<<(ostream &os, const std::pair<T1,T2> &c) 
    {
	    return os;
        
    }
}
