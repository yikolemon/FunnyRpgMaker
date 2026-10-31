/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801131ac */

int FUN_1801131ac(uint param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1 - 1;
  bVar2 = uVar4 < (param_1 ^ uVar4);
  if (0x9a < param_1 - 0x200) {
    if ((param_1 ^ uVar4) <= uVar4) {
      return -1;
    }
    uVar4 = 0;
    if (param_1 != 0) {
      for (; (param_1 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
    bVar2 = true;
    if ((uVar4 & 0x1c) != 0xc) {
      return -1;
    }
  }
  uVar4 = param_1;
  if (((param_1 & 0xf000) != 0) && (bVar2)) {
    uVar3 = 0;
    if (param_1 != 0) {
      for (; (param_1 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
    uVar4 = uVar3 + 0x28b;
    if ((uVar3 & 0x1c) != 0xc) {
      uVar4 = param_1;
    }
  }
  iVar1 = *(int *)(DAT_180419160 + -0x10c + (longlong)(int)uVar4 * 0xc);
  if ((((*(char *)(DAT_180419160 + 0x1f94) == '\x01') && (param_1 - 0x200 < 0x78)) && (iVar1 != 0))
     && (iVar1 != *(int *)(DAT_180419160 + 0x167c))) {
    return -1;
  }
  return iVar1;
}

