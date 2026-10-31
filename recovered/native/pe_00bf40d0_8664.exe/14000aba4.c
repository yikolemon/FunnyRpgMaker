/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000aba4 */

longlong * FUN_14000aba4(longlong param_1,longlong *param_2)

{
  undefined8 *local_38;
  ulonglong local_30;
  longlong *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 7;
  local_20 = param_2;
  FUN_14000ac22(param_1,(longlong *)&local_38);
  if (local_38 != (undefined8 *)0x0) {
    FUN_140007116(local_20,local_38,local_30);
  }
  return local_20;
}

