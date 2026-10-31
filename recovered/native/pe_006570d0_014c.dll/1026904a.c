/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026904a */

int FUN_1026904a(uint param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    if (param_1 < 0xe) {
      return *(int *)(&DAT_10324bb4 + param_1 * 8);
    }
    if ((param_1 < 0x719) && (iVar1 = FUN_102690cd(param_1,&DAT_10324bb8,0x2d), iVar1 != 0)) {
      return *(int *)(iVar1 + 4);
    }
  }
  if (param_1 - 0x13 < 0x12) {
    iVar1 = 0xd;
  }
  else {
    iVar1 = (-(uint)(0xe < param_1 - 0xbc) & 0xe) + 8;
  }
  return iVar1;
}

