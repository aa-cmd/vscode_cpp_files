#include "numword_1.h"
#include <cstdio>

using namespace ican;

numword::~numword()
{
    clearbuf();
}

//asignment operator
numnum numword::operator=(const numnum &num)
{
    setnum(num);
    return getnum();
}

const char *numword::words()
{
    return words(_num);
}

const char *numword::words(const numnum &num)
{
    if (num > _maxnum)
        return errnum;

    initbuf();
    numnum n = num;
    if(n == 0)
    {
        appendbuf(_singles[n]);
        return _buf;
    }
}

int main()
{
    printf("HEllo World!!!");
}