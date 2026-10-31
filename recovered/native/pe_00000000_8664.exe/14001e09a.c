/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001e09a */

void FUN_14001e09a(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = ((ulonglong)param_1[2] >> 1) + param_1[2];
  uVar4 = param_2;
  if (((param_2 <= uVar3) && (uVar4 = uVar3, uVar3 >> 0x3e != 0)) &&
     (uVar4 = 0x3fffffffffffffff, 0x3fffffffffffffff < param_2)) {
    uVar4 = param_2;
  }
  plVar1 = (longlong *)*param_1;
  lVar2 = FUN_14001e12a(param_1 + 0xfe,uVar4);
  FUN_1401c5180(lVar2,plVar1,param_1[1] << 2);
  *param_1 = lVar2;
  param_1[2] = uVar4;
  if (plVar1 == param_1 + 4) {
    return;
  }
  thunk_FUN_1401aea30(plVar1);
  return;
}

