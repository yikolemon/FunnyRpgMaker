/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c4082 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_1801c4082(int *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined2 uStack_44;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  int *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  local_48 = 0;
  local_30 = param_1;
  FUN_1801c07f5(&local_68,0x20,"%s","Lettuce");
  uStack_44 = 0x101;
  uStack_42 = 0;
  uStack_40._0_4_ = _DAT_180329330;
  uStack_40._4_4_ = _UNK_180329334;
  uStack_38 = CONCAT44(_UNK_18032933c,_UNK_180329338);
  iVar4 = *local_30;
  if (iVar4 == local_30[1]) {
    if (iVar4 == 0) {
      iVar7 = 8;
    }
    else {
      iVar7 = iVar4 / 2 + iVar4;
    }
    iVar8 = iVar4 + 1;
    if (iVar4 + 1 < iVar7) {
      iVar8 = iVar7;
    }
    lVar5 = FUN_1800fe7f8((longlong)iVar8 * 0x38);
    piVar3 = local_30;
    if (*(longlong *)(local_30 + 2) != 0) {
      FUN_1802a82f0(lVar5,*(longlong *)(local_30 + 2),(longlong)*local_30 * 0x38);
      FUN_1800fe8d4(*(undefined8 *)(piVar3 + 2));
    }
    *(longlong *)(local_30 + 2) = lVar5;
    local_30[1] = iVar8;
    iVar4 = *local_30;
  }
  else {
    lVar5 = *(longlong *)(local_30 + 2);
  }
  lVar6 = (longlong)iVar4 * 0x38;
  *(undefined8 *)(lVar5 + 0x30 + lVar6) = uStack_38;
  puVar1 = (undefined4 *)(lVar5 + 0x20 + lVar6);
  *puVar1 = local_48;
  puVar1[1] = CONCAT13(uStack_41,CONCAT12(uStack_42,uStack_44));
  puVar1[2] = (undefined4)uStack_40;
  puVar1[3] = uStack_40._4_4_;
  puVar1 = (undefined4 *)(lVar5 + 0x10 + lVar6);
  *puVar1 = local_58;
  puVar1[1] = uStack_54;
  puVar1[2] = uStack_50;
  puVar1[3] = uStack_4c;
  *(undefined8 *)(lVar5 + lVar6) = local_68;
  ((undefined8 *)(lVar5 + lVar6))[1] = uStack_60;
  *local_30 = *local_30 + 1;
  uStack_40 = 0;
  uStack_38 = 0;
  local_48 = 1;
  FUN_1801c07f5(&local_68,0x20,"%s","Eggplant");
  uStack_44 = 0x101;
  uStack_42 = 0;
  uStack_40._0_4_ = _DAT_180329340;
  uStack_40._4_4_ = _UNK_180329344;
  uStack_38 = CONCAT44(_UNK_18032934c,_UNK_180329348);
  iVar4 = *local_30;
  if (iVar4 == local_30[1]) {
    if (iVar4 == 0) {
      iVar7 = 8;
    }
    else {
      iVar7 = iVar4 / 2 + iVar4;
    }
    iVar8 = iVar4 + 1;
    if (iVar4 + 1 < iVar7) {
      iVar8 = iVar7;
    }
    lVar5 = FUN_1800fe7f8((longlong)iVar8 * 0x38);
    piVar3 = local_30;
    if (*(longlong *)(local_30 + 2) != 0) {
      FUN_1802a82f0(lVar5,*(longlong *)(local_30 + 2),(longlong)*local_30 * 0x38);
      FUN_1800fe8d4(*(undefined8 *)(piVar3 + 2));
    }
    *(longlong *)(local_30 + 2) = lVar5;
    local_30[1] = iVar8;
    iVar4 = *local_30;
  }
  else {
    lVar5 = *(longlong *)(local_30 + 2);
  }
  lVar6 = (longlong)iVar4 * 0x38;
  *(undefined8 *)(lVar5 + 0x30 + lVar6) = uStack_38;
  puVar1 = (undefined4 *)(lVar5 + 0x20 + lVar6);
  *puVar1 = local_48;
  puVar1[1] = CONCAT13(uStack_41,CONCAT12(uStack_42,uStack_44));
  puVar1[2] = (undefined4)uStack_40;
  puVar1[3] = uStack_40._4_4_;
  puVar1 = (undefined4 *)(lVar5 + 0x10 + lVar6);
  *puVar1 = local_58;
  puVar1[1] = uStack_54;
  puVar1[2] = uStack_50;
  puVar1[3] = uStack_4c;
  *(undefined8 *)(lVar5 + lVar6) = local_68;
  ((undefined8 *)(lVar5 + lVar6))[1] = uStack_60;
  *local_30 = *local_30 + 1;
  uStack_40 = 0;
  uStack_38 = 0;
  local_48 = 2;
  FUN_1801c07f5(&local_68,0x20,"%s","Carrot");
  uStack_44 = 0x101;
  uStack_42 = 0;
  uStack_40._0_4_ = _DAT_180329350;
  uStack_40._4_4_ = _UNK_180329354;
  uStack_38 = CONCAT44(_UNK_18032935c,_UNK_180329358);
  iVar4 = *local_30;
  if (iVar4 == local_30[1]) {
    if (iVar4 == 0) {
      iVar7 = 8;
    }
    else {
      iVar7 = iVar4 / 2 + iVar4;
    }
    iVar8 = iVar4 + 1;
    if (iVar4 + 1 < iVar7) {
      iVar8 = iVar7;
    }
    lVar5 = FUN_1800fe7f8((longlong)iVar8 * 0x38);
    piVar3 = local_30;
    if (*(longlong *)(local_30 + 2) != 0) {
      FUN_1802a82f0(lVar5,*(longlong *)(local_30 + 2),(longlong)*local_30 * 0x38);
      FUN_1800fe8d4(*(undefined8 *)(piVar3 + 2));
    }
    *(longlong *)(local_30 + 2) = lVar5;
    local_30[1] = iVar8;
    iVar4 = *local_30;
  }
  else {
    lVar5 = *(longlong *)(local_30 + 2);
  }
  lVar6 = (longlong)iVar4 * 0x38;
  *(undefined8 *)(lVar5 + 0x30 + lVar6) = uStack_38;
  puVar1 = (undefined4 *)(lVar5 + 0x20 + lVar6);
  *puVar1 = local_48;
  puVar1[1] = CONCAT13(uStack_41,CONCAT12(uStack_42,uStack_44));
  puVar1[2] = (undefined4)uStack_40;
  puVar1[3] = uStack_40._4_4_;
  puVar1 = (undefined4 *)(lVar5 + 0x10 + lVar6);
  *puVar1 = local_58;
  puVar1[1] = uStack_54;
  puVar1[2] = uStack_50;
  puVar1[3] = uStack_4c;
  *(undefined8 *)(lVar5 + lVar6) = local_68;
  ((undefined8 *)(lVar5 + lVar6))[1] = uStack_60;
  *local_30 = *local_30 + 1;
  uStack_40 = 0;
  uStack_38 = 0;
  local_48 = 3;
  FUN_1801c07f5(&local_68,0x20,"%s","Tomato");
  uStack_44 = 0;
  uStack_42 = 0;
  uStack_40._0_4_ = _DAT_180329360;
  uStack_40._4_4_ = _UNK_180329364;
  uStack_38 = CONCAT44(_UNK_18032936c,_UNK_180329368);
  iVar4 = *local_30;
  if (iVar4 == local_30[1]) {
    if (iVar4 == 0) {
      iVar7 = 8;
    }
    else {
      iVar7 = iVar4 / 2 + iVar4;
    }
    iVar8 = iVar4 + 1;
    if (iVar4 + 1 < iVar7) {
      iVar8 = iVar7;
    }
    lVar5 = FUN_1800fe7f8((longlong)iVar8 * 0x38);
    piVar3 = local_30;
    if (*(longlong *)(local_30 + 2) != 0) {
      FUN_1802a82f0(lVar5,*(longlong *)(local_30 + 2),(longlong)*local_30 * 0x38);
      FUN_1800fe8d4(*(undefined8 *)(piVar3 + 2));
    }
    *(longlong *)(local_30 + 2) = lVar5;
    local_30[1] = iVar8;
    iVar4 = *local_30;
  }
  else {
    lVar5 = *(longlong *)(local_30 + 2);
  }
  lVar6 = (longlong)iVar4 * 0x38;
  *(undefined8 *)(lVar5 + 0x30 + lVar6) = uStack_38;
  puVar1 = (undefined4 *)(lVar5 + 0x20 + lVar6);
  *puVar1 = local_48;
  puVar1[1] = CONCAT13(uStack_41,CONCAT12(uStack_42,uStack_44));
  puVar1[2] = (undefined4)uStack_40;
  puVar1[3] = uStack_40._4_4_;
  puVar1 = (undefined4 *)(lVar5 + 0x10 + lVar6);
  *puVar1 = local_58;
  puVar1[1] = uStack_54;
  puVar1[2] = uStack_50;
  puVar1[3] = uStack_4c;
  *(undefined8 *)(lVar5 + lVar6) = local_68;
  ((undefined8 *)(lVar5 + lVar6))[1] = uStack_60;
  *local_30 = *local_30 + 1;
  uStack_40 = 0;
  uStack_38 = 0;
  local_48 = 4;
  FUN_1801c07f5(&local_68,0x20,"%s","A Rather Long Title");
  uStack_44 = 0;
  uStack_42 = 0;
  uStack_40._0_4_ = _DAT_180329370;
  uStack_40._4_4_ = _UNK_180329374;
  uStack_38 = CONCAT44(_UNK_18032937c,_UNK_180329378);
  iVar4 = *local_30;
  if (iVar4 == local_30[1]) {
    if (iVar4 == 0) {
      iVar7 = 8;
    }
    else {
      iVar7 = iVar4 / 2 + iVar4;
    }
    iVar8 = iVar4 + 1;
    if (iVar4 + 1 < iVar7) {
      iVar8 = iVar7;
    }
    lVar5 = FUN_1800fe7f8((longlong)iVar8 * 0x38);
    piVar3 = local_30;
    if (*(longlong *)(local_30 + 2) != 0) {
      FUN_1802a82f0(lVar5,*(longlong *)(local_30 + 2),(longlong)*local_30 * 0x38);
      FUN_1800fe8d4(*(undefined8 *)(piVar3 + 2));
    }
    *(longlong *)(local_30 + 2) = lVar5;
    local_30[1] = iVar8;
    iVar4 = *local_30;
  }
  else {
    lVar5 = *(longlong *)(local_30 + 2);
  }
  lVar6 = (longlong)iVar4 * 0x38;
  *(undefined8 *)(lVar5 + 0x30 + lVar6) = uStack_38;
  puVar1 = (undefined4 *)(lVar5 + 0x20 + lVar6);
  *puVar1 = local_48;
  puVar1[1] = CONCAT13(uStack_41,CONCAT12(uStack_42,uStack_44));
  puVar1[2] = (undefined4)uStack_40;
  puVar1[3] = uStack_40._4_4_;
  puVar1 = (undefined4 *)(lVar5 + 0x10 + lVar6);
  *puVar1 = local_58;
  puVar1[1] = uStack_54;
  puVar1[2] = uStack_50;
  puVar1[3] = uStack_4c;
  *(undefined8 *)(lVar5 + lVar6) = local_68;
  ((undefined8 *)(lVar5 + lVar6))[1] = uStack_60;
  *local_30 = *local_30 + 1;
  uStack_40 = 0;
  uStack_38 = 0;
  local_48 = 5;
  FUN_1801c07f5(&local_68,0x20,"%s","Some Document");
  uStack_44 = 0;
  uStack_42 = 0;
  uStack_40 = CONCAT44(_UNK_180329384,_DAT_180329380);
  uStack_38 = CONCAT44(_UNK_18032938c,_UNK_180329388);
  iVar4 = *local_30;
  if (iVar4 == local_30[1]) {
    if (iVar4 == 0) {
      iVar7 = 8;
    }
    else {
      iVar7 = iVar4 / 2 + iVar4;
    }
    iVar8 = iVar4 + 1;
    if (iVar4 + 1 < iVar7) {
      iVar8 = iVar7;
    }
    lVar5 = FUN_1800fe7f8((longlong)iVar8 * 0x38);
    piVar3 = local_30;
    if (*(longlong *)(local_30 + 2) != 0) {
      FUN_1802a82f0(lVar5,*(longlong *)(local_30 + 2),(longlong)*local_30 * 0x38);
      FUN_1800fe8d4(*(undefined8 *)(piVar3 + 2));
    }
    *(longlong *)(local_30 + 2) = lVar5;
    local_30[1] = iVar8;
    iVar4 = *local_30;
  }
  else {
    lVar5 = *(longlong *)(local_30 + 2);
  }
  lVar6 = (longlong)iVar4 * 0x38;
  *(undefined8 *)(lVar5 + 0x30 + lVar6) = uStack_38;
  puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar6);
  *puVar2 = CONCAT17(uStack_41,CONCAT16(uStack_42,CONCAT24(uStack_44,local_48)));
  puVar2[1] = uStack_40;
  puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar6);
  *puVar2 = CONCAT44(uStack_54,local_58);
  puVar2[1] = CONCAT44(uStack_4c,uStack_50);
  *(undefined8 *)(lVar5 + lVar6) = local_68;
  ((undefined8 *)(lVar5 + lVar6))[1] = uStack_60;
  *local_30 = *local_30 + 1;
  return local_30;
}

