/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140028848 */

undefined8 * FUN_140028848(undefined8 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 local_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 *local_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_48 = param_2[4];
  uStack_44 = param_2[5];
  uStack_40 = param_2[6];
  uStack_3c = param_2[7];
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0xf;
  *(undefined1 *)param_2 = 0;
  local_30 = param_2;
  FUN_14000169c(local_78,"ParseError");
  FUN_140021dd8(param_1,local_78,&local_58,param_3);
  *param_1 = CLI::ParseError::vftable;
  local_28 = param_1;
  FUN_1400017de(local_30);
  return param_1;
}

