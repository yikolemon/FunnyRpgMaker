/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18018673f */

void Unwind_18018673f(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  for (lVar2 = *(longlong *)(param_2 + 0x28); lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
    FUN_18017ff8b(lVar2);
  }
  return;
}

