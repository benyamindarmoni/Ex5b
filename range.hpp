#pragma once

namespace itertools
{

    template <class T>
    class range
    {
        private:
        T start;
        T end1; 

        public:
       
        range(T st, T e) : start(st), end1(e)
        {}

      
        class iterator
        {
            public:
            T ptr; 
           
            iterator(T p) : ptr(p)
            {
            }

          
            T operator*() const
            {
			    return ptr;
            }

          
            iterator& operator++()
            {
                ++ptr;
			    return *this;
            }

           
		    bool operator==(const iterator& rhs) 
            {
			    return this->ptr==rhs.ptr;
		    }

          
		    bool operator!=(const iterator& rhs) 
            {
			      return this->ptr!=rhs.ptr;
            }
        };

        public:
      
        iterator begin ()const
        {
		    return range::iterator(start);
	    }

      
	    iterator end()const
        {
		    return range::iterator(end1);
        }
    };
 /*   template <typename T>

range<T> range(T from, T to)
{
    return range<T>(from, to);
}*/
}
