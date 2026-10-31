/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010e481 */

int FUN_1010e481(uint param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = param_1 - 1;
  bVar1 = uVar4 < (param_1 ^ uVar4);
  if (0x9a < param_1 - 0x200) {
    if ((param_1 ^ uVar4) <= uVar4) {
      return -1;
    }
    uVar4 = 0;
    if (param_1 != 0) {
      for (; (param_1 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
    bVar1 = true;
    if ((uVar4 & 0x1c) != 0xc) {
      return -1;
    }
  }
  uVar4 = param_1;
  if (((param_1 & 0xf000) != 0) && (bVar1)) {
    uVar2 = 0;
    if (param_1 != 0) {
      for (; (param_1 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    if ((uVar2 & 0x1c) == 0xc) {
      uVar4 = uVar2 + 0x28b;
    }
  }
  iVar3 = *(int *)(DAT_1039d74c + -0x264 + uVar4 * 0xc);
  if ((((*(char *)(DAT_1039d74c + 0x1e34) == '\x01') && (param_1 - 0x200 < 0x78)) && (iVar3 != 0))
     && (iVar3 != *(int *)(DAT_1039d74c + 0x1528))) {
    iVar3 = -1;
  }
  return iVar3;
}

