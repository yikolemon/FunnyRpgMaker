/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140002cca */

undefined8 *
FUN_140002cca(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  char *local_a8;
  size_t local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88 [5];
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_98 = *param_4;
  uStack_90 = param_4[1];
  local_48 = param_1;
  FUN_14000340e(param_1,&local_98,param_2);
  *local_48 = std::filesystem::filesystem_error::vftable;
  local_60 = local_48 + 5;
  FUN_14000347a(local_60,param_3);
  local_58 = local_48 + 9;
  local_48[0xb] = 0;
  local_48[0xc] = 0;
  local_48[9] = 0;
  local_48[10] = 0;
  FUN_140002a2c(local_58);
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  FUN_140002a2c(local_88);
  local_50 = local_48 + 0xd;
  local_a8 = "Unknown exception";
  if ((char *)local_48[1] != (char *)0x0) {
    local_a8 = (char *)local_48[1];
  }
  local_a0 = strlen(local_a8);
  FUN_1400034c2(local_50,&local_a8,param_3,local_88);
  FUN_140001d40(local_88);
  return local_48;
}

