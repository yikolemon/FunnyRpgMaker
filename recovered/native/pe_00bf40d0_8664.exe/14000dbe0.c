/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000dbe0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_14000dbe0(longlong *param_1,undefined1 (*param_2) [32],undefined1 (*param_3) [32],
             ulonglong param_4)

{
  char *pcVar1;
  ulonglong uVar2;
  bool bVar3;
  
  uVar2 = param_4;
  if ((longlong)param_4 < 0) {
    if (param_2 == param_3) goto LAB_14000dcb7;
    (*param_2)[0] = 0x2d;
    param_2 = (undefined1 (*) [32])(*param_2 + 1);
    uVar2 = param_4 & (ulonglong)DAT_1400b6b00;
  }
  if ((~uVar2 & 0x7ff0000000000000) != 0) {
    FUN_14000dce6(param_1,param_2,param_3,0x7ff0000000000000,0);
    return param_1;
  }
  if ((uVar2 & 0xfffffffffffff) == 0) {
    uVar2 = 3;
    pcVar1 = "inf";
  }
  else if ((longlong)param_4 < 0 && (uVar2 & 0xfffffffffffff) == 0x8000000000000) {
    uVar2 = 8;
    pcVar1 = "nan(ind)";
  }
  else {
    bVar3 = (uVar2 & 0x8000000000000) == 0;
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
LAB_14000dcb7:
  *param_1 = (longlong)param_3;
  *(undefined4 *)(param_1 + 1) = 0x84;
  return param_1;
}

