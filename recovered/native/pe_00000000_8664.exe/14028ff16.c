/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14028ff16 */

undefined8 * FUN_14028ff16(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined1 local_a8 [120];
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  *param_1 = &DAT_1404bd618;
  local_30 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &DAT_1404ca818;
  local_20 = param_1;
  FUN_14028792e(local_a8);
  local_28 = local_20 + 3;
  plVar1 = param_2 + 2;
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_1402885a6(local_a8,local_28,param_2,(longlong)param_2 + *plVar1 * 2);
  FUN_140287aa0(local_a8);
  return local_20;
}

