/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800413a4 */

void FUN_1800413a4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  if (*(ulonglong *)(param_1 + 0x30) < 0x10) {
    lVar1 = param_1 + 0x18;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x18);
  }
  FUN_180018bde(param_4,lVar1,*(longlong *)(param_1 + 0x28) + lVar1);
  return;
}

