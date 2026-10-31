/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401227d8 */

BOOL FUN_1401227d8(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  BOOL BVar1;
  
  __acrt_lock(*param_2);
  DAT_1403550e8 = *(undefined8 *)*param_3;
  BVar1 = EnumSystemLocalesW((LOCALE_ENUMPROCW)&LAB_1401227c4,1);
  DAT_1403550e8 = 0;
  __acrt_unlock(*param_4);
  return BVar1;
}

