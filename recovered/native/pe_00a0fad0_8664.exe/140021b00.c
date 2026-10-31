/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140021b00 */

undefined8 * FUN_140021b00(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 *local_28;
  undefined8 *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_78 = *param_3;
  uStack_70 = param_3[1];
  local_68 = param_3[2];
  uStack_60 = param_3[3];
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
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
  local_30 = param_3;
  local_28 = param_2;
  FUN_140021c6c(local_58,&local_58,&local_78);
  *param_1 = CLI::ValidationError::vftable;
  local_20 = param_1;
  FUN_1400017de(local_28);
  FUN_1400017de(local_30);
  return param_1;
}

