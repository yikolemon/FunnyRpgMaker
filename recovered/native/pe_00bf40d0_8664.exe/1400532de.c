/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400532de */

void FUN_1400532de(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  FUN_14005333b((longlong)param_1,lVar1);
  FUN_14001c53d(lVar1,param_1[1]);
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

