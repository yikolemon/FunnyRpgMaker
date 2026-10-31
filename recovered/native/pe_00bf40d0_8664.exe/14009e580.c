/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009e580 */

void FUN_14009e580(longlong *param_1,ulonglong *param_2,longlong param_3,int param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint *puVar4;
  int iVar5;
  undefined8 uVar6;
  PVOID pvVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  int iVar13;
  byte *pbVar14;
  undefined1 auStackY_138 [32];
  uint *local_f8;
  byte *pbStack_f0;
  uint local_e8;
  ulonglong *local_e0;
  int local_d8;
  uint *local_d0;
  byte *local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  ulonglong *local_98;
  byte *local_90;
  uint *local_88;
  byte *local_80;
  uint *local_78;
  byte *pbStack_70;
  uint local_68 [2];
  byte *local_60;
  ulonglong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_138;
  local_e0 = param_2;
  local_d8 = param_4;
  local_b8 = param_1;
  local_a0 = param_1;
  local_98 = param_2;
  uVar6 = FUN_14008d650();
  local_c0 = uVar6;
  iVar5 = FUN_14009e960(param_1,param_2,param_3);
  pvVar7 = FUN_14009d690();
  *(int *)((longlong)pvVar7 + 0x30) = *(int *)((longlong)pvVar7 + 0x30) + 1;
  local_60 = (byte *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  if (*(int *)(param_3 + 8) == 0) {
    local_68[0] = 0;
  }
  else {
    local_60 = (byte *)(param_2[1] + (longlong)*(int *)(param_3 + 8));
    uVar8 = *local_60 & 0xf;
    local_60 = local_60 + -(longlong)(char)(&DAT_14010b650)[uVar8];
    local_68[0] = *(uint *)(local_60 + -4) >> ((&DAT_14010b660)[uVar8] & 0x1f);
  }
  local_f8 = local_68;
  local_88 = local_68;
  pbVar9 = local_60 + -1;
  bVar2 = false;
  bVar3 = false;
  iVar13 = 0;
  pbVar11 = local_60;
  local_90 = pbVar9;
  pbStack_f0 = pbVar9;
  local_b0 = param_1;
  local_a8 = uVar6;
  local_80 = pbVar9;
  pbVar14 = pbVar9;
  if (0 < (int)local_68[0]) {
    do {
      if (iVar13 == iVar5) {
        bVar2 = true;
        pbVar9 = pbVar11;
      }
      if (iVar13 == param_4) {
        bVar3 = true;
        local_90 = pbVar11;
      }
      pbStack_f0 = pbVar9;
      local_80 = local_90;
      param_2 = local_e0;
      pbVar14 = local_90;
      if ((bVar2) && (bVar3)) break;
      pbVar10 = pbVar11 + -(longlong)(char)(&DAT_14010b650)[*pbVar11 & 0xf];
      uVar8 = *(uint *)(pbVar10 + -4) >> ((&DAT_14010b660)[*pbVar11 & 0xf] & 0x1f);
      local_58 = CONCAT44(uVar8,uVar8 >> 2) & 0x3ffffffff;
      if ((uVar8 & 3) - 1 < 2) {
        pbVar11 = pbVar10 + (4 - (longlong)(char)(&DAT_14010b650)[pbVar10[4] & 0xf]);
        uStack_50 = CONCAT44(*(uint *)(pbVar11 + -4) >> ((&DAT_14010b660)[pbVar10[4] & 0xf] & 0x1f),
                             *(undefined4 *)pbVar10);
      }
      else {
        pbVar11 = pbVar10;
        if ((uVar8 & 3) == 3) {
          pbVar11 = pbVar10 + 4;
          uStack_50 = CONCAT44(uStack_50._4_4_,*(undefined4 *)pbVar10);
        }
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < (int)local_68[0]);
  }
  while ((local_d0 = local_68, local_c8 = local_60, local_60 <= pbVar9 && (pbVar14 < pbVar9))) {
    FUN_14009dcb0((longlong)local_f8,(longlong *)&pbStack_f0);
    puVar4 = local_f8;
    uVar8 = local_f8[5];
    uVar1 = local_f8[6];
    local_e0 = (ulonglong *)CONCAT44(local_e0._4_4_,local_f8[7]);
    local_78 = local_f8;
    pbStack_f0 = pbVar9;
    pbStack_70 = pbVar9;
    FUN_14009dcb0((longlong)local_f8,(longlong *)&pbStack_f0);
    pbVar9 = pbVar9 + -(ulonglong)puVar4[4];
    pbStack_f0 = pbVar9;
    iVar5 = FUN_14009dbd0((longlong *)&local_88,param_4,(longlong)&local_78,iVar5,
                          (longlong *)&local_f8);
    local_d0 = (uint *)CONCAT44(local_d0._4_4_,iVar5);
    local_e8 = 0;
    if (uVar8 != 0) {
      local_e8 = uVar1;
    }
    if (local_e8 != 0) {
      *(int *)(param_2 + 9) = iVar5 + 2;
      if (uVar8 - 1 < 2) {
        puVar12 = (undefined8 *)(((ulonglong)local_e0 & 0xffffffff) + *local_b0);
        if (uVar8 == 2) {
          puVar12 = (undefined8 *)*puVar12;
        }
        _CallSettingFrameEncoded(param_2[1] + (longlong)(int)local_e8,*local_b0,puVar12);
      }
      else {
        _CallSettingFrame();
      }
      FUN_14008d670(local_c0);
    }
  }
  pvVar7 = FUN_14009d690();
  if (0 < *(int *)((longlong)pvVar7 + 0x30)) {
    pvVar7 = FUN_14009d690();
    *(int *)((longlong)pvVar7 + 0x30) = *(int *)((longlong)pvVar7 + 0x30) + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStackY_138);
}

