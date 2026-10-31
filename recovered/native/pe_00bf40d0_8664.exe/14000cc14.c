/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000cc14 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_14000cc14(longlong *param_1,undefined1 (*param_2) [32],undefined1 (*param_3) [32],uint param_4)

{
  char *pcVar1;
  ulonglong uVar2;
  bool bVar3;
  uint uVar4;
  
  uVar4 = param_4;
  if ((int)param_4 < 0) {
    if (param_2 == param_3) goto LAB_14000ccd0;
    (*param_2)[0] = 0x2d;
    param_2 = (undefined1 (*) [32])(*param_2 + 1);
    uVar4 = param_4 & (uint)DAT_1400b6b20;
  }
  if ((~uVar4 & 0x7f800000) != 0) {
    FUN_14000ccff(param_1,param_2,param_3,uVar4,0);
    return param_1;
  }
  if ((uVar4 & 0x7fffff) == 0) {
    uVar2 = 3;
    pcVar1 = "inf";
  }
  else if ((int)param_4 < 0 && (uVar4 & 0x7fffff) == 0x400000) {
    uVar2 = 8;
    pcVar1 = "nan(ind)";
  }
  else {
    bVar3 = (uVar4 >> 0x16 & 1) == 0;
    pcVar1 = "nan";
    if (bVar3) {
      pcVar1 = "nan(snan)";
    }
    uVar2 = 3;
    if (bVar3) {
      uVar2 = 9;
    }
  }
  if ((longlong)uVar2 <= (longlong)param_3 - (longlong)param_2) {
    FUN_1400b3550((undefined8 *)param_2,(undefined8 *)pcVar1,uVar2);
    *param_1 = (longlong)(*param_2 + uVar2);
    *(undefined4 *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_14000ccd0:
  *param_1 = (longlong)param_3;
  *(undefined4 *)(param_1 + 1) = 0x84;
  return param_1;
}

