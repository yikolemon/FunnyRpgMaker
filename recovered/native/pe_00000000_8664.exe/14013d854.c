/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013d854 */

void FUN_14013d854(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x250) < 1) {
    *(undefined4 *)(param_1 + 0x20) = 0x88;
    return;
  }
  uVar3 = *(int *)(param_1 + 0x250) - 1;
  *(uint *)(param_1 + 0x250) = uVar3;
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 600) + (ulonglong)uVar3 * 0x18);
  iVar2 = puVar1[2];
  puVar1[2] = iVar2 + -1;
  if (1 < iVar2) {
    *(int *)(param_1 + 0x250) = *(int *)(param_1 + 0x250) + 1;
    *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(*(longlong *)(puVar1 + 4) + 4);
    *(undefined4 *)(param_1 + 500) = 0;
    return;
  }
  FUN_1401482a4(param_1,*puVar1,puVar1[1]);
  return;
}

