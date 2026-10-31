/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000cd67 */

longlong *
FUN_14000cd67(longlong *param_1,undefined1 (*param_2) [32],undefined1 (*param_3) [32],uint param_4,
             int param_5)

{
  ulonglong uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  
  if (param_4 != 0) {
    uVar2 = param_4 & 0x7fffff;
    uVar4 = param_4 >> 0x17;
    if (param_4 < 0x4b800000 || param_5 != 2) {
      uVar1 = FUN_14000d048(uVar2,uVar4);
      FUN_14000d575(param_1,(byte *)param_2,param_3,uVar1,param_5,uVar2,uVar4);
      return param_1;
    }
    FUN_14000ce51(param_1,(byte *)param_2,param_3,uVar2 | 0x800000,uVar4 - 0x96);
    return param_1;
  }
  if (param_5 == 1) {
    if ((longlong)param_3 - (longlong)param_2 < 5) {
LAB_14000ce37:
      *param_1 = (longlong)param_3;
      *(undefined4 *)(param_1 + 1) = 0x84;
      return param_1;
    }
    (*param_2)[4] = 0x30;
    *(undefined4 *)*param_2 = 0x302b6530;
    puVar3 = *param_2 + 5;
  }
  else {
    if (param_2 == param_3) goto LAB_14000ce37;
    (*param_2)[0] = 0x30;
    puVar3 = *param_2 + 1;
  }
  *param_1 = (longlong)puVar3;
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
}

