/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003b79c */

void FUN_14003b79c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x250) < 1) {
    *(undefined4 *)(param_1 + 0x20) = 0x88;
    return;
  }
  uVar2 = *(int *)(param_1 + 0x250) - 1;
  *(uint *)(param_1 + 0x250) = uVar2;
  puVar1 = (uint *)(*(longlong *)(param_1 + 600) + (ulonglong)uVar2 * 0x18);
  uVar2 = puVar1[2];
  puVar1[2] = uVar2 - 1;
  if (1 < (int)uVar2) {
    *(int *)(param_1 + 0x250) = *(int *)(param_1 + 0x250) + 1;
    *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(*(longlong *)(puVar1 + 4) + 4);
    *(undefined4 *)(param_1 + 500) = 0;
    return;
  }
  FUN_1400461ec(param_1,*puVar1,puVar1[1]);
  return;
}

