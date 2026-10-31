/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404a3948 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_1404a3948(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  FID_conflict___acrt_lock(*param_2);
  _DAT_1406327d8 = *(undefined8 *)*param_3;
  uVar1 = (*ram0x00014059ddf8)(&DAT_1404a3934,1);
  _DAT_1406327d8 = 0;
  FID_conflict___acrt_lock(*param_4);
  return uVar1;
}

