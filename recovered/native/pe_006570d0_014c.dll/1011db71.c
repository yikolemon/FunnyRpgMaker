/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011db71 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011db71(void)

{
  char cVar1;
  int iVar2;
  float10 fVar3;
  float *local_fc;
  undefined8 *local_f8;
  undefined4 local_f4;
  float local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float local_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float local_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  float local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  float local_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float local_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float local_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float local_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float local_5c;
  float fStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  float local_2c;
  float fStack_28;
  undefined8 local_24;
  float local_1c;
  float fStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_fc;
  fVar3 = (float10)FUN_10111f20();
  local_e0 = (float)fVar3;
  local_dc = local_e0 / DAT_102b8eb8;
  fStack_d8 = 0.0;
  fStack_d4 = 0.0;
  fStack_d0 = 0.0;
  local_cc = DAT_102b8ebc * local_dc;
  fStack_c8 = 0.0;
  fStack_c4 = 0.0;
  fStack_c0 = 0.0;
  local_fc = &local_1c;
  FUN_10114f9f();
  local_ac = DAT_102b8a50 + local_cc;
  local_5c = DAT_102b8ee0 * local_dc;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  local_2c = (float)DAT_102b8ef0 * local_5c + local_1c + DAT_102b6c58 * local_ac + _DAT_102b8f00;
  fStack_28 = (float)((ulonglong)DAT_102b8ef0 >> 0x20) * local_ac + fStack_18 + _UNK_102b8f04;
  local_24 = CONCAT44(fStack_28,local_2c);
  local_bc = local_1c;
  fStack_b8 = fStack_18;
  uStack_b4 = 0;
  uStack_b0 = 0;
  local_2c = local_2c - local_1c;
  fStack_28 = fStack_28 - fStack_18;
  local_fc = &local_2c;
  fStack_58 = local_ac;
  FUN_10131d8e();
  cVar1 = FUN_1010bfe8();
  if (cVar1 != '\0') {
    local_8c = (float)DAT_102b8ec0 * local_dc;
    fStack_88 = (float)((ulonglong)DAT_102b8ec0 >> 0x20) * local_dc;
    fStack_84 = local_dc * 0.0;
    fStack_80 = local_dc * 0.0;
    local_7c = local_dc + local_dc;
    fStack_78 = fStack_d8;
    fStack_74 = fStack_d4;
    fStack_70 = fStack_d0;
    local_6c = local_dc * _DAT_102b8ed0;
    fStack_68 = local_dc * _UNK_102b8ed4;
    fStack_64 = local_dc * _UNK_102b8ed8;
    fStack_60 = local_dc * _UNK_102b8edc;
    local_e4 = (DAT_102b7100 + local_bc) - local_ac;
    local_dc = local_dc * _DAT_102b8f10;
    local_f8 = &local_24;
    local_f4 = 1;
    local_fc = &local_1c;
    FUN_101881b4();
    local_9c = fStack_88;
    fStack_98 = fStack_88;
    fStack_94 = fStack_88;
    fStack_90 = fStack_88;
    fStack_d8 = local_dc;
    fStack_d4 = local_dc;
    fStack_d0 = local_dc;
    iVar2 = -0xf0;
    fStack_c8 = local_cc;
    fStack_c4 = local_cc;
    fStack_c0 = local_cc;
    do {
      local_2c = (float)*(int *)((int)&PTR_s_OuterRect_102b84ac + iVar2) * local_5c +
                 (float)*(int *)((int)&PTR_s_OuterRectClipped_102b84b0 + iVar2) * local_ac +
                 local_e4;
      fStack_28 = (float)*(int *)((int)&PTR_s_OuterRect_102b84ac + iVar2) * fStack_58 + fStack_b8;
      local_34 = CONCAT44(fStack_28 + fStack_c8,local_2c + local_cc);
      local_ec = 0;
      local_f0 = local_9c;
      local_f4 = 0xffcccccc;
      local_fc = &local_2c;
      local_f8 = &local_34;
      FUN_1018b85a();
      local_e8 = 0;
      local_f0 = local_9c;
      local_ec = 0x3f800000;
      local_f4 = 0xff181818;
      local_fc = &local_2c;
      local_f8 = &local_34;
      FUN_1018b762();
      local_3c = CONCAT44(fStack_28 + fStack_88,local_2c + local_8c);
      local_44 = CONCAT44(fStack_28 + fStack_88 + fStack_d8,local_2c + local_8c + local_dc);
      local_e8 = 0;
      local_f0 = local_7c;
      local_ec = 0x40000000;
      local_f4 = 0xffc1c1c1;
      local_fc = (float *)&local_3c;
      local_f8 = &local_44;
      FUN_1018b762();
      local_ec = 0;
      local_f0 = local_7c;
      local_f4 = 0xfffcfcfc;
      local_fc = (float *)&local_3c;
      local_f8 = &local_44;
      FUN_1018b85a();
      local_4c = CONCAT44(fStack_28 + fStack_68,local_2c + local_6c);
      local_f4 = *(undefined4 *)((int)&PTR_s_InnerRect_102b84b4 + iVar2);
      local_f0 = 0.0;
      local_fc = (float *)&local_4c;
      local_f8 = (undefined8 *)0xff404040;
      FUN_1018d05c();
      local_fc = *(float **)((int)&PTR_s_InnerClipRect_102b84b8 + iVar2);
      cVar1 = FUN_10113c70();
      if (cVar1 != '\0') {
        local_f0 = local_9c;
        local_f8 = &local_34;
        local_fc = &local_2c;
        local_ec = 0;
        local_f4 = 0x800000ff;
        FUN_1018b85a();
      }
      iVar2 = iVar2 + 0x10;
    } while (iVar2 != 0);
    FUN_10188384();
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_fc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

