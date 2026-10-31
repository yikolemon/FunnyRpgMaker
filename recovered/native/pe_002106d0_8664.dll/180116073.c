/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180116073 */

void FUN_180116073(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = DAT_180419160;
  *(short *)(DAT_180419160 + 0x2864) = *(short *)(DAT_180419160 + 0x2864) + -1;
  iVar1 = *(int *)(lVar2 + 0x2128);
  *(int *)(lVar2 + 0x2128) = iVar1 + -1;
  *(undefined4 *)(lVar2 + 0x1fa0) =
       *(undefined4 *)(*(longlong *)(lVar2 + 0x2130) + -8 + (longlong)iVar1 * 4);
  *(undefined4 *)(lVar2 + 0xdb4) =
       *(undefined4 *)
        (*(longlong *)(lVar2 + 0x15e0) + -8 + (longlong)*(int *)(lVar2 + 0x15d8) * 0x78);
  return;
}

