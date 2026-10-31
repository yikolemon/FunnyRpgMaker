/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c8ba7 */

void Unwind_1400c8ba7(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  for (lVar2 = *(longlong *)(param_2 + 0x28); lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
    FUN_14009e06c(lVar2);
  }
  return;
}

