/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bd731 */

void Unwind_1800bd731(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  for (lVar2 = *(longlong *)(param_2 + 0x28); lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
    FUN_1800bd84e(lVar2);
  }
  return;
}

