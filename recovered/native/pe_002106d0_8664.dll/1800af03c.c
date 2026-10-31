/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800af03c */

undefined8 *
FUN_1800af03c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 *puVar1;
  undefined1 local_58 [32];
  undefined1 local_38 [8];
  undefined8 *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  local_30 = param_1;
  FUN_180001e92(local_58,param_4);
  puVar1 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar1 = (undefined8 *)*param_2;
  }
  thunk_FUN_180020c99(local_38,local_30,puVar1,param_2[2] + (longlong)puVar1,param_3,local_58,
                      param_5);
  FUN_180001ef2(local_58);
  return local_30;
}

