/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400413fa */

undefined8 *
FUN_1400413fa(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char *local_a8;
  size_t local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_98 = *param_4;
  uStack_94 = param_4[1];
  uStack_90 = param_4[2];
  uStack_8c = param_4[3];
  local_48 = param_1;
  FUN_1400418ea(local_98,&local_98,param_2);
  *local_48 = std::filesystem::filesystem_error::vftable;
  local_60 = local_48 + 5;
  FUN_140041956(local_60,param_3);
  local_58 = local_48 + 9;
  local_48[0xb] = 0;
  local_48[0xc] = 0;
  local_48[9] = 0;
  local_48[10] = 0;
  FUN_14004199e();
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14004199e();
  local_50 = local_48 + 0xd;
  local_a8 = "Unknown exception";
  if ((char *)local_48[1] != (char *)0x0) {
    local_a8 = (char *)local_48[1];
  }
  local_a0 = strlen(local_a8);
  FUN_1400419f4(local_50,&local_a8,param_3,&local_88);
  FUN_140005690(&local_88);
  return local_48;
}

