/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b0018 */

BOOL FUN_1401b0018(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  BOOL BVar1;
  
  __acrt_lock(*param_2);
  DAT_140f32cb8 = *(undefined8 *)*param_3;
  BVar1 = EnumSystemLocalesW((LOCALE_ENUMPROCW)&LAB_1401b0004,1);
  DAT_140f32cb8 = 0;
  __acrt_unlock(*param_4);
  return BVar1;
}

