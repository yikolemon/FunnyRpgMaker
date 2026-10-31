/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180020bbc */

undefined8 *
FUN_180020bbc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 ***pppuVar1;
  undefined1 local_58 [8];
  undefined8 **local_50 [2];
  longlong local_40;
  ulonglong local_38;
  undefined8 *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  local_30 = param_1;
  FUN_180001e92(local_50);
  pppuVar1 = local_50;
  if (0xf < local_38) {
    pppuVar1 = (undefined8 ***)local_50[0];
  }
  thunk_FUN_180020c99(local_58,local_30,pppuVar1,local_40 + (longlong)pppuVar1,param_3,param_4,
                      param_5);
  FUN_180001ef2(local_50);
  return local_30;
}

