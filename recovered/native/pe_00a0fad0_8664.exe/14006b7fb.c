/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006b7fb */

void Unwind_14006b7fb(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  for (lVar2 = *(longlong *)(param_2 + 0x28); lVar2 != lVar1; lVar2 = lVar2 + 0x10) {
    FUN_1400578a6(lVar2);
  }
  return;
}

