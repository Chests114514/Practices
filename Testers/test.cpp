#include <iostream>

// test text
/* test text
 test text*/

#define ZERO 0
#undef ZERO

void testFunction();

int main()
{
        using namespace std;
        testFunction();
        return 0;
}

void testFunction()
{
        cout << "Test Text" << endl;
        cout << "Test Text\n";
}

struct test
{
        short testShort;
        int testInt;
        long testLong;
        long long testLlong;
        const int testConst;
        double testDouble;
        bool testBool;
        char testChar[] = 'c' 'h' 'a' 'r' '\0';
};

class testClass
{
        public:
                void testPublic()
                {
                        cout << "Test Public" << endl;
                }
        private:
                void testPrivate()
                {
                        cout << "Test Private" << endl;
                }
        protected:
                void testProtected()
                {
                        cout << "Test Protected" << endl;
                }
};