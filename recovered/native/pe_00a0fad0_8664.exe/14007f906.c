/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007f906 */

longlong FUN_14007f906(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined8 ****ppppuVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  bool bVar15;
  bool bVar16;
  wchar_t *local_200;
  undefined8 local_1f8;
  wchar_t *local_1f0;
  undefined8 local_1e8;
  int local_1e0 [2];
  undefined8 local_1d8;
  undefined1 local_1d0 [240];
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined4 *local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 ***local_b0;
  int local_a8;
  ulonglong local_98;
  undefined8 local_90;
  int local_88;
  undefined4 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_50 = param_1;
  FUN_14000892c();
  FUN_140055cae(local_1e0,param_2,&DAT_140173c42);
  puVar13 = DAT_1401cc710;
  if (DAT_1401cc728 < 8) {
    puVar13 = &DAT_1401cc710;
  }
  puVar11 = (undefined4 *)FUN_140008bae(local_1e0,puVar13,DAT_1401cc720);
  local_c8 = (undefined4 *)(local_50 + 0x20);
  uVar1 = *puVar11;
  uVar2 = puVar11[1];
  uVar3 = puVar11[2];
  uVar4 = puVar11[3];
  uVar5 = puVar11[5];
  uVar6 = puVar11[6];
  uVar7 = puVar11[7];
  *(undefined4 *)(local_50 + 0x30) = puVar11[4];
  *(undefined4 *)(local_50 + 0x34) = uVar5;
  *(undefined4 *)(local_50 + 0x38) = uVar6;
  *(undefined4 *)(local_50 + 0x3c) = uVar7;
  *local_c8 = uVar1;
  *(undefined4 *)(local_50 + 0x24) = uVar2;
  *(undefined4 *)(local_50 + 0x28) = uVar3;
  *(undefined4 *)(local_50 + 0x2c) = uVar4;
  *(undefined8 *)(puVar11 + 4) = 0;
  *(undefined8 *)(puVar11 + 6) = 7;
  *(undefined2 *)puVar11 = 0;
  FUN_140005242(local_1e0);
  local_c0 = local_50 + 0x40;
  FUN_14000f628(local_c0,&DAT_140174404);
  local_b8 = local_50 + 0x60;
  FUN_14000f628(local_b8,&DAT_140174404);
  local_80 = (undefined4 *)(local_50 + 0x80);
  FUN_14000f628(local_80,&DAT_140174404);
  *(undefined2 *)(local_50 + 0xa0) = 0;
  *(undefined1 *)(local_50 + 0xa2) = *param_3;
  *(undefined4 *)(local_50 + 0xa4) = 1;
  puVar11 = &local_78;
  FUN_14000550c(puVar11,local_50,0);
  FUN_140007025();
  local_b0 = (undefined8 ***)0xffff00000000;
  if (7 < CONCAT44(uStack_5c,uStack_60)) {
    puVar11 = (undefined4 *)CONCAT44(uStack_74,local_78);
  }
  local_a8 = FUN_1400dcbb0(puVar11,local_1e0,3,0xffffffff);
  FUN_140007276(&local_b0,local_a8,local_1e0);
  iVar10 = local_a8;
  local_1d8 = FUN_140007025();
  local_1e0[0] = iVar10;
  iVar8 = (uint)local_b0;
  if ((uint)local_b0 == 0) {
    if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14004137b("exists",local_1e0,&local_78);
    }
    bVar15 = false;
  }
  else {
    FUN_140007025();
    bVar15 = iVar8 != 1;
  }
  FUN_140005690(&local_78);
  if (bVar15) {
    puVar11 = &local_78;
    FUN_14000550c(puVar11,local_50,0);
    local_b0 = (undefined8 ****)0xffff00000000;
    if (7 < CONCAT44(uStack_5c,uStack_60)) {
      puVar11 = (undefined4 *)CONCAT44(uStack_74,local_78);
    }
    local_a8 = FUN_1400dcbb0(puVar11,local_1e0,3,0xffffffff);
    FUN_140007276(&local_b0,local_a8,local_1e0);
    uVar9 = (uint)local_b0;
    if ((local_a8 != 0) && (((uint)local_b0 & 0xfffffff7) != 1)) {
                    /* WARNING: Subroutine does not return */
      FUN_140041f39("status",local_a8,&local_78);
    }
    FUN_140005690(&local_78);
    if (uVar9 == 3) {
      FUN_1400ae170(&local_e0);
      puVar13 = local_e0;
      do {
        if (puVar13 == local_d8) break;
        FUN_140055cae(local_1e0,local_50,&DAT_140173c42);
        puVar14 = puVar13;
        if (7 < (ulonglong)puVar13[3]) {
          puVar14 = (undefined8 *)*puVar13;
        }
        puVar11 = (undefined4 *)FUN_140008bae(local_1e0,puVar14,puVar13[2]);
        local_78 = *puVar11;
        uStack_74 = puVar11[1];
        uStack_70 = puVar11[2];
        uStack_6c = puVar11[3];
        local_68 = puVar11[4];
        uStack_64 = puVar11[5];
        uStack_60 = puVar11[6];
        uStack_5c = puVar11[7];
        *(undefined8 *)(puVar11 + 4) = 0;
        *(undefined8 *)(puVar11 + 6) = 7;
        *(undefined2 *)puVar11 = 0;
        FUN_140005242(local_1e0);
        FUN_14000550c(&local_b0,&local_78,0);
        FUN_140007025();
        local_90 = 0xffff00000000;
        ppppuVar12 = &local_b0;
        if (7 < local_98) {
          ppppuVar12 = (undefined8 ****)local_b0;
        }
        local_88 = FUN_1400dcbb0(ppppuVar12,local_1e0,3,0xffffffff);
        FUN_140007276(&local_90,local_88,local_1e0);
        iVar10 = local_88;
        local_1d8 = FUN_140007025();
        local_1e0[0] = iVar10;
        iVar8 = (int)local_90;
        if ((int)local_90 == 0) {
          if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_14004137b("exists",local_1e0,&local_b0);
          }
          bVar15 = false;
        }
        else {
          FUN_140007025();
          bVar15 = iVar8 != 1;
        }
        bVar16 = local_80 != &local_78;
        FUN_140005690(&local_b0);
        if (bVar15 && bVar16) {
          puVar11 = &local_78;
          if (7 < CONCAT44(uStack_5c,uStack_60)) {
            puVar11 = (undefined4 *)CONCAT44(uStack_74,local_78);
          }
          FUN_14000ffc0(local_80,puVar11,CONCAT44(uStack_64,local_68));
        }
        FUN_140005242(&local_78);
        puVar13 = puVar13 + 4;
      } while (!bVar15);
      if (*(longlong *)(local_50 + 0x90) != 0) {
        *(undefined1 *)(local_50 + 0xa1) = 1;
        FUN_1400802a2();
      }
      FUN_140041304(&local_e0);
    }
    else {
      FUN_14000ffc0(local_50,&DAT_140174404,0);
      local_1f0 = L"ERROR: Data folder \"{}\" is not a directory, stopping ...";
      local_1e8 = 0x38;
      FUN_140052dd3(&local_78,&local_1f0,local_50);
      FUN_140052d74(local_1e0,&DAT_1401cc978,&local_78);
      FUN_140052e4f(local_1d0);
      FUN_140052e84(local_1e0);
      FUN_140005242(&local_78);
    }
  }
  else {
    FUN_14000ffc0(local_50,&DAT_140174404,0);
    local_200 = L"ERROR: Data folder \"{}\" does not exist, stopping ...";
    local_1f8 = 0x34;
    FUN_140052dd3(&local_78,&local_200,local_50);
    FUN_140052d74(local_1e0,&DAT_1401cc978,&local_78);
    FUN_140052e4f(local_1d0);
    FUN_140052e84(local_1e0);
    FUN_140005242(&local_78);
  }
  return local_50;
}

