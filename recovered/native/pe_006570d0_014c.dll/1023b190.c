/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1023b190 */

void __thiscall FUN_1023b190(undefined4 *param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  char cVar1;
  uint uVar2;
  lconv *plVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *unaff_FS_OFFSET;
  undefined1 local_88 [44];
  undefined4 *local_5c;
  int local_58;
  undefined8 local_54;
  lconv *local_4c;
  char *local_48;
  undefined1 local_44 [4];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  undefined4 local_18;
  uint local_14;
  int local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_102893f5;
  local_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&local_10;
  param_1[1] = param_3;
  local_8 = 0;
  *param_1 = std::numpunct<wchar_t>::vftable;
  local_5c = param_1;
  local_4c = (lconv *)param_1;
  local_14 = uVar2;
  plVar3 = _localeconv();
  local_4c = plVar3;
  puVar4 = (undefined4 *)FUN_1022bf80(local_88,uVar2);
  local_54 = CONCAT44(param_1,(undefined4)local_54);
  local_40 = *puVar4;
  uStack_3c = puVar4[1];
  uStack_38 = puVar4[2];
  uStack_34 = puVar4[3];
  local_30 = puVar4[4];
  uStack_2c = puVar4[5];
  uStack_28 = puVar4[6];
  uStack_24 = puVar4[7];
  local_20 = *(undefined8 *)(puVar4 + 8);
  local_18 = puVar4[10];
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_8 = CONCAT31(local_8._1_3_,1);
  if (param_4 == '\0') {
    pcVar6 = plVar3->grouping;
  }
  else {
    pcVar6 = "";
  }
  local_48 = pcVar6;
  do {
    cVar1 = *local_48;
    local_48 = local_48 + 1;
  } while (cVar1 != '\0');
  local_48 = local_48 + (1 - (int)(pcVar6 + 1));
  local_58 = FUN_1026d360(local_48,1);
  if (local_58 != 0) {
    if (local_48 != (char *)0x0) {
      FUN_1025b2d0(local_58,pcVar6,local_48);
    }
    param_1[2] = local_58;
    uVar5 = FUN_10048617("false",&local_40);
    param_1[4] = uVar5;
    uVar5 = FUN_10048617(&DAT_10357a30,&local_40);
    param_1[5] = uVar5;
    if (param_4 == '\0') {
      *(wchar_t *)(param_1 + 3) = *local_4c->_W_decimal_point;
      *(wchar_t *)((int)param_1 + 0xe) = *local_4c->_W_thousands_sep;
    }
    else {
      local_44[0] = 0x2e;
      local_48 = (char *)((uint)local_48 & 0xffff0000);
      local_54 = 0;
      FUN_1022d8f0(&local_48,local_44,1,&local_54,&local_40);
      *(undefined2 *)(param_1 + 3) = local_48._0_2_;
      local_48 = (char *)((uint)local_48 & 0xffff0000);
      local_44[0] = 0x2c;
      local_54 = 0;
      FUN_1022d8f0(&local_48,local_44,1,&local_54,&local_40);
      *(undefined2 *)((int)param_1 + 0xe) = local_48._0_2_;
    }
    *unaff_FS_OFFSET = local_10;
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_10228470();
}

