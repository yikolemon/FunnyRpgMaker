/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140129fb0 */

uint FUN_140129fb0(uint param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  uVar2 = param_1 & 0x1f;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_14012eb90();
    *param_2 = uVar1;
    if (((param_1 & 8) == 0) || (-1 < (char)uVar1)) {
      if (((param_1 & 4) == 0) || ((uVar1 >> 9 & 1) == 0)) {
        if (((param_1 & 1) == 0) || ((uVar1 >> 10 & 1) == 0)) {
          if (((param_1 & 2) != 0) && ((uVar1 >> 0xb & 1) != 0)) {
            uVar2 = param_1 & 0x1d;
            uVar3 = (ulonglong)(param_1 & 0x10);
          }
        }
        else {
          uVar3 = 8;
          uVar2 = param_1 & 0x1e;
        }
      }
      else {
        uVar3 = 4;
        uVar2 = param_1 & 0x1b;
      }
    }
    else {
      uVar3 = 1;
      uVar2 = param_1 & 0x17;
    }
    if (((param_1 & 0x10) != 0) && ((uVar1 >> 0xc & 1) != 0)) {
      uVar3 = uVar3 | 0x20;
      uVar2 = uVar2 & 0xffffffef;
    }
    if (uVar2 != 0) {
      FUN_14012ebd0(0x1f80,0xffc0);
    }
    if ((uVar3 != 0) && ((uVar3 & ~uVar1) != 0)) {
      if (uVar2 == 0) {
        FUN_14012eba0(uVar1 | uVar3);
      }
      else {
        FUN_14012ec60(uVar3);
      }
    }
  }
  return uVar2;
}

