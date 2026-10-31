/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10114b4c */

void FUN_10114b4c(int param_1)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = DAT_1039d74c;
  iVar3 = *(int *)(DAT_1039d74c + 0x1490);
  iVar5 = *(int *)(DAT_1039d74c + 0x1498);
  if (*(int *)(iVar5 + -4 + iVar3 * 4) != param_1) {
    iVar6 = (int)*(short *)(param_1 + 0x110);
    iVar1 = iVar3 + -1;
    if (iVar6 < iVar1) {
      do {
        *(undefined4 *)(*(int *)(iVar4 + 0x1498) + iVar6 * 4) =
             *(undefined4 *)(*(int *)(iVar4 + 0x1498) + 4 + iVar6 * 4);
        psVar2 = (short *)(*(int *)(*(int *)(iVar4 + 0x1498) + iVar6 * 4) + 0x110);
        *psVar2 = *psVar2 + -1;
        iVar6 = iVar6 + 1;
      } while (iVar1 != iVar6);
      iVar5 = *(int *)(iVar4 + 0x1498);
    }
    *(int *)(iVar5 + -4 + iVar3 * 4) = param_1;
    *(short *)(param_1 + 0x110) = (short)iVar1;
  }
  return;
}

