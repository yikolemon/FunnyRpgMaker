/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401affcc */

longlong FUN_1401affcc(void)

{
  longlong lVar1;
  
  if (DAT_140f4f008 == -1) {
    return 0;
  }
  if (DAT_140f4f008 != 0) {
    return DAT_140f4f008;
  }
  lVar1 = FUN_1401afe18(1,"CompareStringEx",&DAT_140eb79b0,&DAT_140eb79b8);
  return lVar1;
}

