/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000d6fa */

longlong * FUN_14000d6fa(longlong *param_1,undefined8 param_2,longlong param_3,undefined1 *param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14000d935(param_2,param_3,*param_4);
  if (lVar1 != param_3) {
    param_3 = FUN_14000d90d(lVar1,param_3,*param_4);
  }
  *param_1 = param_3;
  return param_1;
}

