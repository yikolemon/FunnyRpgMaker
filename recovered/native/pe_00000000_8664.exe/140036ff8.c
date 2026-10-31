/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140036ff8 */

void FUN_140036ff8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  if (*(ulonglong *)(param_1 + 0x30) < 0x10) {
    lVar1 = param_1 + 0x18;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x18);
  }
  FUN_140019fc2(param_4,lVar1,*(longlong *)(param_1 + 0x28) + lVar1);
  return;
}

