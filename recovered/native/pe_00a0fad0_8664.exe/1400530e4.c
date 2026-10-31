/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400530e4 */

ulonglong FUN_1400530e4(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  char cVar7;
  ulonglong *puVar8;
  int *piVar9;
  undefined8 ***pppuVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  bool bVar13;
  int local_1c8;
  int iStack_1c4;
  undefined8 uStack_1c0;
  int local_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  undefined1 local_c8 [32];
  undefined8 local_a8;
  int local_a0;
  undefined8 **local_98 [2];
  undefined8 local_88;
  ulonglong local_80;
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
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  *(undefined1 *)(param_1 + 0x131) = 0;
  FUN_14000550c(&local_58,param_1 + 0xf0,0);
  FUN_140052ee6(&local_58,&local_1c8);
  FUN_14000892c(local_98,&local_1c8);
  FUN_140005690(&local_1c8);
  puVar12 = &local_58;
  FUN_140005690(puVar12);
  cVar7 = FUN_1400ae2c4(local_98);
  if (cVar7 == '\0') {
    FUN_140055cae(local_c8,local_98,&DAT_140173c42);
    puVar8 = (ulonglong *)FUN_140008bae(local_c8,L"Data",4);
    uVar11 = *puVar8;
    uVar1 = puVar8[1];
    uVar2 = puVar8[2];
    uVar3 = puVar8[3];
    puVar8[2] = 0;
    puVar8[3] = 7;
    *(undefined2 *)puVar8 = 0;
    local_78._0_4_ = (undefined4)uVar11;
    local_78._4_4_ = (undefined4)(uVar11 >> 0x20);
    uStack_70._0_4_ = (undefined4)uVar1;
    uStack_70._4_4_ = (undefined4)(uVar1 >> 0x20);
    local_68._0_4_ = (undefined4)uVar2;
    local_68._4_4_ = (undefined4)(uVar2 >> 0x20);
    uStack_60._0_4_ = (undefined4)uVar3;
    uStack_60._4_4_ = (undefined4)(uVar3 >> 0x20);
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    uStack_40 = (undefined4)uStack_60;
    uStack_3c = uStack_60._4_4_;
    local_58 = (undefined4)local_78;
    uStack_54 = local_78._4_4_;
    uStack_50 = (undefined4)uStack_70;
    uStack_4c = uStack_70._4_4_;
    local_68 = 0;
    uStack_60 = 7;
    local_78 = uVar11 & 0xffffffffffff0000;
    uStack_70 = uVar1;
    FUN_140007025();
    local_a8 = 0xffff00000000;
    if (7 < CONCAT44(uStack_3c,uStack_40)) {
      puVar12 = (undefined4 *)CONCAT44(uStack_54,local_58);
    }
    local_a0 = FUN_1400dcbb0(puVar12,&local_1c8,3,0xffffffff);
    FUN_140007276(&local_a8,local_a0,&local_1c8);
    iVar6 = local_a0;
    uStack_1c0 = FUN_140007025();
    uVar5 = local_a8;
    local_1c8 = iVar6;
    iVar4 = (int)local_a8;
    if ((int)local_a8 == 0) {
      if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_14004137b("exists",&local_1c8,&local_58);
      }
      uVar11 = 0;
      bVar13 = false;
    }
    else {
      FUN_140007025();
      bVar13 = iVar4 != 1;
      uVar11 = (ulonglong)CONCAT31((int3)((ulonglong)uVar5 >> 8),bVar13);
    }
    FUN_140005690(&local_58);
    FUN_140005242(&local_78);
    FUN_140005242(local_c8);
    if (bVar13) {
      FUN_140055cae(&local_58,local_98,&DAT_140173c42);
      piVar9 = (int *)FUN_140008bae(&local_58,L"Data",4);
      local_1c8 = *piVar9;
      iStack_1c4 = piVar9[1];
      uStack_1c0 = *(undefined8 *)(piVar9 + 2);
      local_1b8 = piVar9[4];
      iStack_1b4 = piVar9[5];
      iStack_1b0 = piVar9[6];
      iStack_1ac = piVar9[7];
      piVar9[4] = 0;
      piVar9[5] = 0;
      piVar9[6] = 7;
      piVar9[7] = 0;
      *(undefined2 *)piVar9 = 0;
      FUN_14000ff1e(param_1 + 0x110,&local_1c8);
      FUN_140005242(&local_1c8);
      FUN_140005242(&local_58);
      uVar11 = CONCAT71((int7)(uVar11 >> 8),1);
    }
    else {
      FUN_1400567b4(&local_1c8,&DAT_1401cc978,L"UberWolfLib: Could not find data folder");
      FUN_140052e4f(&local_1b8);
      FUN_140052e84(&local_1c8);
      uVar11 = 0;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x131) = 1;
    uVar11 = CONCAT71((int7)((ulonglong)puVar12 >> 8),1);
    if ((undefined8 ***)(param_1 + 0x110) != local_98) {
      pppuVar10 = local_98;
      if (7 < local_80) {
        pppuVar10 = (undefined8 ***)local_98[0];
      }
      FUN_14000ffc0((undefined8 ***)(param_1 + 0x110),pppuVar10,local_88);
    }
  }
  FUN_140005242(local_98);
  return uVar11 & 0xffffffff;
}

