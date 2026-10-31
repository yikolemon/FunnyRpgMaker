/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b38d9 */

undefined8
FUN_1800b38d9(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
             )

{
  undefined1 local_f8 [48];
  undefined1 local_c8 [48];
  undefined1 local_98 [48];
  undefined1 local_68 [48];
  longlong local_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_38 = param_4;
  local_30 = param_3;
  local_28 = param_2;
  FUN_1800b3b94(local_f8,param_5);
  FUN_1800b3b94(local_c8,local_38);
  FUN_1800b3b94(local_98,local_30);
  FUN_1800b3b94(local_68,local_28);
  FUN_1800b41f3(param_1,local_68,local_98,local_c8,local_f8);
  FUN_180001e4c(local_28 + 8);
  FUN_180001e4c(local_30 + 8);
  FUN_180001e4c(local_38 + 8);
  FUN_180001e4c(param_5 + 8);
  return param_1;
}

