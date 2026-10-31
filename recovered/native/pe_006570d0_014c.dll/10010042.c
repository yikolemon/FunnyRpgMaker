/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10010042 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10010042(undefined1 *param_1,undefined1 *param_2,uint param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  
  uVar4 = param_3;
  if ((int)param_3 < 0) {
    if (param_1 == param_2) {
      return param_1;
    }
    *param_1 = 0x2d;
    param_1 = param_1 + 1;
    uVar4 = param_3 & (uint)DAT_1028b410;
  }
  if ((~uVar4 & 0x7f800000) == 0) {
    if ((uVar4 & 0x7fffff) == 0) {
      iVar2 = 3;
      pcVar1 = "inf";
    }
    else if ((int)param_3 < 0 && (uVar4 & 0x7fffff) == 0x400000) {
      iVar2 = 8;
      pcVar1 = "nan(ind)";
    }
    else {
      bVar3 = (uVar4 >> 0x16 & 1) == 0;
      pcVar1 = "nan";
      if (bVar3) {
        pcVar1 = "nan(snan)";
      }
      iVar2 = 3;
      if (bVar3) {
        iVar2 = 9;
      }
    }
    if (iVar2 <= (int)param_2 - (int)param_1) {
      FUN_1025b2d0(param_1,pcVar1,iVar2);
      param_2 = param_1 + iVar2;
    }
  }
  else if (param_4 == 4) {
    param_2 = (undefined1 *)FUN_1001013e(param_1,param_2,uVar4);
  }
  else {
    param_2 = (undefined1 *)FUN_10007b33(param_1,param_2,uVar4,param_4);
  }
  return param_2;
}

