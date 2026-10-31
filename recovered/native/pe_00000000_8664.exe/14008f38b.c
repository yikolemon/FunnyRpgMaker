/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008f38b */

void FUN_14008f38b(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = DAT_140f2a910;
  *(short *)(DAT_140f2a910 + 0x2864) = *(short *)(DAT_140f2a910 + 0x2864) + -1;
  iVar1 = *(int *)(lVar2 + 0x2128);
  *(int *)(lVar2 + 0x2128) = iVar1 + -1;
  *(undefined4 *)(lVar2 + 0x1fa0) =
       *(undefined4 *)(*(longlong *)(lVar2 + 0x2130) + -8 + (longlong)iVar1 * 4);
  *(undefined4 *)(lVar2 + 0xdb4) =
       *(undefined4 *)
        (*(longlong *)(lVar2 + 0x15e0) + -8 + (longlong)*(int *)(lVar2 + 0x15d8) * 0x78);
  return;
}

