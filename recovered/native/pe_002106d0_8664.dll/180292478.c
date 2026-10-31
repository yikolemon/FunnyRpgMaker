/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180292478 */

BOOL FUN_180292478(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  BOOL BVar1;
  
  __acrt_lock(*param_2);
  DAT_180421308 = *(undefined8 *)*param_3;
  BVar1 = EnumSystemLocalesW((LOCALE_ENUMPROCW)&LAB_180292464,1);
  DAT_180421308 = 0;
  __acrt_unlock(*param_4);
  return BVar1;
}

