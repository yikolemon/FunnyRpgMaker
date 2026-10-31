/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140068c7d */

void FUN_140068c7d(longlong *param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  int param_5,char param_6)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  byte *pbVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  byte *pbVar12;
  bool bVar13;
  undefined1 auStackY_138 [32];
  byte local_b8 [32];
  byte local_98 [24];
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_138;
  lVar1 = *param_1;
  if ((param_6 == '\0') && (cVar2 = FUN_1400692c6(param_1[1]), cVar2 == '\0')) {
    FUN_1400679d7(&local_78,*param_4);
    FUN_140068c7d((longlong *)param_1[1],param_2,param_3,&local_78,param_5,'\x01');
  }
  cVar2 = FUN_140067dff((longlong)param_4);
  if (cVar2 == '\0') {
    lVar4 = FUN_140068c2d(param_2);
    lVar5 = FUN_140068c2d(param_3);
    FUN_140069ca4(param_4,lVar4 + lVar5);
    cVar2 = FUN_140067dff((longlong)param_4);
    if (cVar2 != '\0') goto LAB_140068d4d;
    if (*(char *)(lVar1 + 0xc) != '\0') {
      *(undefined4 *)*param_4 = 0;
      *(undefined1 *)((longlong)param_1 + 0x19) = 0;
    }
  }
  else {
LAB_140068d4d:
    param_1[4] = 0;
    local_78 = *param_4;
    uStack_70 = param_4[1];
    local_68 = param_4[2];
    uStack_60 = param_4[3];
    local_58 = param_4[4];
    uStack_50 = param_4[5];
    pbVar6 = (byte *)FUN_140069ce9((longlong)&local_78);
    uVar7 = FUN_140068c2d(param_2);
    if (uVar7 <= (ulonglong)param_4[2]) {
      if (*(char *)(lVar1 + 0x141) != '\0') {
        FUN_140069cee((undefined8 *)local_98);
        FUN_140069cf9((longlong)param_1,(byte *)(lVar1 + 0x178),local_98);
        FUN_140069cf9((longlong)param_1,local_98,(byte *)(lVar1 + 0x158));
      }
      if (uVar7 == 0) {
        if (param_6 == '\0') goto LAB_140069056;
LAB_140068ffb:
        if ((((int)param_1[4] == 0) || (0 < (int)param_1[7])) ||
           ((int)param_1[(ulonglong)((int)param_1[4] - 1) * 4 + 7] < 0)) {
          FUN_140069cee((undefined8 *)local_98);
          local_98[0] = 0x31;
          local_98[1] = 0;
          local_98[2] = 0;
          local_98[3] = 0;
          local_80 = *(undefined4 *)((longlong)param_1 + 0x1c);
          FUN_140069cee((undefined8 *)local_b8);
          FUN_140069cf9((longlong)param_1,local_98,local_b8);
        }
        FUN_14006a1b1((longlong)param_1);
      }
      else {
        uVar10 = 0;
        uVar11 = 0x80;
        pbVar12 = pbVar6;
        do {
          if ((uVar11 & *pbVar12) != 0) {
            FUN_140069f20(local_98,param_2,uVar10,lVar1,param_5,*(int *)((longlong)param_1 + 0x1c),
                          '\x01');
            FUN_140069f20(local_b8,param_2,uVar10,lVar1,param_5,*(int *)((longlong)param_1 + 0x1c),
                          '\0');
            bVar3 = FUN_14006a05c(local_98);
            if (((bVar3 != 0) || (bVar3 = FUN_14006a05c(local_b8), bVar3 != 0)) ||
               (uVar8 = FUN_14006a064(lVar1 + 0x138,local_98,local_b8), (char)uVar8 != '\0')) {
              FUN_140069cf9((longlong)param_1,local_98,local_b8);
              *pbVar12 = *pbVar12 & ~(byte)uVar11;
            }
          }
          uVar11 = uVar11 >> 1;
          bVar13 = (~(uint)uVar10 & 7) == 0;
          if (bVar13) {
            uVar11 = 0x80;
          }
          pbVar12 = pbVar12 + bVar13;
          uVar10 = uVar10 + 1;
        } while (uVar7 != uVar10);
        if (param_6 != '\0') goto LAB_140068ffb;
        uVar10 = 0;
        uVar11 = 0x80;
        do {
          if ((uVar11 & *pbVar6) != 0) {
            FUN_140069f20(local_98,param_2,uVar10,lVar1,param_5,*(int *)((longlong)param_1 + 0x1c),
                          '\x01');
            FUN_140069f20(local_b8,param_2,uVar10,lVar1,param_5,*(int *)((longlong)param_1 + 0x1c),
                          '\0');
            FUN_140069cf9((longlong)param_1,local_98,local_b8);
          }
          uVar11 = uVar11 >> 1;
          bVar13 = (~(uint)uVar10 & 7) == 0;
          if (bVar13) {
            uVar11 = 0x80;
          }
          pbVar6 = pbVar6 + bVar13;
          uVar10 = uVar10 + 1;
        } while (uVar7 != uVar10);
LAB_140069056:
        FUN_14006a1b1((longlong)param_1);
        uVar11 = *(uint *)(param_1 + 4);
        if (uVar11 != 0) {
          pbVar6 = (byte *)(param_1 + 5);
          uVar7 = 0;
          do {
            bVar3 = FUN_14006a414(pbVar6);
            if (bVar3 == 0) {
              puVar9 = (undefined1 *)FUN_1400684c4(param_2,*(ulonglong *)(pbVar6 + 8));
              bVar13 = FUN_14006a41c(pbVar6);
              *(undefined4 *)(puVar9 + (ulonglong)bVar13 * 4 + 0xc) = *(undefined4 *)(pbVar6 + 0x14)
              ;
              *puVar9 = 1;
              uVar11 = *(uint *)(param_1 + 4);
            }
            uVar7 = uVar7 + 1;
            pbVar6 = pbVar6 + 0x20;
          } while (uVar7 < uVar11);
        }
      }
      *(undefined1 *)(param_1 + 3) = 1;
      if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStackY_138)) {
        FUN_14006a423((longlong)param_4);
        return;
      }
      goto LAB_140069124;
    }
  }
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStackY_138)) {
    return;
  }
LAB_140069124:
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStackY_138);
}

