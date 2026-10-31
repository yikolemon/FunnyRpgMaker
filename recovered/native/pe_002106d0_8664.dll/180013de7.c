/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180013de7 */

undefined8 FUN_180013de7(undefined8 param_1)

{
  undefined1 local_58 [56];
  char local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_18001296b(local_58);
  if (local_20 == '\x01') {
    FUN_1800136fa(param_1,local_58);
  }
  else {
    FUN_180013990(param_1,9);
  }
  FUN_180013e5c(local_58);
  return param_1;
}

