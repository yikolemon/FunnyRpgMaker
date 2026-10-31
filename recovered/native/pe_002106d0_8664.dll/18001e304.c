/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001e304 */

void FUN_18001e304(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  while (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + 0x18);
    thunk_FUN_180290e40(*(undefined8 *)(param_2 + 0x10));
    thunk_FUN_1802464a0(param_2,0x20);
    param_2 = lVar1;
  }
  return;
}

