/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140290af8 */

void FUN_140290af8(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140286f86(param_1 + 3);
  if (lVar1 != 0) {
    return;
  }
  lVar1 = (longlong)*(int *)(*param_1 + 4);
  FUN_1402856fa((longlong)param_1 + lVar1,
                (uint)(*(longlong *)((longlong)param_1 + lVar1 + 0x48) == 0) << 2 |
                *(uint *)((longlong)param_1 + lVar1 + 0x10) | 2,0);
  return;
}

