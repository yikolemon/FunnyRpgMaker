/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10243570 */

void __thiscall FUN_10243570(int param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  uint uVar2;
  lconv *plVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *unaff_FS_OFFSET;
  undefined1 local_84 [44];
  lconv *local_58;
  int local_54;
  undefined8 local_50;
  undefined4 local_48;
  char local_44 [4];
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
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_102899ad;
  local_10 = *unaff_FS_OFFSET;
  uVar2 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  *unaff_FS_OFFSET = (int)&local_10;
  local_14 = uVar2;
  plVar3 = _localeconv();
  local_58 = plVar3;
  puVar4 = (undefined4 *)FUN_1022bf80(local_84,uVar2);
  local_50 = CONCAT44(param_1,(undefined4)local_50);
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
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  local_8 = 0;
  if (param_3 == '\0') {
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
  local_54 = FUN_1026d360(local_48,1);
  if (local_54 != 0) {
    if (local_48 != (char *)0x0) {
      FUN_1025b2d0(local_54,pcVar6,local_48);
    }
    *(int *)(param_1 + 8) = local_54;
    uVar5 = FUN_10250990("false",&local_40);
    *(undefined4 *)(param_1 + 0x10) = uVar5;
    uVar5 = FUN_10250990(&DAT_10357a30,&local_40);
    plVar3 = local_58;
    *(undefined4 *)(param_1 + 0x14) = uVar5;
    local_50 = 0;
    if (param_3 == '\0') {
      local_44[0] = *local_58->decimal_point;
      local_48 = (char *)((uint)local_48._2_2_ << 0x10);
      FUN_1022d8f0(&local_48,local_44,1,&local_50,&local_40);
      *(undefined2 *)(param_1 + 0xc) = (undefined2)local_48;
      local_44[0] = *plVar3->thousands_sep;
    }
    else {
      local_44[0] = '.';
      local_48 = (char *)((uint)local_48._2_2_ << 0x10);
      FUN_1022d8f0(&local_48,local_44,1,&local_50,&local_40);
      *(undefined2 *)(param_1 + 0xc) = (undefined2)local_48;
      local_44[0] = ',';
    }
    local_48 = (char *)((uint)local_48 & 0xffff0000);
    local_50 = 0;
    FUN_1022d8f0(&local_48,local_44,1,&local_50,&local_40);
    *(undefined2 *)(param_1 + 0xe) = (undefined2)local_48;
    *unaff_FS_OFFSET = local_10;
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_10228470();
}

