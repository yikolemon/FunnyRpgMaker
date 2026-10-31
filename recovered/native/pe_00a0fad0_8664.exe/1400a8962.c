/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400a8962 */

void Unwind_1400a8962(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  for (lVar2 = *(longlong *)(param_2 + 0x20); lVar2 != lVar1; lVar2 = lVar2 + 0x58) {
    FUN_1400a710b(lVar2);
  }
  return;
}

