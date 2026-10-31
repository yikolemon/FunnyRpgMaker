/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14031a179 */

longlong FUN_14031a179(void)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  lVar1 = (longlong)*(int *)(DAT_14062a630 + 0x2148);
  if (0 < lVar1) {
    uVar2 = lVar1 + 1;
    plVar3 = (longlong *)(lVar1 * 0x38 + *(longlong *)(DAT_14062a630 + 0x2150) + -0x30);
    do {
      lVar1 = *plVar3;
      if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x17) & 8) != 0)) {
        return lVar1;
      }
      uVar2 = uVar2 - 1;
      plVar3 = plVar3 + -7;
    } while (1 < uVar2);
  }
  return 0;
}

