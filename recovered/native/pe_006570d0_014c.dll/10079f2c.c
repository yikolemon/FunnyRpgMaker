/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10079f2c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_10079f2c(uint *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint *param_5)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int *unaff_FS_OFFSET;
  bool bVar15;
  undefined1 auStack_360 [4];
  uint local_35c;
  uint local_358;
  uint local_354;
  uint local_350;
  uint local_34c;
  uint local_348;
  uint local_344;
  uint local_340;
  int local_33c;
  uint local_338;
  uint local_334;
  uint local_330;
  uint local_32c;
  uint local_328;
  uint local_324;
  uint local_320;
  uint local_31c;
  uint local_318;
  uint *local_314;
  uint local_310;
  uint local_30c;
  uint local_308;
  uint local_304;
  undefined8 local_300;
  undefined8 uStack_2f8;
  uint local_2f0;
  uint uStack_2ec;
  uint uStack_2e8;
  uint uStack_2e4;
  uint local_2e0;
  uint uStack_2dc;
  uint uStack_2d8;
  uint uStack_2d4;
  uint local_2d0;
  uint uStack_2cc;
  uint uStack_2c8;
  uint uStack_2c4;
  int local_2b4;
  uint local_2b0;
  uint local_2ac;
  uint local_2a8 [160];
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_360;
  local_1c = &LAB_100c2cd0;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  local_18 = 0;
  _memset(local_2a8 + 0x20,0,0x200);
  uVar9 = _UNK_10295454;
  uVar1 = _UNK_10295450;
  uVar12 = _UNK_1029544c;
  param_1[0xc] = _DAT_10295448;
  param_1[0xd] = uVar12;
  param_1[0xe] = uVar1;
  param_1[0xf] = uVar9;
  uVar9 = _UNK_10295444;
  uVar1 = _UNK_10295440;
  uVar12 = _UNK_1029543c;
  param_1[8] = _DAT_10295438;
  param_1[9] = uVar12;
  param_1[10] = uVar1;
  param_1[0xb] = uVar9;
  uVar9 = _UNK_10295434;
  uVar1 = _UNK_10295430;
  uVar12 = _UNK_1029542c;
  param_1[4] = _DAT_10295428;
  param_1[5] = uVar12;
  param_1[6] = uVar1;
  param_1[7] = uVar9;
  uVar9 = _UNK_10295424;
  uVar1 = _UNK_10295420;
  uVar12 = _UNK_1029541c;
  local_314 = param_1;
  *param_1 = _DAT_10295418;
  param_1[1] = uVar12;
  param_1[2] = uVar1;
  param_1[3] = uVar9;
  if (*param_5 != 0 || param_5[1] != 0) {
    local_318 = 0;
    local_31c = 0;
    iVar8 = local_33c;
    do {
      local_33c = iVar8;
      local_2b4 = param_2;
      FUN_1025b2d0(local_2a8,param_2,0x80);
      uVar5 = _UNK_102945b8;
      uVar4 = _DAT_102945b0;
      iVar8 = 0;
      do {
        uVar12 = local_2a8[iVar8 * 2 + 2];
        uVar1 = local_2a8[iVar8 * 2 + 3];
        uVar13 = (uVar12 >> 7 | uVar1 << 0x19) ^
                 (uVar1 << 0x18 | uVar12 >> 8) ^ (uVar1 << 0x1f | uVar12 >> 1);
        uVar9 = local_2a8[iVar8 * 2 + 0x1d];
        uVar10 = local_2a8[iVar8 * 2 + 0x1c];
        uVar14 = (uVar10 << 3 | uVar9 >> 0x1d) ^ (uVar9 << 0xd | uVar10 >> 0x13) ^
                 (uVar9 << 0x1a | uVar10 >> 6);
        uVar11 = local_2a8[iVar8 * 2];
        uVar6 = local_2a8[iVar8 * 2 + 0x12] + local_2a8[iVar8 * 2];
        uVar7 = uVar6 + uVar13;
        local_2a8[iVar8 * 2 + 0x20] = uVar7 + uVar14;
        local_2a8[iVar8 * 2 + 0x21] =
             local_2a8[iVar8 * 2 + 0x13] + local_2a8[iVar8 * 2 + 1] +
             (uint)CARRY4(local_2a8[iVar8 * 2 + 0x12],uVar11) +
             (uVar1 >> 7 ^ (uVar12 << 0x18 | uVar1 >> 8) ^ (uVar12 << 0x1f | uVar1 >> 1)) +
             (uint)CARRY4(uVar6,uVar13) +
             (uVar9 >> 6 ^ (uVar9 << 3 | uVar10 >> 0x1d) ^ (uVar10 << 0xd | uVar9 >> 0x13)) +
             (uint)CARRY4(uVar7,uVar14);
        iVar8 = iVar8 + 1;
      } while (iVar8 != 0x40);
      local_310 = local_314[0xc];
      local_340 = local_314[0xd];
      local_338 = local_314[0xe];
      local_34c = local_314[0xf];
      local_2d0 = local_310;
      uStack_2cc = local_340;
      uStack_2c8 = local_338;
      uStack_2c4 = local_34c;
      local_330 = local_314[10];
      local_2e0 = local_314[8];
      uStack_2dc = local_314[9];
      uStack_2d8 = local_330;
      uStack_2d4 = local_314[0xb];
      local_358 = local_314[2];
      local_334 = local_314[3];
      local_30c = local_314[4];
      local_308 = local_314[5];
      local_32c = local_314[6];
      local_328 = local_314[7];
      local_300._0_4_ = *local_314;
      local_300._4_4_ = local_314[1];
      uStack_2f8._0_4_ = local_358;
      uStack_2f8._4_4_ = local_334;
      local_2f0 = local_30c;
      uStack_2ec = local_308;
      uStack_2e8 = local_32c;
      uStack_2e4 = local_328;
      local_33c = 0;
      do {
        local_344 = (uint)local_300;
        local_348 = local_300._4_4_;
        local_350 = local_2e0;
        local_35c = uStack_2d4;
        uStack_2d4 = uStack_2dc;
        uStack_2e4 = local_308;
        uStack_2e8 = local_30c;
        uStack_2c8 = local_310;
        uVar1 = local_328;
        uVar12 = local_32c;
        local_2d0 = local_330;
        uStack_2ec = local_334;
        uStack_2c4 = local_340;
        local_2f0 = local_358;
        local_304 = local_35c;
        local_320 = local_330;
        local_330 = local_350;
        uVar9 = (local_350 << 0x17 | uStack_2d4 >> 9) ^
                (uStack_2d4 << 0xe | local_350 >> 0x12) ^ (uStack_2d4 << 0x12 | local_350 >> 0xe);
        uVar10 = uVar9 + local_338;
        local_2ac = local_310;
        uVar13 = (local_2d0 ^ local_310) & local_350 ^ local_310 ^
                 (uStack_2d4 << 0x1d | local_350 >> 3);
        local_2b0 = local_340;
        uVar11 = uVar10 + *(uint *)(&DAT_10295458 + local_33c);
        uVar6 = uVar11 + *(uint *)((int)local_2a8 + local_33c);
        uVar7 = uVar6 + uVar13;
        iVar8 = ((uStack_2d4 << 0x17 | local_350 >> 9) ^
                (local_350 << 0xe | uStack_2d4 >> 0x12) ^ (local_350 << 0x12 | uStack_2d4 >> 0xe)) +
                local_34c + (uint)CARRY4(uVar9,local_338) + *(int *)(&DAT_1029545c + local_33c) +
                (uint)CARRY4(uVar10,*(uint *)(&DAT_10295458 + local_33c)) +
                *(int *)((int)local_2a8 + local_33c + 4) +
                (uint)CARRY4(uVar11,*(uint *)((int)local_2a8 + local_33c)) +
                (uStack_2d4 >> 3 ^ local_340 ^ (local_35c ^ local_340) & uStack_2d4) +
                (uint)CARRY4(uVar6,uVar13);
        local_354 = local_334;
        local_324 = local_358;
        local_334 = local_348;
        local_358 = local_344;
        uVar9 = (local_344 << 0x19 | local_348 >> 7) ^
                (local_344 << 0x1e | local_348 >> 2) ^ (local_348 << 4 | local_344 >> 0x1c);
        local_32c = local_30c;
        uVar10 = local_2f0 & local_30c ^ (local_2f0 ^ local_30c) & local_344;
        local_328 = local_308;
        local_2e0 = uVar12 + uVar7;
        uStack_2dc = uVar1 + iVar8 + (uint)CARRY4(uVar12,uVar7);
        uVar12 = uVar9 + uVar7;
        local_300._0_4_ = uVar12 + uVar10;
        local_300._4_4_ =
             ((local_348 << 0x19 | local_344 >> 7) ^
             (local_348 << 0x1e | local_344 >> 2) ^ (local_344 << 4 | local_348 >> 0x1c)) + iVar8 +
             (uint)CARRY4(uVar9,uVar7) +
             (uStack_2ec & local_308 ^ (uStack_2ec ^ local_308) & local_348) +
             (uint)CARRY4(uVar12,uVar10);
        uVar12 = local_35c;
        local_33c = local_33c + 8;
        local_338 = local_310;
        local_34c = local_340;
        local_310 = local_2d0;
        local_340 = local_35c;
        local_30c = local_2f0;
        local_308 = uStack_2ec;
      } while (local_33c != 0x280);
      uStack_2cc = local_35c;
      uStack_2d8 = local_350;
      uStack_2f8._0_4_ = local_344;
      uStack_2f8._4_4_ = local_348;
      iVar8 = 0;
      do {
        uVar3 = (&uStack_2f8)[iVar8];
        lVar2 = *(longlong *)(local_314 + iVar8 * 2 + 2);
        *(ulonglong *)(local_314 + iVar8 * 2) =
             *(longlong *)(local_314 + iVar8 * 2) + ((&local_300)[iVar8] ^ uVar4);
        *(ulonglong *)(local_314 + iVar8 * 2 + 2) = lVar2 + (uVar3 ^ uVar5);
        iVar8 = iVar8 + 2;
      } while (iVar8 != 8);
      param_2 = local_2b4 + 0x80;
      bVar15 = 0xfffffffe < local_31c;
      local_31c = local_31c + 1;
      local_318 = local_318 + bVar15;
      local_33c = 0x280;
      local_35c = uStack_2d4;
      local_350 = local_2e0;
      local_348 = local_300._4_4_;
      local_344 = (uint)local_300;
      iVar8 = 0x280;
    } while (local_318 < param_5[1] || local_318 - param_5[1] < (uint)(local_31c < *param_5));
  }
  local_18 = 0xffffffff;
  FUN_10004eae();
  *unaff_FS_OFFSET = local_20;
  return param_1;
}

