/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400451ef */

void Unwind_1400451ef(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  for (lVar2 = *(longlong *)(param_2 + 0x28); lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
    FUN_140001e90(lVar2);
  }
  return;
}

