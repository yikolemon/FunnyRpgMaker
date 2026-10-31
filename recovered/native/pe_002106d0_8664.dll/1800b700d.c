/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b700d */

void Unwind_1800b700d(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  for (lVar2 = *(longlong *)(param_2 + 0x28); lVar2 != lVar1; lVar2 = lVar2 + 0x30) {
    FUN_1800b70a4(lVar2);
  }
  return;
}

