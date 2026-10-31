/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14021473e */

undefined8 * FUN_14021473e(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *local_30;
  undefined1 local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  *param_1 = &DAT_1404bd618;
  local_20 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  local_28 = 1;
  local_30 = param_2;
  local_18 = param_1;
  FUN_14047fec0(&local_30,local_20);
  *local_18 = &DAT_1404bd9d8;
  return local_18;
}

