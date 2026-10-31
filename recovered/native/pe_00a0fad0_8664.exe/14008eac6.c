/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008eac6 */

undefined8 *
FUN_14008eac6(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  longlong *plVar1;
  undefined1 local_58 [32];
  undefined1 local_38 [8];
  undefined8 *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 7;
  local_30 = param_1;
  FUN_14000f628(local_58,param_4);
  plVar1 = param_2 + 2;
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  thunk_FUN_14008f1ea(local_38,local_30,param_2,(longlong)param_2 + *plVar1 * 2,param_3,local_58,
                      param_5);
  FUN_140005242(local_58);
  return local_30;
}

