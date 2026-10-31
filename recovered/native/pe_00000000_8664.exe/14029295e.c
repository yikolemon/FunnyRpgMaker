/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14029295e */

undefined8 FUN_14029295e(undefined8 param_1)

{
  undefined8 ***pppuVar1;
  undefined8 **local_48 [2];
  longlong local_38;
  ulonglong local_30;
  undefined1 local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_140283ef0(local_48);
  pppuVar1 = local_48;
  if (0xf < local_30) {
    pppuVar1 = (undefined8 ***)local_48[0];
  }
  FUN_140292e36(param_1,pppuVar1,local_38 + (longlong)pppuVar1,&local_21);
  FUN_1402133c2(local_48);
  return param_1;
}

