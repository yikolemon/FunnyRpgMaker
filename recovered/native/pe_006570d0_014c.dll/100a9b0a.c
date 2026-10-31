/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a9b0a */

undefined4 __fastcall FUN_100a9b0a(byte *param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  bVar1 = *param_1;
  if ((char)bVar1 < '\0') {
    if ((bVar1 & 0xe0) == 0xc0) {
      if (((param_2 != 1) && (0xc1 < bVar1)) && ((char)param_1[1] < -0x40)) {
        return 2;
      }
    }
    else if ((bVar1 & 0xf0) == 0xe0) {
      if (((2 < param_2) && (bVar2 = param_1[1], (char)bVar2 < -0x40)) &&
         (((char)param_1[2] < -0x40 &&
          ((bVar1 != 0xe0 || 0x9f < bVar2 && (bVar1 != 0xed || bVar2 < 0xa0)))))) {
        return 3;
      }
    }
    else if ((((3 < param_2 && (bVar1 & 0xf8) == 0xf0) && (bVar2 = param_1[1], (char)bVar2 < -0x40))
             && ((char)param_1[2] < -0x40)) &&
            ((((char)param_1[3] < -0x40 && (bVar1 < 0xf5 && (0x8f < bVar2 || bVar1 != 0xf0))) &&
             (bVar2 < 0x90 || bVar1 != 0xf4)))) {
      return 4;
    }
  }
  return 1;
}

