#ifndef _ALL_BITWISE_OPS_
#define _ALL_BITWISE_OPS_

#include <iostream>

void AllBitwiseOps()
{
    std::cout << "\t \t \t&\t|\t^\t<<\t>>" << std::endl << std::endl;
    std::cout << "\t0\t1\t" << (0&1) <<"\t" << (0|1) << "\t" << (0^1) << "\t" << (0<<1) << "\t" << (0>>1) << std::endl;
    std::cout << "\t1\t0\t" << (1&0) <<"\t" << (1|0) << "\t" << (1^0) << "\t" << (1<<0) << "\t" << (1>>0) << std::endl;
    std::cout << "\t1\t1\t" << (1&1) <<"\t" << (1|1) << "\t" << (1^1) << "\t" << (1<<1) << "\t" << (1>>1) << std::endl;
    std::cout << "\t0\t0\t" << (0&0) <<"\t" << (0|0) << "\t" << (0^0) << "\t" << (0<<0) << "\t" << (0>>0) << std::endl;
}

#endif
