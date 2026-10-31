/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402b7d00 */

undefined8 * FUN_1402b7d00(undefined8 param_1,undefined8 *param_2)

{
  longlong local_38;
  undefined8 local_30;
  undefined8 *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 7;
  local_20 = param_2;
  FUN_1402b7d7e(0,&local_38);
  if (local_38 != 0) {
    FUN_140215958(local_20,local_38,local_30);
  }
  return local_20;
}

