/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140327b46 */

void FUN_140327b46(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar4 = DAT_14062a630;
  if (0 < *(short *)(DAT_14062a630 + 0x2864)) {
    *(short *)(DAT_14062a630 + 0x2864) = *(short *)(DAT_14062a630 + 0x2864) + -1;
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
  FUN_140312b68("pe for get_ref, actual type is ");
  return;
}

