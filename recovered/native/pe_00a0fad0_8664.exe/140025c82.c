/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140025c82 */

undefined8 * FUN_140025c82(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 ****ppppuVar9;
  undefined4 *puVar10;
  char *pcVar11;
  byte *pbVar12;
  ulonglong unaff_R12;
  byte *pbVar13;
  undefined1 local_1d0 [16];
  longlong local_1c0;
  undefined1 local_1b8 [16];
  uint auStack_1a8 [52];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined8 ***local_98 [2];
  ulonglong local_88;
  ulonglong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  byte *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  pbVar13 = param_2;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    pbVar13 = *(byte **)param_2;
  }
  pbVar12 = pbVar13 + *(longlong *)(param_2 + 0x10);
  local_58 = param_2;
  local_50 = param_1;
  for (; pbVar13 != pbVar12; pbVar13 = pbVar13 + 1) {
    bVar1 = *pbVar13;
    unaff_R12 = CONCAT71((int7)(unaff_R12 >> 8),bVar1);
    iVar6 = isprint((uint)bVar1);
    if (iVar6 == 0) {
      FUN_140009eb0(local_1d0,1);
      *(uint *)((longlong)auStack_1a8 + (longlong)*(int *)(local_1c0 + 4)) =
           *(uint *)((longlong)auStack_1a8 + (longlong)*(int *)(local_1c0 + 4)) & 0xfffff1ff | 0x800
      ;
      FUN_14002632c(&local_1c0,bVar1);
      FUN_1400170f8(local_1b8,local_98);
      pcVar11 = "";
      if (local_88 < 2) {
        pcVar11 = "0";
      }
      FUN_14000169c(local_b8,&DAT_14016e7dc);
      FUN_14000ed8c(local_d8,local_b8,pcVar11);
      ppppuVar9 = local_98;
      if (0xf < local_80) {
        ppppuVar9 = (undefined8 ****)local_98[0];
      }
      plVar7 = (longlong *)FUN_14000b1f8(local_d8,ppppuVar9,local_88);
      local_78 = (undefined4)*plVar7;
      uStack_74 = *(undefined4 *)((longlong)plVar7 + 4);
      puVar3 = (undefined4 *)*plVar7;
      uStack_70 = (undefined4)plVar7[1];
      uStack_6c = *(undefined4 *)((longlong)plVar7 + 0xc);
      local_68 = (undefined4)plVar7[2];
      uStack_64 = *(undefined4 *)((longlong)plVar7 + 0x14);
      uStack_60 = (undefined4)plVar7[3];
      uStack_5c = *(undefined4 *)((longlong)plVar7 + 0x1c);
      uVar2 = plVar7[3];
      plVar7[2] = 0;
      plVar7[3] = 0xf;
      *(undefined1 *)plVar7 = 0;
      puVar10 = &local_78;
      if (0xf < uVar2) {
        puVar10 = puVar3;
      }
      FUN_14000b1f8(local_50,puVar10);
      FUN_1400017de(&local_78);
      FUN_1400017de(local_d8);
      FUN_1400017de(local_b8);
      FUN_1400017de(local_98);
      FUN_140009ff0(local_1d0);
    }
    else {
      FUN_14000cf50(local_50,unaff_R12 & 0xffffffff);
    }
  }
  cVar5 = FUN_1400170b4(local_50,local_58);
  puVar4 = local_50;
  if (cVar5 == '\0') {
    while (lVar8 = FUN_14000e108(puVar4,0x27,0), lVar8 != -1) {
      FUN_140018eea(puVar4,lVar8,lVar8 + 1,&DAT_140170b91,4);
    }
    FUN_140018650(puVar4,0,&DAT_140171bb5,4);
    FUN_14000cf50(local_50,0x29);
    FUN_14000cf50(local_50,0x22);
    FUN_14000cf50(local_50,0x27);
  }
  return local_50;
}

