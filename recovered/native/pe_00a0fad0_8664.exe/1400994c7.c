/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400994c7 */

void Unwind_1400994c7(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  for (lVar2 = *(longlong *)(param_2 + 0x20); lVar2 != lVar1; lVar2 = lVar2 + 0xde0) {
    FUN_14008d1ec(lVar2);
  }
  return;
}

