/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140058e64 */

undefined8 * FUN_140058e64(undefined8 param_1,undefined8 *param_2)

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
  FUN_140058ee2(0,&local_38);
  if (local_38 != 0) {
    FUN_14000ffc0(local_20,local_38,local_30);
  }
  return local_20;
}

