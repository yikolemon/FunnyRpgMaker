/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140056814 */

void FUN_140056814(undefined8 param_1,char *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  char cVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  int iVar7;
  int *piVar8;
  undefined8 ****ppppuVar9;
  undefined1 *puVar10;
  bool bVar11;
  uint uVar12;
  undefined1 local_328 [56];
  undefined8 local_2f0;
  undefined1 local_2e8 [32];
  undefined1 local_2c8 [32];
  undefined1 local_2a8 [32];
  undefined1 local_288 [32];
  ulonglong local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  char *local_f8;
  undefined8 *local_f0;
  int local_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  ulonglong local_d0;
  ulonglong local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a0 [32];
  undefined8 ***local_80 [2];
  undefined8 local_70;
  ulonglong local_68;
  undefined1 local_60 [21];
  undefined1 local_4b;
  char local_4a;
  char local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_f8 = param_2;
  local_f0 = param_3;
  FUN_140057552(local_60,0);
  FUN_14005759c(local_80,&DAT_1401cc178,0);
  FUN_140007025();
  local_c8 = 0xffff00000000;
  ppppuVar9 = local_80;
  if (7 < local_68) {
    ppppuVar9 = (undefined8 ****)local_80[0];
  }
  iStack_c0 = FUN_1400dcbb0(ppppuVar9,&local_268,3,0xffffffff);
  FUN_140007276(&local_c8,iStack_c0,&local_268);
  iVar2 = iStack_c0;
  local_e0 = FUN_140007025();
  local_e8 = iVar2;
  iVar7 = (int)local_c8;
  if ((int)local_c8 == 0) {
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14004137b("exists",&local_e8,local_80);
    }
  }
  else {
    FUN_140007025();
    if (iVar7 != 1) {
      local_4b = 1;
      piVar8 = &local_e8;
      FUN_14005759c(piVar8,&DAT_1401cc178,0);
      local_49 = 0;
      local_4a = 1;
      if (7 < local_d0) {
        piVar8 = (int *)CONCAT44(uStack_e4,local_e8);
      }
      iVar7 = FUN_1400dcbb0(piVar8,&local_268,9,0xffffffff);
      if (iVar7 != 0) {
        local_49 = 1;
        local_4a = 1;
                    /* WARNING: Subroutine does not return */
        FUN_140041f39("file_size",iVar7,&local_e8);
      }
      bVar11 = uStack_260 != 0;
      local_4a = '\x01';
      goto code_r0x000140056970;
    }
  }
  local_4a = '\0';
  bVar11 = false;
code_r0x000140056970:
  local_49 = local_4a;
  if (local_4a != '\0') {
    FUN_140005690(&local_e8);
  }
  FUN_140005690(local_80);
  if (bVar11) {
    uVar12 = 0;
    FUN_14003e638(&local_268,&DAT_1401cc178,1,0x40,1);
    local_2f0 = 0;
    FUN_1400575e4(local_148,&local_268,local_328,1,uVar12 & 0xffffff00);
    FUN_14005783a(local_60,local_148);
    FUN_14003e690(&local_268);
  }
  else {
    local_268 = 0;
    uStack_260 = 0;
    FUN_140070354(local_80,&local_268,0,1);
    FUN_1400578f8(local_138,local_80);
    uVar5 = FUN_140057b3c(local_60,&DAT_14016ec8e);
    FUN_14005783a(uVar5,local_138);
    FUN_140057b90(local_80);
  }
  FUN_14000169c(local_80,"UNKNOWN_");
  FUN_140031d26(&local_268,0);
  ppppuVar9 = local_80;
  if (0xf < local_68) {
    ppppuVar9 = (undefined8 ****)local_80[0];
  }
  puVar4 = (ulonglong *)FUN_140018650(&local_268,0,ppppuVar9,local_70);
  local_c8 = *puVar4;
  iStack_c0 = (int)puVar4[1];
  uStack_bc = *(undefined4 *)((longlong)puVar4 + 0xc);
  local_b8 = (undefined4)puVar4[2];
  uStack_b4 = *(undefined4 *)((longlong)puVar4 + 0x14);
  uStack_b0 = (undefined4)puVar4[3];
  uStack_ac = *(undefined4 *)((longlong)puVar4 + 0x1c);
  puVar4[2] = 0;
  puVar4[3] = 0xf;
  *(undefined1 *)puVar4 = 0;
  FUN_1400017de(&local_268);
  iVar7 = 0;
  while( true ) {
    uVar5 = FUN_140057b3c(local_60,&DAT_14016ec8e);
    cVar3 = FUN_140057be2(uVar5,&local_c8);
    if (cVar3 == '\0') break;
    iVar7 = iVar7 + 1;
    FUN_140031d26(local_a0,iVar7);
    ppppuVar9 = local_80;
    if (0xf < local_68) {
      ppppuVar9 = (undefined8 ****)local_80[0];
    }
    puVar4 = (ulonglong *)FUN_140018650(local_a0,0,ppppuVar9,local_70);
    local_268 = *puVar4;
    uStack_260 = puVar4[1];
    local_258._0_4_ = (undefined4)puVar4[2];
    local_258._4_4_ = *(undefined4 *)((longlong)puVar4 + 0x14);
    uStack_250._0_4_ = (undefined4)puVar4[3];
    uStack_250._4_4_ = *(undefined4 *)((longlong)puVar4 + 0x1c);
    puVar4[2] = 0;
    puVar4[3] = 0xf;
    *(undefined1 *)puVar4 = 0;
    FUN_1400065bc(&local_c8);
    local_b8 = (undefined4)local_258;
    uStack_b4 = local_258._4_4_;
    uStack_b0 = (undefined4)uStack_250;
    uStack_ac = uStack_250._4_4_;
    local_c8 = local_268;
    iStack_c0 = (undefined4)uStack_260;
    uStack_bc = uStack_260._4_4_;
    local_258 = 0;
    uStack_250 = 0xf;
    local_268 = local_268 & 0xffffffffffffff00;
    FUN_1400017de(&local_268);
    FUN_1400017de(local_a0);
  }
  local_268 = 0;
  uStack_260 = 0;
  FUN_140070354(local_a0,&local_268,0,1);
  FUN_1400578f8(local_128,local_a0);
  uVar5 = FUN_140057b3c(local_60,&DAT_14016ec8e);
  FUN_140006874(local_2c8,&local_c8);
  uVar5 = FUN_140057c36(uVar5,local_2c8);
  FUN_14005783a(uVar5,local_128);
  FUN_140057b90(local_a0);
  puVar6 = &DAT_140170b38;
  if (*local_f8 != '\0') {
    puVar6 = &DAT_140170c2d;
  }
  FUN_140057d74(local_118,puVar6);
  uVar5 = FUN_140057b3c(local_60,&DAT_14016ec8e);
  FUN_140006874(local_2a8,&local_c8);
  uVar5 = FUN_140057c36(uVar5,local_2a8);
  uVar5 = FUN_140057b3c(uVar5,"mode");
  FUN_14005783a(uVar5,local_118);
  local_268 = 0;
  uStack_260 = 0;
  FUN_140070354(local_a0,&local_268,0,2);
  FUN_1400578f8(local_108,local_a0);
  uVar5 = FUN_140057b3c(local_60,&DAT_14016ec8e);
  FUN_140006874(local_288,&local_c8);
  uVar5 = FUN_140057c36(uVar5,local_288);
  uVar5 = FUN_140057b3c(uVar5,"key");
  FUN_14005783a(uVar5,local_108);
  FUN_140057b90(local_a0);
  puVar1 = (undefined1 *)local_f0[1];
  for (puVar10 = (undefined1 *)*local_f0; puVar10 != puVar1; puVar10 = puVar10 + 1) {
    uVar5 = FUN_140057b3c(local_60,&DAT_14016ec8e);
    FUN_140006874(local_2e8,&local_c8);
    uVar5 = FUN_140057c36(uVar5,local_2e8);
    uVar5 = FUN_140057b3c(uVar5,"key");
    FUN_140059db0(&local_268,&DAT_140170677,*puVar10);
    FUN_14000169c(local_a0,&local_268);
    FUN_140018136(&local_268,"0x",local_a0);
    FUN_140057eb8(local_158,&local_268);
    FUN_140057df4(uVar5,local_158);
    FUN_1400578a6(local_158);
    FUN_1400017de(&local_268);
    FUN_1400017de(local_a0);
  }
  uVar12 = 0;
  FUN_140057f38(&local_268,&DAT_1401cc178,2,0x40,1);
  FUN_140057f90(local_60,local_a0,4,0x20,uVar12 & 0xffffff00,0);
  FUN_1400058b9(&local_268,local_a0);
  FUN_1400017de(local_a0);
  FUN_1400581a2(&local_268);
  FUN_1400017de(&local_c8);
  FUN_1400578a6(local_60);
  return;
}

