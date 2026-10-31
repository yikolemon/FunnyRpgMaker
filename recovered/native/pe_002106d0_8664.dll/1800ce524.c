/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ce524 */

undefined8 * FUN_1800ce524(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  uint *puVar1;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 local_168;
  code *local_160;
  undefined1 local_158 [256];
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 *local_38;
  uint *local_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  *param_1 = std::exception::vftable;
  local_38 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = spdlog::spdlog_ex::vftable;
  local_30 = (uint *)(param_1 + 3);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xf;
  local_178 = local_158;
  local_170 = 0;
  local_160 = FUN_180018c5c;
  local_168 = 0xfa;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  local_28 = param_1;
  FUN_1800ce884(&local_178,param_3,param_2);
  FUN_1800435b1(&local_58,&local_178);
  puVar1 = local_30;
  if (local_30 != &local_58) {
    FUN_180004c8c(local_30);
    *(undefined8 *)(puVar1 + 4) = local_48;
    *(undefined8 *)(puVar1 + 6) = uStack_40;
    *puVar1 = local_58;
    puVar1[1] = uStack_54;
    puVar1[2] = uStack_50;
    puVar1[3] = uStack_4c;
    local_48 = 0;
    uStack_40 = 0xf;
    local_58 = local_58 & 0xffffff00;
  }
  FUN_180001ef2(&local_58);
  if (local_178 != local_158) {
    thunk_FUN_180290e40();
  }
  return local_28;
}

