/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14028f800 */

undefined8 * FUN_14028f800(undefined8 param_1,undefined8 *param_2)

{
  longlong local_38;
  undefined8 local_30;
  undefined8 *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  local_20 = param_2;
  FUN_14028f87e(0,&local_38);
  if (local_38 != 0) {
    FUN_140229170(local_20,local_38,local_30);
  }
  return local_20;
}

