/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d1df2 */

int FUN_1400d1df2(byte *param_1,int param_2)

{
  byte bVar1;
  
  if (param_2 < 0x4e4) {
    if (param_2 < 0x3b5) {
      if (param_2 == 0x3a4) {
        return ((byte)((*param_1 ^ 0x20) + 0x5f) < 0x3c) + 1;
      }
      if (param_2 != 0x3a8) {
        return -1;
      }
    }
    else if (1 < param_2 - 0x3b5U) {
      if (param_2 == 0x4b0) {
        bVar1 = param_1[1];
      }
      else {
        if (param_2 != 0x4b1) {
          return -1;
        }
        bVar1 = *param_1;
      }
      return (uint)((bVar1 & 0xfc) == 0xd8) * 2 + 2;
    }
    return ((char)*param_1 < '\0') + 1;
  }
  if (param_2 < 0x7ffe) {
    if ((param_2 - 0x7ffcU < 2) || (param_2 == 0x4e4)) {
      return 1;
    }
  }
  else {
    if (param_2 - 0x7ffeU < 2) {
      return 4;
    }
    if (param_2 == 0xfde9) {
      bVar1 = *param_1;
      if (-1 < (char)bVar1) {
        return 1;
      }
      if ((bVar1 & 0xe0) == 0xc0) {
        return 2;
      }
      if ((bVar1 & 0xf0) == 0xe0) {
        return 3;
      }
      if ((bVar1 & 0xf8) == 0xf0) {
        return 4;
      }
      if ((bVar1 & 0xfc) == 0xf8) {
        return 5;
      }
      if ((bVar1 & 0xfe) == 0xfc) {
        return 6;
      }
    }
  }
  return -1;
}

