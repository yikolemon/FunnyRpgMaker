/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140066068 */

int FUN_140066068(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_14000c9ac(param_1[1]);
  if (iVar1 == -1) {
    param_1 = (longlong *)*param_1;
    lVar2 = (longlong)*(int *)(*param_1 + 4);
    FUN_14000a9f0((longlong)param_1 + lVar2,
                  (uint)(*(longlong *)((longlong)param_1 + lVar2 + 0x48) == 0) << 2 |
                  *(uint *)((longlong)param_1 + lVar2 + 0x10) | 1,0);
  }
  return iVar1;
}

