/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008165a */

void FUN_14008165a(longlong param_1,undefined8 *param_2,int *param_3)

{
  undefined8 **ppuVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 **ppuVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 ****ppppuVar14;
  bool bVar15;
  bool bVar16;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 **local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 ***local_a8;
  longlong local_90;
  undefined8 ***local_88 [3];
  ulonglong local_70;
  undefined8 ***local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_90 = param_1;
  uVar6 = FUN_1400554d2();
  FUN_14000169c(local_88,"remove_prot");
  ppuVar7 = (undefined8 **)FUN_1400aebe4(uVar6,local_88);
  puVar9 = ppuVar7[3];
  ppuVar1 = (undefined8 **)*ppuVar7;
  puVar13 = ppuVar7[2];
  thunk_FUN_140062417(&local_68,param_2);
  local_c8 = ppuVar7;
  if ((undefined8 *)0x7 < puVar9) {
    local_c8 = ppuVar1;
  }
  local_b0 = 1;
  uStack_c0 = puVar13;
  local_a8 = &local_68;
  FUN_14005a9d3(&local_e8);
  FUN_140052d74(&local_1f8,&DAT_1401cc970,&local_e8);
  FUN_140041192(&local_1e8);
  FUN_140052e84(&local_1f8);
  FUN_140005242(&local_e8);
  FUN_1400017de(local_88);
  local_c8 = (undefined8 ***)0x0;
  uStack_c0 = (undefined8 *)0x0;
  local_b8 = 0;
  FUN_140055cae(&local_1f8,local_90 + 0x40,&DAT_140173c42);
  puVar9 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    puVar9 = (undefined8 *)*param_2;
  }
  puVar8 = (undefined4 *)FUN_140008bae(&local_1f8,puVar9,param_2[2]);
  local_e8 = *puVar8;
  uStack_e4 = puVar8[1];
  uStack_e0 = puVar8[2];
  uStack_dc = puVar8[3];
  local_d8 = puVar8[4];
  uStack_d4 = puVar8[5];
  uStack_d0 = puVar8[6];
  uStack_cc = puVar8[7];
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 6) = 7;
  *(undefined2 *)puVar8 = 0;
  FUN_140005242(&local_1f8);
  if (*param_3 - 1U < 2) {
    FUN_14000550c(local_88,&local_e8,0);
    FUN_140007025();
    local_68 = (undefined8 ****)0xffff00000000;
    ppppuVar14 = local_88;
    if (7 < local_70) {
      ppppuVar14 = (undefined8 ****)local_88[0];
    }
    iStack_60 = FUN_1400dcbb0(ppppuVar14,&local_1f8,3,0xffffffff);
    FUN_140007276(&local_68,iStack_60,&local_1f8);
    iVar4 = iStack_60;
    uStack_1f0 = FUN_140007025();
    local_1f8 = (undefined8 ***)CONCAT44(local_1f8._4_4_,iVar4);
    iVar3 = (int)local_68;
    if ((int)local_68 == 0) {
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_14004137b("exists",&local_1f8,local_88);
      }
      bVar15 = false;
    }
    else {
      FUN_140007025();
      bVar15 = iVar3 != 1;
    }
    FUN_140005690(local_88);
    if (!bVar15) {
      uVar6 = FUN_1400554d2();
      FUN_14000169c(local_88,"failed_msg");
      uVar6 = FUN_1400aebe4(uVar6,local_88);
      FUN_140052d74(&local_1f8,&DAT_1401cc970,uVar6);
      FUN_140052e4f(&local_1e8);
      FUN_140052e84(&local_1f8);
      FUN_1400017de(local_88);
      uVar6 = FUN_1400554d2();
      FUN_14000169c(&local_68,"find_file_error_msg");
      puVar10 = (undefined8 *)FUN_1400aebe4(uVar6,&local_68);
      uVar2 = puVar10[3];
      puVar9 = (undefined8 *)*puVar10;
      puVar13 = (undefined8 *)puVar10[2];
      thunk_FUN_140062417(&local_1f8,&local_e8);
      local_f8 = puVar10;
      if (7 < uVar2) {
        local_f8 = puVar9;
      }
      local_b0 = 1;
      local_f0 = puVar13;
      local_a8 = (undefined8 ***)&local_1f8;
      FUN_14005a9d3(local_88);
      FUN_140052d74(&local_1f8,&DAT_1401cc978,local_88);
      FUN_140052e4f(&local_1e8);
      FUN_140052e84(&local_1f8);
      FUN_140005242(local_88);
      FUN_1400017de(&local_68);
      goto LAB_1400820b2;
    }
    FUN_14008442a(local_90,&local_1f8,&local_e8,param_3,&local_f8);
    FUN_140016e5c(&local_c8);
    local_c8 = local_1f8;
    uStack_c0 = (undefined8 *)uStack_1f0;
    local_b8 = local_1e8;
    local_1f8 = (undefined8 ***)0x0;
    uStack_1f0 = 0;
    local_1e8 = 0;
    FUN_140016e5c(&local_1f8);
    FUN_140055cae(local_88,local_90 + 0x20,&DAT_140173c42);
    puVar9 = param_2 + 2;
    if (7 < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    puVar9 = (undefined8 *)FUN_140008bae(local_88,param_2,*puVar9);
    uVar5 = *(undefined4 *)puVar9;
    local_1f8 = (undefined8 ***)*puVar9;
    uStack_1f0 = puVar9[1];
    local_1e8 = puVar9[2];
    uStack_1e0 = *(undefined4 *)(puVar9 + 3);
    uStack_1dc = *(undefined4 *)((longlong)puVar9 + 0x1c);
    puVar9[2] = 0;
    puVar9[3] = 7;
    *(undefined2 *)puVar9 = 0;
    FUN_140083f56(uVar5,&local_1f8,&local_c8);
    FUN_140005242(&local_1f8);
    FUN_140005242(local_88);
  }
  else if (*param_3 == 0) {
    FUN_1400843c8(local_88,&local_e8,DAT_1401cc768);
    FUN_14000550c(&local_68,local_88,0);
    FUN_140007025();
    local_b0 = 0xffff00000000;
    ppppuVar14 = &local_68;
    if (7 < CONCAT44(uStack_4c,uStack_50)) {
      ppppuVar14 = (undefined8 ****)local_68;
    }
    uVar5 = FUN_1400dcbb0(ppppuVar14,&local_1f8,3,0xffffffff);
    local_a8 = (undefined8 ***)CONCAT44(local_a8._4_4_,uVar5);
    FUN_140007276(&local_b0,uVar5,&local_1f8);
    iVar4 = (int)local_a8;
    uStack_1f0 = FUN_140007025();
    local_1f8 = (undefined8 ***)CONCAT44(local_1f8._4_4_,iVar4);
    iVar3 = (int)local_b0;
    if ((int)local_b0 == 0) {
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_14004137b("exists",&local_1f8,&local_68);
      }
      bVar15 = false;
    }
    else {
      FUN_140007025();
      bVar15 = iVar3 != 1;
    }
    FUN_140005690(&local_68);
    if (bVar15) {
      FUN_14008442a(local_90,&local_1f8,local_88,param_3,&local_f8);
      FUN_140016e5c(&local_c8);
      local_c8 = local_1f8;
      uStack_c0 = (undefined8 *)uStack_1f0;
      local_b8 = local_1e8;
      local_1f8 = (undefined8 ***)0x0;
      uStack_1f0 = 0;
      local_1e8 = 0;
      FUN_140016e5c(&local_1f8);
      puVar13 = DAT_1401cc768;
      lVar12 = local_90 + 0x20;
      FUN_140055cae(&local_b0,lVar12,&DAT_140173c42);
      puVar9 = param_2;
      if (7 < (ulonglong)param_2[3]) {
        puVar9 = (undefined8 *)*param_2;
      }
      plVar11 = (longlong *)FUN_140008bae(&local_b0,puVar9,param_2[2]);
      local_68 = (undefined8 ***)*plVar11;
      iStack_60 = (int)plVar11[1];
      uStack_5c = *(undefined4 *)((longlong)plVar11 + 0xc);
      local_58 = (undefined4)plVar11[2];
      uStack_54 = *(undefined4 *)((longlong)plVar11 + 0x14);
      uStack_50 = (undefined4)plVar11[3];
      uStack_4c = *(undefined4 *)((longlong)plVar11 + 0x1c);
      plVar11[2] = 0;
      plVar11[3] = 7;
      *(undefined2 *)plVar11 = 0;
      puVar9 = puVar13 + 2;
      if (7 < (ulonglong)puVar13[3]) {
        puVar13 = (undefined8 *)*puVar13;
      }
      puVar8 = (undefined4 *)FUN_140008bae(&local_68,puVar13,*puVar9);
      local_1f8._0_4_ = *puVar8;
      local_1f8._4_4_ = puVar8[1];
      uStack_1f0 = *(undefined8 *)(puVar8 + 2);
      local_1e8 = *(undefined8 *)(puVar8 + 4);
      uStack_1e0 = puVar8[6];
      uStack_1dc = puVar8[7];
      *(undefined8 *)(puVar8 + 4) = 0;
      *(undefined8 *)(puVar8 + 6) = 7;
      *(undefined2 *)puVar8 = 0;
      FUN_140083f56((undefined4)local_1f8,&local_1f8,&local_c8);
      FUN_140005242(&local_1f8);
      FUN_140005242(&local_68);
      FUN_140005242(&local_b0);
      FUN_1400843c8(&local_1f8,&local_e8,DAT_1401cc768 + 4);
      FUN_14000ff1e(local_88,&local_1f8);
      FUN_140005242(&local_1f8);
      FUN_14000550c(&local_68,local_88,0);
      FUN_140007025();
      local_b0 = 0xffff00000000;
      ppppuVar14 = &local_68;
      if (7 < CONCAT44(uStack_4c,uStack_50)) {
        ppppuVar14 = (undefined8 ****)local_68;
      }
      uVar5 = FUN_1400dcbb0(ppppuVar14,&local_1f8,3,0xffffffff);
      local_a8 = (undefined8 ***)CONCAT44(local_a8._4_4_,uVar5);
      FUN_140007276(&local_b0,uVar5,&local_1f8);
      iVar4 = (int)local_a8;
      uStack_1f0 = FUN_140007025();
      local_1f8 = (undefined8 ***)CONCAT44(local_1f8._4_4_,iVar4);
      iVar3 = (int)local_b0;
      if ((int)local_b0 == 0) {
        if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_14004137b("exists",&local_1f8,&local_68);
        }
        bVar16 = false;
      }
      else {
        FUN_140007025();
        bVar16 = iVar3 != 1;
      }
      uVar5 = FUN_140005690(&local_68);
      if (bVar16) {
        FUN_1400846ca(uVar5,&local_1f8,local_88,&local_f8);
        FUN_140016e5c(&local_c8);
        local_c8 = local_1f8;
        uStack_c0 = (undefined8 *)uStack_1f0;
        local_b8 = local_1e8;
        local_1f8 = (undefined8 ***)0x0;
        uStack_1f0 = 0;
        local_1e8 = 0;
        FUN_140016e5c(&local_1f8);
        puVar13 = DAT_1401cc768;
        FUN_140055cae(&local_b0,lVar12,&DAT_140173c42);
        puVar9 = param_2 + 2;
        if (7 < (ulonglong)param_2[3]) {
          param_2 = (undefined8 *)*param_2;
        }
        plVar11 = (longlong *)FUN_140008bae(&local_b0,param_2,*puVar9);
        local_68 = (undefined8 ***)*plVar11;
        iStack_60 = (int)plVar11[1];
        uStack_5c = *(undefined4 *)((longlong)plVar11 + 0xc);
        local_58 = (undefined4)plVar11[2];
        uStack_54 = *(undefined4 *)((longlong)plVar11 + 0x14);
        uStack_50 = (undefined4)plVar11[3];
        uStack_4c = *(undefined4 *)((longlong)plVar11 + 0x1c);
        plVar11[2] = 0;
        plVar11[3] = 7;
        *(undefined2 *)plVar11 = 0;
        if ((ulonglong)puVar13[7] < 8) {
          puVar9 = puVar13 + 4;
        }
        else {
          puVar9 = (undefined8 *)puVar13[4];
        }
        puVar9 = (undefined8 *)FUN_140008bae(&local_68,puVar9,puVar13[6]);
        uVar5 = *(undefined4 *)puVar9;
        local_1f8 = (undefined8 ***)*puVar9;
        uStack_1f0 = puVar9[1];
        local_1e8 = puVar9[2];
        uStack_1e0 = *(undefined4 *)(puVar9 + 3);
        uStack_1dc = *(undefined4 *)((longlong)puVar9 + 0x1c);
        puVar9[2] = 0;
        puVar9[3] = 7;
        *(undefined2 *)puVar9 = 0;
        FUN_140083f56(uVar5,&local_1f8,&local_c8);
        FUN_140005242(&local_1f8);
        FUN_140005242(&local_68);
        FUN_140005242(&local_b0);
      }
    }
    else {
      uVar6 = FUN_1400554d2();
      FUN_14000169c(&local_68,"failed_msg");
      uVar6 = FUN_1400aebe4(uVar6,&local_68);
      FUN_140052d74(&local_1f8,&DAT_1401cc970,uVar6);
      FUN_140052e4f(&local_1e8);
      FUN_140052e84(&local_1f8);
      FUN_1400017de(&local_68);
      uVar6 = FUN_1400554d2();
      FUN_14000169c(&local_b0,"find_file_error_msg");
      FUN_1400aebe4(uVar6,&local_b0);
      thunk_FUN_140062417(&local_1f8,&local_e8);
      local_f8 = (undefined8 *)0x1;
      local_f0 = &local_1f8;
      FUN_14005a9d3(&local_68);
      FUN_140052d74(&local_1f8,&DAT_1401cc978,&local_68);
      FUN_140052e4f(&local_1e8);
      FUN_140052e84(&local_1f8);
      FUN_140005242(&local_68);
      FUN_1400017de(&local_b0);
    }
    FUN_140005242(local_88);
    if (!bVar15) goto LAB_1400820b2;
  }
  uVar6 = FUN_1400554d2();
  FUN_14000169c(local_88,"done_msg");
  uVar6 = FUN_1400aebe4(uVar6,local_88);
  FUN_140052d74(&local_1f8,&DAT_1401cc970,uVar6);
  FUN_140052e4f(&local_1e8);
  FUN_140052e84(&local_1f8);
  FUN_1400017de(local_88);
LAB_1400820b2:
  FUN_140005242(&local_e8);
  FUN_140016e5c(&local_c8);
  return;
}

