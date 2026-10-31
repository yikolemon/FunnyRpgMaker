/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10113c9d */

bool FUN_10113c9d(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  if (0x9a < param_1 - 0x200) {
    if ((param_1 ^ param_1 - 1) <= param_1 - 1) {
      return true;
    }
    uVar2 = 0;
    if (param_1 != 0) {
      for (; (param_1 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    if ((uVar2 & 0x1c) != 0xc) {
      return true;
    }
  }
  if ((((*(char *)(DAT_1039d74c + 0x1e34) == '\x01') && (param_1 - 0x200 < 0x78)) && (param_2 != 0))
     && (param_2 != *(int *)(DAT_1039d74c + 0x1528))) {
    bVar3 = false;
  }
  else {
    if (((param_1 & 0xf000) != 0) && (param_1 - 1 < (param_1 ^ param_1 - 1))) {
      uVar2 = 0;
      if (param_1 != 0) {
        for (; (param_1 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
        }
      }
      if ((uVar2 & 0x1c) == 0xc) {
        param_1 = uVar2 + 0x28b;
      }
    }
    iVar1 = DAT_1039d74c + param_1 * 0xc;
    if (param_2 == 0) {
      bVar3 = *(char *)(iVar1 + -0x25c) == '\0';
    }
    else if ((*(int *)(iVar1 + -0x264) == param_2) ||
            ((bVar3 = false, *(int *)(iVar1 + -0x264) == -1 && (*(char *)(iVar1 + -0x25c) == '\0')))
            ) {
      bVar3 = true;
    }
  }
  return bVar3;
}

