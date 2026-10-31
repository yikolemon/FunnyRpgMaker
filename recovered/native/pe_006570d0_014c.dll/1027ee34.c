/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027ee34 */

void FUN_1027ee34(DWORD *param_1,uint param_2,byte *param_3,int param_4,int param_5)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  BOOL BVar6;
  DWORD DVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 local_80;
  int local_78;
  UINT local_74;
  byte *local_70;
  HANDLE local_6c;
  byte *local_68;
  byte *local_64;
  undefined2 local_60 [2];
  undefined8 local_5c;
  byte *local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  byte *local_3c;
  int local_38;
  byte local_31;
  byte *local_30;
  undefined1 local_2c [8];
  byte local_24;
  byte local_23;
  byte local_1c [8];
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_1028a56d;
  local_10 = ExceptionList;
  uVar3 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_50 = (param_2 & 0x3f) * 0x38;
  local_48 = (int)param_2 >> 6;
  local_68 = param_3;
  local_40 = param_5;
  local_6c = *(HANDLE *)(local_50 + 0x18 + (&DAT_103a5230)[local_48]);
  local_54 = param_3 + param_4;
  local_14 = uVar3;
  local_74 = GetConsoleOutputCP();
  if (*(char *)(param_5 + 0x14) == '\0') {
    FUN_1025ec50(uVar3);
  }
  local_78 = *(int *)(*(int *)(param_5 + 0xc) + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_30 = local_68;
  if (local_54 <= local_68) {
LAB_1027f1de:
    ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  local_5c = local_5c & 0xffffffff;
  iVar9 = local_50;
LAB_1027eed9:
  iVar10 = 0;
  local_31 = *local_30;
  local_44 = 0;
  local_38 = 1;
  if (local_78 == 0xfde9) {
    pbVar4 = (byte *)((&DAT_103a5230)[local_48] + 0x2e + iVar9);
    local_5c = CONCAT44(pbVar4,(undefined4)local_5c);
    pbVar5 = pbVar4;
    local_38 = iVar10;
    do {
      if (*pbVar5 == 0) break;
      local_38 = local_38 + 1;
      pbVar5 = pbVar5 + 1;
    } while (local_38 < 5);
    iVar9 = (int)local_54 - (int)local_30;
    if (local_38 < 1) {
      local_4c = (char)(&DAT_1039bbe0)[*local_30] + 1;
      if (iVar9 < local_4c) {
        if (0 < iVar9) {
          do {
            *(byte *)((&DAT_103a5230)[local_48] + local_50 + 0x2e + iVar10) = local_30[iVar10];
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar9);
        }
        goto LAB_1027f18f;
      }
      local_5c = 0;
      local_38 = (local_4c == 4) + 1;
      local_3c = local_30;
      iVar10 = FUN_1027855f(&local_44,&local_3c,local_38,&local_5c,local_40);
      iVar9 = local_50;
    }
    else {
      local_3c = (byte *)((int)(char)(&DAT_1039bbe0)[*pbVar4] + 1);
      local_4c = (int)local_3c - local_38;
      if (iVar9 < local_4c) {
        if (0 < iVar9) {
          do {
            pbVar5 = local_30 + iVar10;
            iVar8 = (&DAT_103a5230)[local_48] + local_50 + iVar10;
            iVar10 = iVar10 + 1;
            *(byte *)(iVar8 + 0x2e + local_38) = *pbVar5;
          } while (iVar10 < iVar9);
        }
LAB_1027f18f:
        param_1[1] = param_1[1] + iVar9;
        goto LAB_1027f1de;
      }
      do {
        local_1c[iVar10] = *pbVar4;
        iVar10 = iVar10 + 1;
        pbVar4 = pbVar4 + 1;
      } while (iVar10 < local_38);
      if (0 < local_4c) {
        FUN_1025b2d0(local_1c + local_38,local_30,local_4c);
      }
      iVar9 = local_50;
      iVar10 = 0;
      do {
        *(undefined1 *)((&DAT_103a5230)[local_48] + local_50 + 0x2e + iVar10) = 0;
        iVar10 = iVar10 + 1;
      } while (iVar10 < local_38);
      local_70 = local_1c;
      local_80 = 0;
      local_38 = (local_3c == (byte *)0x4) + 1;
      iVar10 = FUN_1027855f(&local_44,&local_70,local_38,&local_80,local_40);
    }
    if (iVar10 == -1) goto LAB_1027f1de;
    pbVar5 = local_30 + local_4c + -1;
  }
  else {
    local_4c = (&DAT_103a5230)[local_48];
    bVar1 = *(byte *)(local_4c + 0x2d + iVar9);
    if ((bVar1 & 4) == 0) {
      if (*(short *)(**(int **)(local_40 + 0xc) + (uint)*local_30 * 2) < 0) {
        local_3c = local_30 + 1;
        if (local_3c < local_54) {
          iVar10 = FUN_10278147(&local_44,local_30,2,local_40);
          pbVar5 = local_3c;
          if (iVar10 != -1) goto LAB_1027f0b6;
        }
        else {
          *(byte *)(local_4c + 0x2e + iVar9) = *local_30;
          pbVar5 = (byte *)((&DAT_103a5230)[local_48] + 0x2d + iVar9);
          *pbVar5 = *pbVar5 | 4;
          param_1[1] = local_5c._4_4_ + 1;
        }
        goto LAB_1027f1de;
      }
      uVar11 = 1;
      pbVar5 = local_30;
    }
    else {
      uVar2 = CONCAT11(bVar1,*(undefined1 *)(local_4c + 0x2e + iVar9)) & 0xfbff;
      local_24 = (byte)uVar2;
      local_23 = *local_30;
      *(char *)(local_4c + 0x2d + iVar9) = (char)(uVar2 >> 8);
      uVar11 = 2;
      pbVar5 = &local_24;
    }
    iVar10 = FUN_10278147(&local_44,pbVar5,uVar11,local_40);
    pbVar5 = local_30;
    if (iVar10 == -1) goto LAB_1027f1de;
  }
LAB_1027f0b6:
  local_30 = pbVar5 + 1;
  local_3c = (byte *)FUN_10274283(local_74,0,&local_44,local_38,local_2c,5,0,0);
  if (local_3c == (byte *)0x0) goto LAB_1027f1de;
  BVar6 = WriteFile(local_6c,local_2c,(DWORD)local_3c,(LPDWORD)&local_64,(LPOVERLAPPED)0x0);
  if (BVar6 == 0) {
LAB_1027f1d6:
    DVar7 = GetLastError();
    *param_1 = DVar7;
    goto LAB_1027f1de;
  }
  local_5c = CONCAT44(local_30 + (param_1[2] - (int)local_68),(undefined4)local_5c);
  param_1[1] = (DWORD)(local_30 + (param_1[2] - (int)local_68));
  if (local_64 < local_3c) goto LAB_1027f1de;
  if (local_31 == 10) {
    local_60[0] = 0xd;
    BVar6 = WriteFile(local_6c,local_60,1,(LPDWORD)&local_64,(LPOVERLAPPED)0x0);
    if (BVar6 == 0) goto LAB_1027f1d6;
    if (local_64 == (byte *)0x0) goto LAB_1027f1de;
    param_1[2] = param_1[2] + 1;
    param_1[1] = param_1[1] + 1;
    local_5c = CONCAT44(param_1[1],(undefined4)local_5c);
  }
  if (local_54 <= local_30) goto LAB_1027f1de;
  goto LAB_1027eed9;
}

