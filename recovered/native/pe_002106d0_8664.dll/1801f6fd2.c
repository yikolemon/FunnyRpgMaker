/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f6fd2 */

void FUN_1801f6fd2(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[7] - (int)param_1[9];
  *(int *)(param_1 + 0xb) = iVar1;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(int *)(param_1 + 0xc) = iVar1 + *(int *)((longlong)param_1 + 0x4c);
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  iVar1 = (int)param_1[0x1e] + *(int *)((longlong)param_1 + 0x44);
  *(int *)((longlong)param_1 + 0xfc) = iVar1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(int *)((longlong)param_1 + 0x104) = iVar1 - *(int *)((longlong)param_1 + 0xf4);
  if (((*(int *)(*(longlong *)(*param_1 + 0x90) + 0x70) == 0x28) && (param_1[0x1b] != 0)) &&
     (2 < *(int *)(param_1[0x1b] + 0x328) - 2U)) {
    iVar1 = *(int *)((longlong)param_1 + 0x4c) / 2;
    *(int *)(param_1 + 0x1f) = iVar1;
    *(int *)(param_1 + 0x20) = iVar1;
  }
  return;
}

