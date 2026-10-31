/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18013095d */

void Unwind_18013095d(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0xb8);
  while (lVar2 != 0) {
    if (*(longlong *)(param_2 + 0x58 + *(longlong *)(param_2 + 0xb8)) != 0) {
      FUN_1800fe8d4();
    }
    plVar1 = (longlong *)(param_2 + 0xb8);
    *plVar1 = *plVar1 + -0x10;
    lVar2 = *plVar1;
  }
  return;
}

