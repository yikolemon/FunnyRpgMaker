/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a26ac */

BOOL FUN_1400a26ac(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  BOOL BVar1;
  
  __acrt_lock(*param_2);
  DAT_1401432a8 = *(undefined8 *)*param_3;
  BVar1 = EnumSystemLocalesW((LOCALE_ENUMPROCW)&LAB_1400a2698,1);
  DAT_1401432a8 = 0;
  __acrt_unlock(*param_4);
  return BVar1;
}

