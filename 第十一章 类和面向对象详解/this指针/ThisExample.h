#ifndef THIS_EXAMPLE
#define THIS_EXAMPLE
class Example {
    private: 
        int x;
    public:
        Example (int a) { x = a; };
        void setValue (int);
        void printAddressAndValue ();
};
#endif