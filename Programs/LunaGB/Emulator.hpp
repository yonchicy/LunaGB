#pragma once
#include <Luna/Runtime/Result.hpp>
using namespace Luna;

struct Emulator
{
    RV init(const void* cartridge_data, usize cartridge_data_size);
    byte_t * rom_data = nullptr;
    usize rom_data_size = 0;

    void close();
    ~Emulator()
    {
        close();
    }
};