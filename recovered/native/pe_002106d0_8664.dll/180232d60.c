/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180232d60 */

undefined8 FUN_180232d60(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 3) {
    FUN_18023340b();
  }
  else if (iVar1 == 2) {
    FUN_180232fca();
  }
  else {
    if (iVar1 != 1) {
      return 6;
    }
    FUN_180232dcc();
  }
  return 0;
}

