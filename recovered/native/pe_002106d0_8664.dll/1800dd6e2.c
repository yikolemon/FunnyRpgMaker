/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800dd6e2 */

longlong FUN_1800dd6e2(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 local_40 [16];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (param_2 != 0) {
    do {
      FUN_1800136fa(local_40,param_1);
      FUN_1800500c4(param_3,local_40);
      param_3 = param_3 + 0x10;
      param_1 = param_1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return param_3;
}

