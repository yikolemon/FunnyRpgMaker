/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18029242c */

longlong FUN_18029242c(void)

{
  longlong lVar1;
  
  if (DAT_180450008 == -1) {
    return 0;
  }
  if (DAT_180450008 != 0) {
    return DAT_180450008;
  }
  lVar1 = FUN_180292278(1,"CompareStringEx",&DAT_1803536d0,&DAT_1803536d8);
  return lVar1;
}

