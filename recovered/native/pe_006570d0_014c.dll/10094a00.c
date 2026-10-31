/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10094a00 */

void __thiscall FUN_10094a00(int *param_1,int param_2,int param_3,byte param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 **ppuVar4;
  int iVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_34;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3a60;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  iVar6 = param_1[1];
  iVar5 = *(int *)(iVar6 + 4);
  ppuVar4 = &local_34;
  if (iVar5 == 6) {
    ppuVar4 = &local_34;
    if (*(int *)(iVar6 + 0x18) != 1) {
      FUN_10094888();
      iVar5 = *(int *)(iVar6 + 0x18);
      *(int *)(iVar6 + 0x18) = iVar5 + -1;
      FUN_1009321a(*(undefined2 *)(*(int *)(iVar6 + 0x1c) + -2 + iVar5 * 2));
      iVar6 = param_1[1];
      iVar5 = *(int *)(iVar6 + 4);
      ppuVar4 = (undefined4 **)local_20;
      goto LAB_10094a6a;
    }
  }
  else {
LAB_10094a6a:
    local_20 = (undefined1 *)ppuVar4;
    if ((iVar5 == 0xe) || (ppuVar4 = (undefined4 **)local_20, iVar5 == 9)) {
      iVar6 = *(int *)(iVar6 + 0x14);
      goto code_r0x10094c10;
    }
  }
  local_20 = (undefined1 *)ppuVar4;
  if (param_3 == 1 && param_2 == 0) {
    local_24 = (undefined4 *)FUN_10228350(0x14);
    local_24[1] = DAT_1028f568;
    local_24[2] = 0;
    local_24[3] = 0;
    local_24[4] = 0;
    local_14 = 0xffffffff;
    *local_24 = std::_Node_endif::vftable;
    local_34 = (undefined4 *)FUN_10228350(0x1c);
    local_34[1] = DAT_1028f56c;
    local_34[2] = 0;
    local_34[3] = 0;
    local_34[4] = 0;
    *local_34 = std::_Node_if::vftable;
    local_34[5] = local_24;
    local_34[6] = 0;
    local_14 = 0xffffffff;
    local_30 = (undefined4 *)FUN_10228350(0x1c);
    local_30[1] = DAT_1028f56c;
    local_30[2] = 0;
    local_30[3] = 0;
    local_30[4] = 0;
    *local_30 = std::_Node_if::vftable;
    local_30[5] = local_24;
    local_30[6] = 0;
    local_14 = 0xffffffff;
    local_28 = (undefined4 *)FUN_10228350(0x14);
    *local_28 = std::_Node_base::vftable;
    local_28[1] = DAT_1028f5b8;
    local_28[2] = 0;
    local_28[3] = 0;
    local_28[4] = 0;
    local_14 = 0xffffffff;
    local_2c = (undefined4 *)FUN_10228350(0x18);
    puVar3 = local_30;
    puVar2 = local_34;
    local_2c[1] = DAT_1028f5bc;
    local_2c[2] = 0;
    local_2c[3] = 0;
    local_2c[4] = 0;
    *local_2c = std::_Node_end_group::vftable;
    local_2c[5] = local_28;
    local_14 = 0xffffffff;
    local_30[3] = local_28;
    local_28[4] = local_30;
    local_28[3] = local_2c;
    local_2c[4] = local_28;
    local_2c[3] = local_24;
    local_34[6] = local_30;
    FUN_1001d4f8(local_24);
    FUN_1002065a(iVar6,puVar2);
    if (param_4 == 0) {
      iVar5 = puVar3[3];
      uVar1 = *(undefined4 *)(puVar2[3] + 0x10);
      *(undefined4 *)(puVar2[3] + 0x10) = *(undefined4 *)(iVar5 + 0x10);
      *(undefined4 *)(iVar5 + 0x10) = uVar1;
      uVar1 = puVar2[3];
      puVar2[3] = puVar3[3];
      puVar3[3] = uVar1;
    }
    *unaff_FS_OFFSET = local_1c;
    return;
  }
code_r0x10094c10:
  if (*(int *)(*param_1 + 0x18) != -1) {
    local_24 = (undefined4 *)FUN_10228350(0x18);
    local_24[1] = DAT_1028f5c0;
    local_24[2] = 0;
    local_24[3] = 0;
    local_24[4] = 0;
    local_14 = 0xffffffff;
    *local_24 = std::_Node_end_rep::vftable;
    local_24[5] = 0;
    FUN_1001d4f8(local_24);
    local_28 = (undefined4 *)FUN_10228350(0x28);
    iVar5 = *(int *)(*param_1 + 0x18);
    *(int *)(*param_1 + 0x18) = iVar5 + 1;
    local_28[1] = 0x12;
    local_28[2] = (uint)param_4 * 2;
    local_28[3] = 0;
    local_28[4] = 0;
    *local_28 = std::_Node_rep::vftable;
    local_28[5] = param_2;
    local_28[6] = param_3;
    local_28[7] = local_24;
    local_28[8] = iVar5;
    local_28[9] = 0xffffffff;
    local_14 = 0xffffffff;
    local_24[5] = local_28;
    FUN_1002065a(iVar6,local_28);
    *unaff_FS_OFFSET = local_1c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10228760(9);
}

