/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a22c0 */

void FUN_1400a22c0(void)

{
  if (DAT_140151000 == 0) {
    FUN_1400a24ac(0,"AreFileApisANSI",(uint *)&DAT_14010fe58,(uint *)&DAT_14010fe5c);
  }
  FUN_1400a2660();
  if (DAT_140151010 == 0) {
    FUN_1400a24ac(2,"EnumSystemLocalesEx",(uint *)&DAT_14010fe68,(uint *)&DAT_14010fe70);
  }
  if (DAT_140151028 == 0) {
    FUN_1400a24ac(5,"GetDateFormatEx",(uint *)&DAT_14010fe78,(uint *)&DAT_14010fe80);
  }
  if (DAT_140151050 == 0) {
    FUN_1400a24ac(10,"GetLocaleInfoEx",(uint *)&DAT_14010fe80,(uint *)&DAT_14010fe88);
  }
  if (DAT_140151068 == 0) {
    FUN_1400a24ac(0xd,"GetTimeFormatEx",(uint *)&DAT_14010fe88,(uint *)&DAT_14010fe90);
  }
  if (DAT_140151070 == 0) {
    FUN_1400a24ac(0xe,"GetUserDefaultLocaleName",(uint *)&DAT_14010fe90,(uint *)&DAT_14010fe98);
  }
  if (DAT_140151088 == 0) {
    FUN_1400a24ac(0x11,"IsValidLocaleName",(uint *)&DAT_14010fe98,(uint *)&DAT_14010fea0);
  }
  if (DAT_140151090 == 0) {
    FUN_1400a24ac(0x12,"LCMapStringEx",(uint *)&DAT_14010fea0,(uint *)&DAT_14010fea8);
  }
  if (DAT_140151098 == 0) {
    FUN_1400a24ac(0x13,"LCIDToLocaleName",(uint *)&DAT_14010fea8,(uint *)&DAT_14010feb0);
  }
  if (DAT_1401510a0 == 0) {
    FUN_1400a24ac(0x14,"LocaleNameToLCID",(uint *)&DAT_14010feb0,(uint *)&DAT_14010feb8);
  }
  return;
}

