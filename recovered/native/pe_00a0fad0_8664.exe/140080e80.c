/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140080e80 */

undefined8 FUN_140080e80(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  int *piVar12;
  bool bVar13;
  undefined1 local_1c0 [24];
  undefined8 local_1a8;
  undefined1 *local_1a0;
  undefined8 *local_198;
  undefined8 local_190;
  int local_188;
  undefined4 uStack_184;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_80;
  int local_78;
  undefined2 local_60;
  undefined2 uStack_5e;
  undefined4 uStack_5c;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0xa1) == '\0') {
    uVar9 = FUN_1400554d2();
    FUN_14000169c(&local_60,"remove_prot_error_msg");
    uVar9 = FUN_1400aebe4(uVar9,&local_60);
    FUN_140052d74(&local_188,&DAT_1401cc978,uVar9);
    FUN_140052e4f(&local_178);
    FUN_140052e84(&local_188);
    FUN_1400017de(&local_60);
    uVar9 = 0;
  }
  else if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar9 = FUN_1400554d2();
    FUN_14000169c(&local_60,"data_dir_error_msg");
    uVar9 = FUN_1400aebe4(uVar9,&local_60);
    FUN_140052d74(&local_188,&DAT_1401cc978,uVar9);
    FUN_140052e4f(&local_178);
    FUN_140052e84(&local_188);
    FUN_1400017de(&local_60);
    uVar9 = 0;
  }
  else if (*(int *)(param_1 + 0xa4) == 2) {
    uVar9 = 0;
  }
  else if (*(int *)(param_1 + 0xa4) == 3) {
    FUN_140080d3a(param_1,&local_60);
    local_178 = (undefined4)local_50;
    uStack_174 = local_50._4_4_;
    uStack_170 = (undefined4)uStack_48;
    uStack_16c = uStack_48._4_4_;
    uStack_184 = uStack_5c;
    local_50 = 0;
    uStack_48 = 7;
    local_60 = 0;
    FUN_140005242(&local_60);
    FUN_14007cad4(&local_188);
    FUN_140005690(&local_188);
    uVar9 = 1;
  }
  else {
    lVar1 = param_1 + 0x20;
    puVar11 = &local_60;
    FUN_14000550c(puVar11,lVar1,0);
    FUN_140007025();
    local_80 = 0xffff00000000;
    if (7 < uStack_48) {
      puVar11 = (undefined2 *)CONCAT44(uStack_5c,CONCAT22(uStack_5e,local_60));
    }
    local_78 = FUN_1400dcbb0(puVar11,&local_188,3,0xffffffff);
    FUN_140007276(&local_80,local_78,&local_188);
    iVar7 = local_78;
    uStack_180 = FUN_140007025();
    local_188 = iVar7;
    iVar6 = (int)local_80;
    if ((int)local_80 == 0) {
      if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_14004137b("exists",&local_188,&local_60);
      }
      bVar13 = false;
    }
    else {
      FUN_140007025();
      bVar13 = iVar6 != 1;
    }
    FUN_140005690(&local_60);
    lVar3 = DAT_1401cc750;
    lVar4 = DAT_1401cc758;
    if (!bVar13) {
      piVar12 = &local_188;
      FUN_14000550c(piVar12,lVar1,0);
      if (7 < CONCAT44(uStack_16c,uStack_170)) {
        piVar12 = (int *)CONCAT44(uStack_184,local_188);
      }
      uVar8 = FUN_1400dd1d0(piVar12);
      if (uVar8 >> 0x20 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140041f39("create_directory",uVar8 >> 0x20,&local_188);
      }
      FUN_140005690(&local_188);
      lVar3 = DAT_1401cc750;
      lVar4 = DAT_1401cc758;
      if ((uVar8 & 1) == 0) {
        uVar9 = FUN_1400554d2();
        FUN_14000169c(&local_80,"unprot_dir_create_error_msg");
        puVar10 = (undefined8 *)FUN_1400aebe4(uVar9,&local_80);
        uVar8 = puVar10[3];
        puVar2 = (undefined8 *)*puVar10;
        uVar9 = puVar10[2];
        thunk_FUN_140062417(local_1c0,lVar1);
        local_198 = puVar10;
        if (7 < uVar8) {
          local_198 = puVar2;
        }
        local_1a8 = 1;
        local_1a0 = local_1c0;
        local_190 = uVar9;
        FUN_14005a9d3(&local_60);
        FUN_140052d74(&local_188,&DAT_1401cc978,&local_60);
        FUN_140052e4f(&local_178);
        FUN_140052e84(&local_188);
        FUN_140005242(&local_60);
        FUN_1400017de(&local_80);
        return 0;
      }
    }
    for (; lVar5 = DAT_1401cc758, lVar3 != DAT_1401cc758; lVar3 = lVar3 + 0x20) {
      local_188 = 0;
      DAT_1401cc758 = lVar4;
      FUN_14008165a(param_1,lVar3,&local_188);
      lVar4 = DAT_1401cc758;
      DAT_1401cc758 = lVar5;
    }
    local_188 = 1;
    DAT_1401cc758 = lVar4;
    FUN_14008165a(param_1,&DAT_1401cc6d0,&local_188);
    local_188 = 2;
    FUN_14008165a(param_1,&DAT_1401cc730,&local_188);
    uVar9 = FUN_1400554d2();
    FUN_14000169c(&local_80,"unprot_file_loc");
    puVar10 = (undefined8 *)FUN_1400aebe4(uVar9,&local_80);
    uVar8 = puVar10[3];
    puVar2 = (undefined8 *)*puVar10;
    uVar9 = puVar10[2];
    thunk_FUN_140062417(local_1c0,lVar1);
    local_198 = puVar10;
    if (7 < uVar8) {
      local_198 = puVar2;
    }
    local_1a8 = 1;
    local_1a0 = local_1c0;
    local_190 = uVar9;
    FUN_14005a9d3(&local_60);
    FUN_140052d74(&local_188,&DAT_1401cc970,&local_60);
    FUN_140052e4f(&local_178);
    FUN_140052e84(&local_188);
    FUN_140005242(&local_60);
    FUN_1400017de(&local_80);
    uVar9 = 1;
  }
  return uVar9;
}

