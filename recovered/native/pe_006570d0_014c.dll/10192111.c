/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10192111 */

void FUN_10192111(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x290);
  FUN_10191300(param_1,2);
  if ((float)*(int *)(iVar1 + 0x88) * DAT_102b8c70 <= (float)*(int *)(iVar1 + 0x90)) {
    FUN_101916c8(param_1,*(undefined4 *)(*(int *)(param_1 + 0x30) + 0x1c),
                 *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x20));
  }
  else {
    FUN_10191ca8(param_1,0xffffffff,0xffffffff);
  }
  return;
}

