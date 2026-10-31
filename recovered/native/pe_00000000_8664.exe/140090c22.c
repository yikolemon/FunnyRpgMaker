/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140090c22 */

longlong FUN_140090c22(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = DAT_140f2a910;
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x68);
  if ((*(longlong *)(lVar1 + 0x2b0) == 0) || (*(int *)(lVar1 + 0x68) == 0)) {
    FUN_1400e1844(lVar1);
  }
  lVar2 = *(longlong *)(lVar2 + 0x70);
  if (lVar2 == 0) {
    lVar2 = **(longlong **)(lVar1 + 0x70);
  }
  return lVar2;
}

