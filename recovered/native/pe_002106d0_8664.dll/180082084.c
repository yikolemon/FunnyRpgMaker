/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180082084 */

void FUN_180082084(longlong *param_1)

{
  longlong lVar1;
  
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
    lVar1 = (longlong)*(int *)(*param_1 + 4);
    FUN_18007422a((longlong)param_1 + lVar1,
                  (*(uint *)((longlong)param_1 + lVar1 + 0x10) & 1) +
                  (uint)(*(longlong *)((longlong)param_1 + lVar1 + 0x48) == 0) * 4,0);
    return;
  }
  return;
}

