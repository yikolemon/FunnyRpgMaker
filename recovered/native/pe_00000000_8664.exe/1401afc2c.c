/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401afc2c */

void FUN_1401afc2c(void)

{
  if (DAT_140f4f000 == 0) {
    FUN_1401afe18(0,"AreFileApisANSI",&DAT_140eb79a8,&DAT_140eb79ac);
  }
  FUN_1401affcc();
  if (DAT_140f4f010 == 0) {
    FUN_1401afe18(2,"EnumSystemLocalesEx",&DAT_140eb79b8,&DAT_140eb79c0);
  }
  if (DAT_140f4f028 == 0) {
    FUN_1401afe18(5,"GetDateFormatEx",&DAT_140eb79c8,&DAT_140eb79d0);
  }
  if (DAT_140f4f050 == 0) {
    FUN_1401afe18(10,"GetLocaleInfoEx",&DAT_140eb79d0,&DAT_140eb79d8);
  }
  if (DAT_140f4f068 == 0) {
    FUN_1401afe18(0xd,"GetTimeFormatEx",&DAT_140eb79d8,&DAT_140eb79e0);
  }
  if (DAT_140f4f070 == 0) {
    FUN_1401afe18(0xe,"GetUserDefaultLocaleName",&DAT_140eb79e0,&DAT_140eb79e8);
  }
  if (DAT_140f4f088 == 0) {
    FUN_1401afe18(0x11,"IsValidLocaleName",&DAT_140eb79e8,&DAT_140eb79f0);
  }
  if (DAT_140f4f090 == 0) {
    FUN_1401afe18(0x12,"LCMapStringEx",&DAT_140eb79f0,&DAT_140eb79f8);
  }
  if (DAT_140f4f098 == 0) {
    FUN_1401afe18(0x13,"LCIDToLocaleName",&DAT_140eb79f8,&DAT_140eb7a00);
  }
  if (DAT_140f4f0a0 == 0) {
    FUN_1401afe18(0x14,"LocaleNameToLCID",&DAT_140eb7a00,&DAT_140eb7a08);
  }
  return;
}

