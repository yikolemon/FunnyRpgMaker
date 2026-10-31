/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401292d2 */

longlong FUN_1401292d2(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_14012ebc7();
  lVar2 = *plVar1 + 8;
  if (*plVar1 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}

