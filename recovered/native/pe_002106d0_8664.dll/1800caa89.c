/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800caa89 */

undefined8 FUN_1800caa89(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined1 local_48 [16];
  undefined1 local_38 [32];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (param_1 != 0 && param_4 != 0) {
    FUN_180001254(local_38,param_1 + 0x1c);
    FUN_1800cb226(param_4,local_48,local_38);
    FUN_1800010ec(local_38);
  }
  return 1;
}

