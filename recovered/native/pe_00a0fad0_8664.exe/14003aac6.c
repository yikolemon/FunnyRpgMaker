/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003aac6 */

undefined8 FUN_14003aac6(undefined8 param_1)

{
  undefined1 local_40 [32];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_14000169c(local_40,"This should be caught in your main function, see examples");
  local_20 = param_1;
  FUN_14003ade2(param_1,local_40,0);
  return local_20;
}

