/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180060b2e */

void Unwind_180060b2e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  for (lVar2 = *(longlong *)(param_2 + 0x28); lVar2 != lVar1; lVar2 = lVar2 + 0x60) {
    FUN_1800616f0(lVar2);
  }
  return;
}

