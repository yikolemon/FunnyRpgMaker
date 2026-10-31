/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018e6f8 */

void FUN_1018e6f8(int param_1)

{
  int iVar1;
  int iVar2;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_20;
  iVar1 = *(int *)(param_1 + 0x290);
  FUN_10191300(param_1,1);
  iVar2 = *(int *)(*(int *)(param_1 + 0x30) + 0x1c);
  local_20 = *(int *)(*(int *)(param_1 + 0x30) + 0x20);
  FUN_10192167(&local_1c,param_1);
  if (((*(int *)(iVar1 + 0x8c) != 0) || (local_1c != iVar2)) || (local_18 != local_20)) {
    FUN_101916c8(param_1,local_1c,local_18);
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_20)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

