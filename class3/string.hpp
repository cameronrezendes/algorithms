#ifndef __STRING__
#define __STRING__

class String {
    private:
        //Declare data members here.
        char * array;

    public:
        //Contructors and Destructor.
        String(); //Default
        String(const char*); //Parameterized
        ~String(); //This is the destructor

        //Other functions.
        unsigned int length();
        void reverse();
        void append(const char);

};

#endif