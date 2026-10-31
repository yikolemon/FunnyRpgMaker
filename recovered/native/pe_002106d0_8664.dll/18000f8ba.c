/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18000f8ba */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_18000f8ba(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,uint param_4,int param_5)

{
  uint uVar1;
  char *pcVar2;
  longlong lVar3;
  bool bVar4;
  
  uVar1 = param_4;
  if ((int)param_4 < 0) {
    if (param_2 == param_3) goto LAB_18000f988;
    *param_2 = 0x2d;
    param_2 = param_2 + 1;
    uVar1 = param_4 & (uint)DAT_1802ac550;
  }
  if ((~uVar1 & 0x7f800000) != 0) {
    if (param_5 == 4) {
      FUN_18000f9b7(param_1,param_2);
      return param_1;
    }
    FUN_180007773(param_1,param_2);
    return param_1;
  }
  if ((uVar1 & 0x7fffff) == 0) {
    lVar3 = 3;
    pcVar2 = "inf";
  }
  else if ((int)param_4 < 0 && (uVar1 & 0x7fffff) == 0x400000) {
    lVar3 = 8;
    pcVar2 = "nan(ind)";
  }
  else {
    bVar4 = (uVar1 >> 0x16 & 1) == 0;
    pcVar2 = "nan";
    if (bVar4) {
      pcVar2 = "nan(snan)";
    }
    lVar3 = 3;
    if (bVar4) {
      lVar3 = 9;
    }
  }
  if (lVar3 <= (longlong)param_3 - (longlong)param_2) {
    FUN_1802a82f0(param_2,pcVar2,lVar3);
    *param_1 = param_2 + lVar3;
    *(undefined4 *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_18000f988:
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = 0x84;
  return param_1;
}

