/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140093e67 */

longlong FUN_140093e67(void)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = (longlong)*(int *)(DAT_140f2a910 + 0x2148);
  if (0 < lVar3) {
    uVar4 = lVar3 + 1;
    plVar2 = (longlong *)(lVar3 * 0x38 + *(longlong *)(DAT_140f2a910 + 0x2150) + -0x30);
    do {
      lVar3 = *plVar2;
      if (((lVar3 != 0) && ((*(byte *)(lVar3 + 0x17) & 8) != 0)) &&
         (cVar1 = FUN_14008851d(lVar3), cVar1 != '\0')) {
        return lVar3;
      }
      uVar4 = uVar4 - 1;
      plVar2 = plVar2 + -7;
    } while (1 < uVar4);
  }
  return 0;
}

