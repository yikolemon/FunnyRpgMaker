/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101654f7 */

void FUN_101654f7(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  iVar3 = *(int *)(param_1 + 0x48) * 0x74 + *(int *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x158);
  if (*(char *)(iVar1 + 0x185) == '\x01') {
    FUN_10111542();
  }
  iVar2 = 0x4c;
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    iVar2 = (uint)*(byte *)(param_1 + 0x1f9) * 4 + 0x44;
  }
  fVar4 = (float10)FUN_100fdbca(*(undefined4 *)(iVar3 + iVar2),*(undefined4 *)(iVar1 + 0x15c));
  *(float *)(iVar3 + iVar2) = (float)fVar4;
  if (*(char *)(iVar3 + 0x66) == '\x01') {
    fVar4 = (float10)FUN_100fdbca(*(undefined4 *)(param_1 + 0x54),
                                  *(float *)(iVar1 + 0x160) + *(float *)(param_1 + 0x5c));
    *(float *)(param_1 + 0x54) = (float)fVar4;
  }
  *(undefined4 *)(iVar3 + 0x40) = *(undefined4 *)(iVar1 + 0x218);
  fVar4 = (float10)FUN_100fdbca(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(iVar1 + 0x180));
  *(float *)(param_1 + 0x60) = (float)fVar4;
  return;
}

