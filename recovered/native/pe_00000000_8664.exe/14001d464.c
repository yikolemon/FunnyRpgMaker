/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001d464 */

void FUN_14001d464(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  plVar1 = (longlong *)*param_1;
  uVar3 = ((ulonglong)param_1[2] >> 1) + param_1[2];
  if (uVar3 < param_2) {
    uVar3 = param_2;
  }
  lVar2 = FUN_140019a4e((longlong)param_1 + 0x214,uVar3);
  FUN_1401c5180(lVar2,plVar1,param_1[1]);
  *param_1 = lVar2;
  param_1[2] = uVar3;
  if (plVar1 != param_1 + 4) {
    thunk_FUN_1401aea30(plVar1);
    return;
  }
  return;
}

