/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14012278c */

longlong FUN_14012278c(void)

{
  longlong lVar1;
  
  if (DAT_14036f008 == -1) {
    return 0;
  }
  if (DAT_14036f008 != 0) {
    return DAT_14036f008;
  }
  lVar1 = FUN_1401225d8(1,"CompareStringEx",&DAT_140168910,&DAT_140168918);
  return lVar1;
}

