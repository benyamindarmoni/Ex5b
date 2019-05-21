#pragma once

namespace itertools
{
    template <class T1, class T2>

    class chain 
    {
        private:
        T1 type1;
        T2 type2; 
        
        public:
        chain(T1 a, T2 b) :type1(a),type2(b)
        { }

        template <typename P1, typename P2>
        class iterator
        {
          private:
            P1 data1; 
            P2 data2; 
            bool first_itr;

            public:
          
            iterator(P1 ptr1, P2 ptr2) : data1(ptr1), data2(ptr2),first_itr(true)
            {

            }

            decltype(*data1) operator*() const
            { 
                if(first_itr)
                return *data1;
                else
                return data2;
			  
            }

          
            iterator& operator++()
            {
                
                if(first_itr)
                ++data1;
                else ++data2;
                
			    return *this;
            }

          
		    bool operator==(iterator<P1,P2> it) const
            {
			    return data1==it.data1&&data2==it.data2;
		    }

           
		    bool operator!=(iterator<P1,P2> it) 
            {
                if(first_itr&&this->data1==it.data1){
			
			first_itr=false;
		}
			     return data1!=it.data1||data2!=it.data2;
            }
        };

        public:

        auto begin()
        {
            return iterator <decltype(type1.begin()),decltype(type2.begin())> (type1.begin(), type2.begin());;
        }

        auto end()
        {
            return iterator <decltype(type1.end()),decltype(type2.end())> (type1.end(), type2.end());;
        }

    };
}
