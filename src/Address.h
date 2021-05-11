//
// Created by PC_volt on 19/04/2021.
//

#ifndef MELTYLIB_ADDRESS_H
#define MELTYLIB_ADDRESS_H

namespace MeltyLib
{
    enum Address {
        ADDR_CHARACTER_1 = 0x555130,
        ADDR_CHARACTER_2 = 0x555C2C,
        ADDR_CHARACTER_3 = 0x556728,
        ADDR_CHARACTER_4 = 0x557224,
        //0xDC gap between these two
        ADDR_COMBO_INFO = 0x557DFC,

        ADDR_CAMERA_POS_COMPUTE = 0x44ba40,
        ADDR_CAMERA_ZOOM_COMPUTE = 0x44bcb0,

        ADDR_WORLD_TIMER = 0x55D1D4,
        ADDR_PAUSE_FLAG = 0x55d203,

        ADDR_ROUND_TIMER = 0x562A3C,
        ADDR_REAL_TIMER = 0x562A40,
        //0x562A58
        //0x562A4C
        //0x562A6F
        ADDR_WHICH_BATTLESCENE_FLAG = 0x562A74,

        ADDR_CAMERA_X = 0x55DEC4,
        ADDR_CAMERA_Y = 0x55DEC8,
        ADDR_CAMERA_Z = 0x55DECC,

        ADDR_CAMERA_NEXT_X = 0x555124,
        ADDR_CAMERA_NEXT_Y = 0x555128,

        ADDR_CAMERA_DIFF_X = 0x5585E8,
        ADDR_CAMERA_DIFF_Y = 0x5585EC,
        ADDR_CAMERA_DIFF_Z = 0x5585F0,
        ADDR_COUNTERHIT_MODE = 0x77C210, //0 to 4
    };
}

#endif //MELTYLIB_ADDRESS_H
