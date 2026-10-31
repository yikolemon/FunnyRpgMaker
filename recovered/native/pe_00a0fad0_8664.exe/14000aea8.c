/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000aea8 */

undefined8 * FUN_14000aea8(undefined8 *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [32];
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_14000169c(local_48,param_3);
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FUN_14000af62(param_1,&local_58,local_48);
  local_28 = param_1;
  FUN_1400017de(local_48);
  *local_28 = std::system_error::vftable;
  return local_28;
}

