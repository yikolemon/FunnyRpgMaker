/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e038f */

void FUN_1800e038f(uint *param_1)

{
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_180052e03(&local_40);
  if (param_1 != &local_40) {
    FUN_180004c8c(param_1);
    *(undefined8 *)(param_1 + 4) = local_30;
    *(undefined8 *)(param_1 + 6) = uStack_28;
    *param_1 = local_40;
    param_1[1] = uStack_3c;
    param_1[2] = uStack_38;
    param_1[3] = uStack_34;
    local_30 = 0;
    uStack_28 = 0xf;
    local_40 = local_40 & 0xffffff00;
  }
  FUN_180001ef2(&local_40);
  return;
}

