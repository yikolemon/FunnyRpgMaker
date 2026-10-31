/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101743af */

void __fastcall FUN_101743af(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (-1 < *(short *)(param_1 + 0x828 + param_2 * 4)) {
    FUN_101743af();
  }
  iVar2 = *(int *)(param_1 + 0x884c);
  if (iVar2 < *(int *)(param_1 + 0x8844)) {
    iVar1 = *(int *)(param_1 + 0x8848) + iVar2;
    iVar3 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(param_1 + 0x8848) + iVar2 + 3;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x10) + (iVar2 >> 2)) = 1;
    iVar2 = *(int *)(param_1 + 0x8828);
    uVar4 = (uint)*(byte *)(param_1 + 0x82b + param_2 * 4);
    if (0x80 < *(byte *)(iVar2 + 3 + uVar4 * 4)) {
      *(undefined1 *)(iVar3 + iVar1) = *(undefined1 *)(iVar2 + 2 + uVar4 * 4);
      *(undefined1 *)(iVar3 + 1 + iVar1) = *(undefined1 *)(iVar2 + 1 + uVar4 * 4);
      *(undefined1 *)(iVar3 + 2 + iVar1) = *(undefined1 *)(iVar2 + uVar4 * 4);
      *(undefined1 *)(iVar3 + 3 + iVar1) = *(undefined1 *)(iVar2 + 3 + uVar4 * 4);
    }
    iVar2 = *(int *)(param_1 + 0x8848) + 4;
    *(int *)(param_1 + 0x8848) = iVar2;
    if (*(int *)(param_1 + 0x8840) <= iVar2) {
      *(undefined4 *)(param_1 + 0x8848) = *(undefined4 *)(param_1 + 0x8838);
      iVar2 = *(int *)(param_1 + 0x884c) + *(int *)(param_1 + 0x8830);
      *(int *)(param_1 + 0x884c) = iVar2;
      if (*(int *)(param_1 + 0x8844) <= iVar2) {
        iVar2 = *(int *)(param_1 + 0x882c);
        do {
          if (iVar2 < 1) {
            return;
          }
          iVar3 = *(int *)(param_1 + 0x8850) << ((byte)iVar2 & 0x1f);
          *(int *)(param_1 + 0x8830) = iVar3;
          iVar3 = (iVar3 >> 1) + *(int *)(param_1 + 0x883c);
          *(int *)(param_1 + 0x884c) = iVar3;
          iVar2 = iVar2 + -1;
          *(int *)(param_1 + 0x882c) = iVar2;
        } while (*(int *)(param_1 + 0x8844) <= iVar3);
      }
    }
  }
  return;
}

