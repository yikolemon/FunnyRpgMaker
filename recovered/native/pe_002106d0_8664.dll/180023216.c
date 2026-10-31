/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180023216 */

void FUN_180023216(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x20) != lVar1 + 0x40) {
      thunk_FUN_180290e40();
    }
    thunk_FUN_1802464a0(lVar1,0x158);
    return;
  }
  return;
}

