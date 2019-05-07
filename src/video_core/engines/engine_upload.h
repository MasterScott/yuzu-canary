// Copyright 2019 yuzu Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include <cstddef>
#include <vector>
#include "common/bit_field.h"
#include "common/common_funcs.h"
#include "common/common_types.h"

namespace Tegra {
class MemoryManager;
}

namespace Tegra::Engines::Upload {

struct Registers {
    u32 line_length_in;
    u32 line_count;

    struct {
        u32 address_high;
        u32 address_low;
        u32 pitch;
        union {
            BitField<0, 4, u32> block_width;
            BitField<4, 4, u32> block_height;
            BitField<8, 4, u32> block_depth;
        };
        u32 width;
        u32 height;
        u32 depth;
        u32 z;
        u32 x;
        u32 y;

        GPUVAddr Address() const {
            return static_cast<GPUVAddr>((static_cast<GPUVAddr>(address_high) << 32) | address_low);
        }

        u32 BlockWidth() const {
            return 1U << block_width.Value();
        }

        u32 BlockHeight() const {
            return 1U << block_height.Value();
        }

        u32 BlockDepth() const {
            return 1U << block_depth.Value();
        }
    } dest;
};

class State {
public:
    State(MemoryManager& memory_manager, Registers& regs);
    ~State() = default;

    void ProcessExec(const bool is_linear);
    void ProcessData(const u32 data, const bool is_last_call);

private:
    u32 write_offset = 0;
    u32 copy_size = 0;
    std::vector<u8> inner_buffer;
    std::vector<u8> tmp_buffer;
    bool is_linear = false;
    Registers& regs;
    MemoryManager& memory_manager;
};

} // namespace Tegra::Engines::Upload
