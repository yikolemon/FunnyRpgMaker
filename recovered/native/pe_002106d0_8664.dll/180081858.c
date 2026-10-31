/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180081858 */

void FUN_180081858(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_180075ab6(param_1 + 2);
  if (lVar1 != 0) {
    return;
  }
  lVar1 = (longlong)*(int *)(*param_1 + 4);
  FUN_18007422a((longlong)param_1 + lVar1,
                (uint)(*(longlong *)((longlong)param_1 + lVar1 + 0x48) == 0) << 2 |
                *(uint *)((longlong)param_1 + lVar1 + 0x10) | 2,0);
  return;
}

