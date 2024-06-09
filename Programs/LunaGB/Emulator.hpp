#pragma once
#include <Luna/Runtime/Result.hpp>
using namespace Luna;

struct Emulator
{
    RV init(const void* cartridge_data, usize cartridge_data_size);
    void close();
    ~Emulator()
    {
        close();
    }
};