/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008148e */

undefined8 FUN_18008148e(undefined8 param_1)

{
  undefined8 ***pppuVar1;
  undefined8 **local_48 [2];
  longlong local_38;
  ulonglong local_30;
  undefined1 local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_180072a20(local_48);
  pppuVar1 = local_48;
  if (0xf < local_30) {
    pppuVar1 = (undefined8 ***)local_48[0];
  }
  FUN_180081966(param_1,pppuVar1,local_38 + (longlong)pppuVar1,&local_21);
  FUN_180001ef2(local_48);
  return param_1;
}

