/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14004dfbc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_14004dfbc(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,uint param_4,int param_5)

{
  uint uVar1;
  char *pcVar2;
  longlong lVar3;
  bool bVar4;
  
  uVar1 = param_4;
  if ((int)param_4 < 0) {
    if (param_2 == param_3) goto LAB_14004e08a;
    *param_2 = 0x2d;
    param_2 = param_2 + 1;
    uVar1 = param_4 & (uint)DAT_1401390e0;
  }
  if ((~uVar1 & 0x7f800000) != 0) {
    if (param_5 == 4) {
      FUN_14004e0b9(param_1,param_2);
      return param_1;
    }
    FUN_1400469c9(param_1,param_2);
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
    FUN_140135ff0(param_2,pcVar2,lVar3);
    *param_1 = param_2 + lVar3;
    *(undefined4 *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_14004e08a:
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = 0x84;
  return param_1;
}

