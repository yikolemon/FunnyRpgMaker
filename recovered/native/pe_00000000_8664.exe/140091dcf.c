/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140091dcf */

bool FUN_140091dcf(uint param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  if (0x9a < param_1 - 0x200) {
    if ((param_1 ^ param_1 - 1) <= param_1 - 1) {
      return true;
    }
    uVar3 = 0;
    if (param_1 != 0) {
      for (; (param_1 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
    if ((uVar3 & 0x1c) != 0xc) {
      return true;
    }
  }
  if ((((*(char *)(DAT_140f2a910 + 0x1f94) != '\x01') || (0x77 < param_1 - 0x200)) || (param_2 == 0)
      ) || (param_2 == *(int *)(DAT_140f2a910 + 0x167c))) {
    uVar3 = param_1;
    if (((param_1 & 0xf000) != 0) && (param_1 - 1 < (param_1 ^ param_1 - 1))) {
      uVar2 = 0;
      if (param_1 != 0) {
        for (; (param_1 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
        }
      }
      uVar3 = uVar2 + 0x28b;
      if ((uVar2 & 0x1c) != 0xc) {
        uVar3 = param_1;
      }
    }
    lVar1 = DAT_140f2a910 + (longlong)(int)uVar3 * 0xc;
    if (param_2 == 0) {
      return *(char *)(lVar1 + -0x104) == '\0';
    }
    if ((*(int *)(lVar1 + -0x10c) == param_2) ||
       ((*(int *)(lVar1 + -0x10c) == -1 && (*(char *)(lVar1 + -0x104) == '\0')))) {
      return true;
    }
  }
  return false;
}

