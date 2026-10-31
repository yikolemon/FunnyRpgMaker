/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008f98e */

void FUN_14008f98e(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar4 = DAT_140f2a910;
  if (0 < *(short *)(DAT_140f2a910 + 0x2864)) {
    *(short *)(DAT_140f2a910 + 0x2864) = *(short *)(DAT_140f2a910 + 0x2864) + -1;
    iVar2 = *(int *)(lVar4 + 0x2128);
    *(int *)(lVar4 + 0x2128) = iVar2 + -1;
    uVar3 = *(uint *)(*(longlong *)(lVar4 + 0x2130) + -8 + (longlong)iVar2 * 4);
    bVar1 = *(byte *)(lVar4 + 0x1fa0);
    *(uint *)(lVar4 + 0x1fa0) = uVar3;
    if (((bVar1 & 0x40) != 0) && ((uVar3 & 0x40) == 0)) {
      *(undefined4 *)(lVar4 + 0xdb4) = *(undefined4 *)(lVar4 + 0x2860);
    }
    return;
  }
  FUN_14007a954("Calling EndDisabled() too many times!");
  return;
}

