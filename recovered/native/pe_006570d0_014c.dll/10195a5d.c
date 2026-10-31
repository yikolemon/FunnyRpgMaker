/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10195a5d */

byte * __fastcall FUN_10195a5d(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if (bVar1 < 0x20) {
    if (bVar1 < 0x18) {
      if (bVar1 < 0x10) {
        if (7 < bVar1) {
          FUN_10195c5b();
          return param_1 + (uint)param_1[1] + (uint)*param_1 * 0x100 + -0x7fd;
        }
        if (bVar1 == 4) {
          FUN_10195c1e();
          return param_1 + 6;
        }
        if (bVar1 != 6) {
          if (bVar1 != 7) {
            return param_1;
          }
          FUN_10195c5b();
          return param_1 + (uint)param_1[2] + (uint)param_1[1] * 0x100 + 4;
        }
      }
      FUN_10195c1e();
      param_1 = param_1 + 5;
    }
    else {
      FUN_10195c1e();
      param_1 = param_1 + 4;
    }
  }
  else if ((char)bVar1 < '\0') {
    FUN_10195c1e();
    param_1 = param_1 + 2;
  }
  else if (bVar1 < 0x40) {
    FUN_10195c5b();
    param_1 = param_1 + (*param_1 - 0x1e);
  }
  else {
    FUN_10195c1e();
    param_1 = param_1 + 3;
  }
  return param_1;
}

