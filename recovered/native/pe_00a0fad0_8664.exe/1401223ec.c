/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401223ec */

void FUN_1401223ec(void)

{
  if (DAT_14036f000 == 0) {
    FUN_1401225d8(0,"AreFileApisANSI",&DAT_140168908,&DAT_14016890c);
  }
  FUN_14012278c();
  if (DAT_14036f010 == 0) {
    FUN_1401225d8(2,"EnumSystemLocalesEx",&DAT_140168918,&DAT_140168920);
  }
  if (DAT_14036f028 == 0) {
    FUN_1401225d8(5,"GetDateFormatEx",&DAT_140168928,&DAT_140168930);
  }
  if (DAT_14036f050 == 0) {
    FUN_1401225d8(10,"GetLocaleInfoEx",&DAT_140168930,&DAT_140168938);
  }
  if (DAT_14036f068 == 0) {
    FUN_1401225d8(0xd,"GetTimeFormatEx",&DAT_140168938,&DAT_140168940);
  }
  if (DAT_14036f070 == 0) {
    FUN_1401225d8(0xe,"GetUserDefaultLocaleName",&DAT_140168940,&DAT_140168948);
  }
  if (DAT_14036f088 == 0) {
    FUN_1401225d8(0x11,"IsValidLocaleName",&DAT_140168948,&DAT_140168950);
  }
  if (DAT_14036f090 == 0) {
    FUN_1401225d8(0x12,"LCMapStringEx",&DAT_140168950,&DAT_140168958);
  }
  if (DAT_14036f098 == 0) {
    FUN_1401225d8(0x13,"LCIDToLocaleName",&DAT_140168958,&DAT_140168960);
  }
  if (DAT_14036f0a0 == 0) {
    FUN_1401225d8(0x14,"LocaleNameToLCID",&DAT_140168960,&DAT_140168968);
  }
  return;
}

