/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ede5e */

undefined8 * FUN_1800ede5e(longlong param_1,undefined8 *param_2,uint *param_3,undefined8 param_4)

{
  uint *puVar1;
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  puVar1 = *(uint **)(param_1 + 8);
  if (puVar1 == *(uint **)(param_1 + 0x10)) {
    param_3 = (uint *)FUN_1800ee0ec(param_1,param_3,param_4);
  }
  else if (puVar1 == param_3) {
    FUN_1800ee2bc(puVar1,param_4);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x50;
  }
  else {
    FUN_1800aef33(&local_a0,param_4,param_3,param_4,param_1);
    FUN_1800aef33(puVar1,puVar1 + -0x14);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x50;
    FUN_1800edfe2(param_3,puVar1 + -0x14,puVar1);
    if (&local_a0 != param_3) {
      FUN_180004c8c(param_3);
      param_3[4] = (uint)local_90;
      param_3[5] = local_90._4_4_;
      param_3[6] = (uint)uStack_88;
      param_3[7] = uStack_88._4_4_;
      *param_3 = local_a0;
      param_3[1] = uStack_9c;
      param_3[2] = uStack_98;
      param_3[3] = uStack_94;
      local_90 = 0;
      uStack_88 = 0xf;
      local_a0 = local_a0 & 0xffffff00;
      FUN_180060538(param_3 + 8);
      *(undefined8 *)(param_3 + 8) = local_80;
      *(undefined8 *)(param_3 + 10) = uStack_78;
      *(undefined8 *)(param_3 + 0xc) = local_70;
      local_70 = 0;
      local_80 = 0;
      uStack_78 = 0;
      FUN_180060538(param_3 + 0xe);
      *(undefined8 *)(param_3 + 0xe) = local_68;
      *(undefined8 *)(param_3 + 0x10) = uStack_60;
      *(undefined8 *)(param_3 + 0x12) = local_58;
      local_58 = 0;
      local_68 = 0;
      uStack_60 = 0;
    }
    FUN_1800ad5b5(&local_a0);
  }
  *param_2 = param_3;
  return param_2;
}

