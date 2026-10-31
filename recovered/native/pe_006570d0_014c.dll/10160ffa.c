/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10160ffa */

void FUN_10160ffa(int param_1,int param_2,int param_3)

{
  short *psVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)*(short *)(*(int *)(param_1 + 0x10) + 0x56 + param_2 * 0x74);
  if (param_3 != iVar3) {
    bVar2 = iVar3 <= param_3;
    iVar4 = (uint)bVar2 * 2 + -1;
    *(short *)(*(int *)(param_1 + 0x10) + param_2 * 0x74 + 0x56) = (short)param_3;
    do {
      psVar1 = (short *)(*(int *)(param_1 + 0x10) + 0x56 +
                        *(short *)(*(int *)(param_1 + 0x18) + (uint)bVar2 * 4 + -2 + iVar3 * 2) *
                        0x74);
      *psVar1 = *psVar1 - (short)iVar4;
      iVar3 = iVar3 + iVar4;
    } while (param_3 != iVar3);
    if (0 < *(int *)(param_1 + 0x40)) {
      iVar3 = 0;
      iVar4 = 0x56;
      do {
        *(short *)(*(int *)(param_1 + 0x18) + *(short *)(*(int *)(param_1 + 0x10) + iVar4) * 2) =
             (short)iVar3;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x74;
      } while (iVar3 < *(int *)(param_1 + 0x40));
    }
    *(undefined1 *)(param_1 + 0x1f5) = 1;
  }
  return;
}

