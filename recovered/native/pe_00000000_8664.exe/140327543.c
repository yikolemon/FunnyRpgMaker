/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140327543 */

void FUN_140327543(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = DAT_14062a630;
  *(short *)(DAT_14062a630 + 0x2864) = *(short *)(DAT_14062a630 + 0x2864) + -1;
  iVar1 = *(int *)(lVar2 + 0x2128);
  *(int *)(lVar2 + 0x2128) = iVar1 + -1;
  *(undefined4 *)(lVar2 + 0x1fa0) =
       *(undefined4 *)(*(longlong *)(lVar2 + 0x2130) + -8 + (longlong)iVar1 * 4);
  *(undefined4 *)(lVar2 + 0xdb4) =
       *(undefined4 *)
        (*(longlong *)(lVar2 + 0x15e0) + -8 + (longlong)*(int *)(lVar2 + 0x15d8) * 0x78);
  return;
}

