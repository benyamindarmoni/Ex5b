#pragma once
namespace itertools
{
    template <typename T>
    class powerset
    {
        private:
        T ptr;

        public:

        powerset(T a) : ptr(a) {

        }
        
        template <typename P>
        class iterator
        {
          private:
            P i1;
            P i2;

            public:
            iterator(P p1, P p2) : i1(p1), i2(p2) {

            }

            std::pair<decltype(*i1),decltype(*i2)> operator*() const {

             return  std::pair<decltype(*i1),decltype(*i2)> (*i1 , *i2);
            
            }

            iterator<P>& operator++() {

			    return *this;
            }

		    bool operator==(iterator<P> it) const {
			    return false;
		    }

		    bool operator!=(iterator<P> it) const {
			    return false;
            }
        };

        public:

        auto begin() { 
            return iterator<decltype(ptr.begin())> (ptr.begin(), ptr.end()); 
        } 
        auto end()  { 
            return iterator<decltype(ptr.begin())>(ptr.end(), ptr.end());
        } 

    };
}