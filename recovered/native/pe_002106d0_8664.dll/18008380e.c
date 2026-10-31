/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008380e */

int FUN_18008380e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_18008385e(param_1[1]);
  if (iVar1 == -1) {
    param_1 = (longlong *)*param_1;
    lVar2 = (longlong)*(int *)(*param_1 + 4);
    FUN_18007422a((longlong)param_1 + lVar2,
                  (uint)(*(longlong *)((longlong)param_1 + lVar2 + 0x48) == 0) << 2 |
                  *(uint *)((longlong)param_1 + lVar2 + 0x10) | 1,0);
  }
  return iVar1;
}

