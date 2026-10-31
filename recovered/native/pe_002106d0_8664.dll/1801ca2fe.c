/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ca2fe */

longlong FUN_1801ca2fe(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_1801cfbf3();
  lVar2 = *plVar1 + 8;
  if (*plVar1 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}

