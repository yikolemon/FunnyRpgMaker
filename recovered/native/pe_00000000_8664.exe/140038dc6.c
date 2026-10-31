/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140038dc6 */

void Unwind_140038dc6(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  for (lVar2 = *(longlong *)(param_2 + 0x20); lVar2 != lVar1; lVar2 = lVar2 + 0x180) {
    FUN_1400386c0(lVar2);
  }
  return;
}

