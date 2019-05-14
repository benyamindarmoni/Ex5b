#pragma once

namespace itertools
{

    template <typename T>
    
   
    class range
    {
        private:
        T s;
        T e; 

        public:
       
        range(T st, T e) : s(st), e(e)
        {}

      
        class iterator
        {
            private:
            T ptr; 

            public:
            
           
            iterator(T p) : ptr(p)
            {

            }

          
            T operator*() const
            {
			    return ptr;
            }

          
            iterator& operator++()
            {
                
			    return *this;
            }

           
		    bool operator==(const iterator& rhs) const
            {
			    return false;
		    }

          
		    bool operator!=(const iterator& rhs) const
            {
			    return false;
            }
        };

        public:
      
        iterator begin()
        {
		    return iterator(s);
	    }

      
	    iterator end()
        {
		    return iterator(e);
        }
    };
}
