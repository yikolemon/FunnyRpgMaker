/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140054931 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_140054931(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,ulonglong param_4,
             int param_5,undefined4 param_6)

{
  ulonglong uVar1;
  char *pcVar2;
  longlong lVar3;
  bool bVar4;
  
  uVar1 = param_4;
  if ((longlong)param_4 < 0) {
    if (param_2 == param_3) goto LAB_140054a26;
    *param_2 = 0x2d;
    param_2 = param_2 + 1;
    uVar1 = param_4 & (ulonglong)DAT_1401ced50;
  }
  if ((~uVar1 & 0x7ff0000000000000) != 0) {
    if (param_5 == 3) {
      FUN_140054b49(param_1,param_2,param_3,0x7ff0000000000000,param_6);
      return param_1;
    }
    if (param_5 != 2) {
      if (param_5 == 1) {
        FUN_140054a88(param_1,param_2,param_3,0x7ff0000000000000,param_6);
        return param_1;
      }
      FUN_140054dff(param_1,param_2,param_3,0x7ff0000000000000,param_6);
      return param_1;
    }
    FUN_140054ac5(param_1,param_2,param_3,0x7ff0000000000000,param_6);
    return param_1;
  }
  if ((uVar1 & 0xfffffffffffff) == 0) {
    lVar3 = 3;
    pcVar2 = "inf";
  }
  else if ((longlong)param_4 < 0 && (uVar1 & 0xfffffffffffff) == 0x8000000000000) {
    lVar3 = 8;
    pcVar2 = "nan(ind)";
  }
  else {
    bVar4 = (uVar1 & 0x8000000000000) == 0;
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
    FUN_1401c5180(param_2,pcVar2,lVar3);
    *param_1 = param_2 + lVar3;
    *(undefined4 *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_140054a26:
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = 0x84;
  return param_1;
}

