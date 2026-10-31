/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140007116 */

longlong * FUN_140007116(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong *plVar1;
  
  if ((ulonglong)param_1[3] < param_3) {
    plVar1 = FUN_140007172(param_1,param_3,param_3,param_2);
    return plVar1;
  }
  plVar1 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    plVar1 = (longlong *)*param_1;
  }
  param_1[2] = param_3;
  FUN_1400b3550(plVar1,param_2,param_3 * 2);
  *(undefined2 *)((longlong)plVar1 + param_3 * 2) = 0;
  return param_1;
}

