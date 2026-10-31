/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400bf4ac */

void FUN_1400bf4ac(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_2 + 0x20);
  if (uVar1 < *(ulonglong *)(param_1 + 0x20)) {
    FUN_1400bf50a(param_2,param_1);
    uVar1 = *(ulonglong *)(param_2 + 0x20);
  }
  if (*(ulonglong *)(param_3 + 0x20) < uVar1) {
    FUN_1400bf50a(param_3,param_2);
    if (*(ulonglong *)(param_2 + 0x20) < *(ulonglong *)(param_1 + 0x20)) {
      FUN_1400bf50a(param_2,param_1);
      return;
    }
  }
  return;
}

