#include "lz4.h"     
#include "lz4hc.h"   
#include "lz4frame.h"

int main()
{
    LZ4_compress(nullptr,nullptr,0);
    return 0;
}
