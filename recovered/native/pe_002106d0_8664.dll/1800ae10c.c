/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ae10c */

undefined8 FUN_1800ae10c(byte *param_1,ulonglong param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  bVar1 = *param_1;
  uVar3 = 1;
  if ((char)bVar1 < '\0') {
    if ((bVar1 & 0xe0) != 0xc0) {
      if ((bVar1 & 0xf0) == 0xe0) {
        if (((2 < param_2) && (bVar2 = param_1[1], (char)bVar2 < -0x40)) &&
           (((char)param_1[2] < -0x40 &&
            ((bVar1 != 0xe0 || 0x9f < bVar2 && (bVar1 != 0xed || bVar2 < 0xa0)))))) {
          return 3;
        }
      }
      else if (((((3 < param_2 && (bVar1 & 0xf8) == 0xf0) &&
                 (bVar2 = param_1[1], (char)bVar2 < -0x40)) && ((char)param_1[2] < -0x40)) &&
               (((char)param_1[3] < -0x40 && (bVar1 < 0xf5 && (0x8f < bVar2 || bVar1 != 0xf0))))) &&
              (bVar2 < 0x90 || bVar1 != 0xf4)) {
        return 4;
      }
      return 1;
    }
    if (param_2 == 1) {
      return 1;
    }
    if (bVar1 < 0xc2) {
      return 1;
    }
    uVar3 = 2;
    if (-0x41 < (char)param_1[1]) {
      return 1;
    }
  }
  return uVar3;
}

