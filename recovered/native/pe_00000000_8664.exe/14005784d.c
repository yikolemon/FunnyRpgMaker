/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005784d */

undefined8 *
FUN_14005784d(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_140001640(local_58,param_4);
  plVar1 = param_2 + 2;
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  thunk_FUN_140060b13(local_38,local_30,param_2,(longlong)param_2 + *plVar1 * 2,param_3,local_58,
                      param_5);
  FUN_140001e90(local_58);
  return local_30;
}

