/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140029f44 */

undefined8 FUN_140029f44(longlong *param_1,undefined8 param_2)

{
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_140020d68(&local_38,param_1[1] - *param_1 >> 5,param_1,param_1 + 1);
  FUN_14000d086(&local_38,param_1 + 3);
  FUN_14000169c(local_58,".");
  FUN_1400198e7(param_2,&local_38,local_58);
  FUN_14000eeca(&local_38);
  return param_2;
}

