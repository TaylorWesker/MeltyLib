//
// Created by PC_volt on 19/04/2021.
//

#ifndef UNTITLED_ADDRESSESANDSTUFF_H
#define UNTITLED_ADDRESSESANDSTUFF_H

#endif //UNTITLED_ADDRESSESANDSTUFF_H


/*
CSceneBattle 0x535BD4
CSceneCharaSelect 0x535C50

in_EAX + 0x324 sprite ?

 462780: noop this function to get the funny results

 67bde8

 451720 = practice mode ?

 00555444 P1 facing right flag (byte)
 0555D04 P2 Guard gauge quality (float)

 0054EEE8 game mode (1 practice mode, 20 chara select, (4 bytes)
 0074D900 moon selector (4 bytes)
 0074D904 color selector (4 bytes)

 0055D208 slowdown timer (2 bytes)
 0055D1D4 world timer (4 bytes)
 00562A40 real timer (4 bytes)


 0055D203 pause flag (byte)
 00562A64 training mode paused (4 bytes)
 0x767440 menu state counter (4 bytes)

 54D048

 54EB70: zoom 1
 54EB74: zoom 2
 54EB78: scale
 55DEC4: camera X
 55DEC8: camera Y

 564B14: camera X
 564B18: camera Y

 55D20B: intro state (byte)
 563948: outro state

 - In training mode, your inputs are not accepted on the first 6 frames when resetting.
 - If the macro starts by a jump, the dummy will always jump
 - Frame advantage
 - Hitbox viewer without slowdown
 - Framestep
 - Macro
 - Fix dummy "block first attack"
*/