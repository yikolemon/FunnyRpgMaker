/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140055dfe */

ulonglong FUN_140055dfe(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 ***pppuVar9;
  int *piVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  bool bVar13;
  int local_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined8 local_200;
  ulonglong local_1f8;
  undefined8 *local_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 **local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [32];
  undefined8 *local_b8;
  undefined8 local_b0;
  int *local_a8;
  int *local_a0;
  undefined8 **local_88 [3];
  ulonglong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_b0 = param_1;
  FUN_14000550c(&local_68,param_2,0);
  FUN_140052ee6(&local_68,&local_210);
  FUN_14000892c(local_d8,&local_210);
  FUN_140005690(&local_210);
  FUN_140005690(&local_68);
  piVar10 = &local_210;
  FUN_14000550c(piVar10,L"Data",0);
  FUN_14000550c(local_88,local_d8,0);
  FUN_140055d5e(local_88,&local_68);
  if (7 < local_1f8) {
    piVar10 = (int *)CONCAT44(uStack_20c,local_210);
  }
  local_a0 = (int *)local_200;
  local_a8 = piVar10;
  iVar2 = FUN_140041fc4(&local_68);
  FUN_140005690(&local_68);
  FUN_140005690(local_88);
  FUN_140005690(&local_210);
  if (iVar2 == 0) {
    FUN_14000550c(local_88,local_d8,0);
    FUN_140052ee6(local_88,&local_68);
    FUN_14000892c(&local_210,&local_68);
    FUN_14000ff1e(local_d8,&local_210);
    FUN_140005242(&local_210);
    FUN_140005690(&local_68);
    FUN_140005690(local_88);
  }
  uVar5 = FUN_1400554d2();
  FUN_14000169c(local_88,"search_game_msg");
  puVar6 = (undefined8 *)FUN_1400aebe4(uVar5,local_88);
  uVar11 = puVar6[3];
  puVar12 = (undefined8 *)*puVar6;
  uVar5 = puVar6[2];
  thunk_FUN_140062417(&local_210,local_d8);
  local_110 = puVar6;
  if (7 < uVar11) {
    local_110 = puVar12;
  }
  local_a8 = (int *)0x1;
  local_108 = uVar5;
  local_a0 = &local_210;
  FUN_14005a9d3(&local_68);
  FUN_140052d74(&local_210,&DAT_1401cc970,&local_68);
  FUN_140052e4f(&local_200);
  FUN_140052e84(&local_210);
  FUN_140005242(&local_68);
  FUN_1400017de(local_88);
  local_b8 = DAT_1401cc1e8;
  puVar12 = DAT_1401cc1e0;
  do {
    if (puVar12 == local_b8) {
      uVar5 = FUN_1400554d2();
      FUN_14000169c(&local_68,"exe_error_msg");
      uVar5 = FUN_1400aebe4(uVar5,&local_68);
      FUN_140052d74(&local_210,&DAT_1401cc970,uVar5);
      FUN_140052e4f(&local_200);
      FUN_140052e84(&local_210);
      FUN_1400017de(&local_68);
      uVar11 = 0;
      break;
    }
    FUN_140055cae(&local_210,local_d8,&DAT_140173c42);
    puVar6 = puVar12;
    if (7 < (ulonglong)puVar12[3]) {
      puVar6 = (undefined8 *)*puVar12;
    }
    puVar7 = (undefined4 *)FUN_140008bae(&local_210,puVar6,puVar12[2]);
    local_68 = *puVar7;
    uStack_64 = puVar7[1];
    uStack_60 = puVar7[2];
    uStack_5c = puVar7[3];
    local_58 = puVar7[4];
    uStack_54 = puVar7[5];
    uStack_50 = puVar7[6];
    uStack_4c = puVar7[7];
    *(undefined8 *)(puVar7 + 4) = 0;
    *(undefined8 *)(puVar7 + 6) = 7;
    *(undefined2 *)puVar7 = 0;
    FUN_140005242(&local_210);
    FUN_14000550c(local_88,&local_68,0);
    FUN_140007025();
    local_a8 = (int *)0xffff00000000;
    pppuVar9 = local_88;
    if (7 < local_70) {
      pppuVar9 = (undefined8 ***)local_88[0];
    }
    uVar3 = FUN_1400dcbb0(pppuVar9,&local_210,3,0xffffffff);
    local_a0 = (int *)CONCAT44(local_a0._4_4_,uVar3);
    FUN_140007276(&local_a8,uVar3,&local_210);
    iVar1 = (int)local_a0;
    local_208 = FUN_140007025();
    local_210 = iVar1;
    iVar2 = (int)local_a8;
    if ((int)local_a8 == 0) {
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_14004137b("exists",&local_210,local_88);
      }
      bVar13 = false;
    }
    else {
      FUN_140007025();
      bVar13 = iVar2 != 1;
    }
    FUN_140005690(local_88);
    if (bVar13) {
      uVar5 = FUN_1400554d2();
      FUN_14000169c(&local_a8,"exe_found_msg");
      puVar8 = (undefined8 *)FUN_1400aebe4(uVar5,&local_a8);
      uVar11 = puVar8[3];
      puVar6 = (undefined8 *)*puVar8;
      uVar5 = puVar8[2];
      thunk_FUN_140062417(&local_110,puVar12);
      local_e8 = puVar8;
      if (7 < uVar11) {
        local_e8 = puVar6;
      }
      local_f8 = 1;
      local_f0 = &local_110;
      local_e0 = uVar5;
      FUN_14005a9d3(local_88,&local_e8,&local_f8);
      FUN_140052d74(&local_210,&DAT_1401cc970,local_88);
      FUN_140052e4f(&local_200);
      FUN_140052e84(&local_210);
      FUN_140005242(local_88);
      FUN_1400017de(&local_a8);
      uVar4 = FUN_14005273c(local_b0,&local_68);
      uVar11 = (ulonglong)uVar4;
    }
    FUN_140005242(&local_68);
    puVar12 = puVar12 + 4;
  } while (!bVar13);
  FUN_140005242(local_d8);
  return uVar11 & 0xffffff01;
}

