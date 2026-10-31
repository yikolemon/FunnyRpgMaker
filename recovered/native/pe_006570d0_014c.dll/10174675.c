/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10174675 */

int __fastcall FUN_10174675(int param_1,uint param_2,int param_3,int *param_4,int param_5)

{
  char cVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  char *pcVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  char *local_5c;
  uint local_58;
  uint local_54;
  uint uStack_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined1 auStack_36 [4];
  char local_32 [30];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_5c;
  uVar4 = 0;
  pbVar13 = (byte *)(local_32 + 2);
  iVar11 = 0;
  local_54 = param_2;
  do {
    if (iVar11 == 10) goto LAB_10174adb;
    pbVar5 = *(byte **)(param_1 + 0xac);
    pbVar6 = *(byte **)(param_1 + 0xb0);
    local_58 = uVar4;
    if (pbVar5 < pbVar6) {
      *(byte **)(param_1 + 0xac) = pbVar5 + 1;
      local_5c = (char *)CONCAT31((int3)((uint)pbVar5 >> 8),*pbVar5);
      pbVar5 = pbVar5 + 1;
    }
    else if (*(int *)(param_1 + 0x20) == 0) {
      local_5c = (char *)0x0;
    }
    else {
      FUN_10170e8c();
      puVar2 = *(undefined1 **)(param_1 + 0xac);
      pbVar6 = *(byte **)(param_1 + 0xb0);
      pbVar5 = puVar2 + 1;
      *(byte **)(param_1 + 0xac) = pbVar5;
      local_5c = (char *)CONCAT31((int3)((uint)puVar2 >> 8),*puVar2);
    }
    if (pbVar5 < pbVar6) {
      *(byte **)(param_1 + 0xac) = pbVar5 + 1;
      bVar9 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    }
    else if (*(int *)(param_1 + 0x20) == 0) {
      bVar9 = 0;
    }
    else {
      FUN_10170e8c();
      pbVar3 = *(byte **)(param_1 + 0xac);
      pbVar6 = *(byte **)(param_1 + 0xb0);
      pbVar5 = pbVar3 + 1;
      *(byte **)(param_1 + 0xac) = pbVar5;
      bVar9 = *pbVar3;
    }
    pbVar13[-2] = bVar9;
    local_48 = iVar11;
    if (pbVar5 < pbVar6) {
      *(byte **)(param_1 + 0xac) = pbVar5 + 1;
      bVar10 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    }
    else if (*(int *)(param_1 + 0x20) == 0) {
      bVar10 = 0;
    }
    else {
      FUN_10170e8c();
      pbVar3 = *(byte **)(param_1 + 0xac);
      pbVar6 = *(byte **)(param_1 + 0xb0);
      pbVar5 = pbVar3 + 1;
      *(byte **)(param_1 + 0xac) = pbVar5;
      bVar10 = *pbVar3;
    }
    pbVar13[-1] = bVar10;
    if (pbVar5 < pbVar6) {
LAB_10174791:
      *(byte **)(param_1 + 0xac) = pbVar5 + 1;
      bVar10 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    }
    else {
      if (*(int *)(param_1 + 0x20) != 0) {
        FUN_10170e8c();
        pbVar5 = *(byte **)(param_1 + 0xac);
        goto LAB_10174791;
      }
      bVar10 = 0;
    }
    *pbVar13 = bVar10;
    if (*(int *)(param_1 + 0x10) == 0) {
LAB_101747c7:
      if (*(byte **)(param_1 + 0xb0) <= pbVar5) goto LAB_10174adb;
    }
    else {
      iVar11 = (**(code **)(param_1 + 0x18))(*(undefined4 *)(param_1 + 0x1c));
      if (iVar11 != 0) {
        if (*(int *)(param_1 + 0x20) != 0) {
          pbVar5 = *(byte **)(param_1 + 0xac);
          goto LAB_101747c7;
        }
        goto LAB_10174adb;
      }
    }
    if (bVar9 != 8) goto LAB_10174adb;
    uVar4 = local_58 | bVar10;
    pbVar13 = pbVar13 + 3;
    iVar11 = local_48 + 1;
  } while ((char)local_5c != '\0');
  *param_4 = 4 - (uint)((uVar4 & 0x10) == 0);
  if (param_3 != 0) {
    iStack_44 = local_54 * 4;
    iVar7 = 0;
    local_48 = iVar11;
    do {
      iStack_4c = iStack_44 * iVar7 + param_5;
      iVar11 = 0;
      iStack_40 = iVar7;
      do {
        pcVar8 = local_32 + iVar11 * 3;
        cVar1 = local_32[iVar11 * 3 + 1];
        iStack_3c = iVar11;
        uVar4 = local_54;
        iVar11 = iStack_4c;
        if (cVar1 == '\0') {
          for (; uVar4 != 0; uVar4 = uVar4 - 1) {
            iVar7 = FUN_10174b05(iVar11);
            if (iVar7 == 0) goto LAB_10174ae0;
            iVar11 = iVar11 + 4;
          }
        }
        else {
          local_5c = pcVar8;
          if (cVar1 == '\x01') {
            if (local_54 != 0) {
              do {
                pbVar13 = *(byte **)(param_1 + 0xac);
                if (pbVar13 < *(byte **)(param_1 + 0xb0)) {
LAB_101749d8:
                  *(byte **)(param_1 + 0xac) = pbVar13 + 1;
                  bVar9 = *pbVar13;
                  pbVar13 = pbVar13 + 1;
                }
                else {
                  if (*(int *)(param_1 + 0x20) != 0) {
                    FUN_10170e8c();
                    pbVar13 = *(byte **)(param_1 + 0xac);
                    goto LAB_101749d8;
                  }
                  bVar9 = 0;
                }
                if (*(int *)(param_1 + 0x10) == 0) {
LAB_10174a08:
                  if (*(byte **)(param_1 + 0xb0) <= pbVar13) goto LAB_10174adb;
                }
                else {
                  iVar11 = (**(code **)(param_1 + 0x18))(*(undefined4 *)(param_1 + 0x1c));
                  if (iVar11 != 0) {
                    if (*(int *)(param_1 + 0x20) != 0) {
                      pbVar13 = *(byte **)(param_1 + 0xac);
                      goto LAB_10174a08;
                    }
                    goto LAB_10174adb;
                  }
                }
                local_58 = (uint)bVar9;
                if (uVar4 < bVar9) {
                  local_58 = uVar4;
                }
                iVar11 = FUN_10174b05(auStack_36);
                if (iVar11 == 0) goto LAB_10174ae0;
                uVar12 = local_58;
                uStack_50 = uVar4;
                if (bVar9 != 0) {
                  do {
                    FUN_10174ba1(auStack_36);
                    uVar12 = uVar12 - 1;
                  } while (uVar12 != 0);
                }
                uVar4 = uStack_50 - local_58;
              } while (uVar4 != 0 && (int)local_58 <= (int)uStack_50);
            }
          }
          else {
            if (cVar1 != '\x02') goto LAB_10174adb;
            if (local_54 != 0) {
              do {
                pbVar13 = *(byte **)(param_1 + 0xac);
                if (pbVar13 < *(byte **)(param_1 + 0xb0)) {
LAB_101748a9:
                  *(byte **)(param_1 + 0xac) = pbVar13 + 1;
                  bVar9 = *pbVar13;
                  pbVar13 = pbVar13 + 1;
                }
                else {
                  if (*(int *)(param_1 + 0x20) != 0) {
                    FUN_10170e8c();
                    pbVar13 = *(byte **)(param_1 + 0xac);
                    goto LAB_101748a9;
                  }
                  bVar9 = 0;
                }
                if (*(int *)(param_1 + 0x10) == 0) {
LAB_101748d9:
                  if (*(byte **)(param_1 + 0xb0) <= pbVar13) goto LAB_10174adb;
                }
                else {
                  iVar7 = (**(code **)(param_1 + 0x18))(*(undefined4 *)(param_1 + 0x1c));
                  if (iVar7 != 0) {
                    if (*(int *)(param_1 + 0x20) != 0) {
                      pbVar13 = *(byte **)(param_1 + 0xac);
                      goto LAB_101748d9;
                    }
                    goto LAB_10174adb;
                  }
                }
                uVar12 = (uint)bVar9;
                local_58 = uVar4;
                if ((char)bVar9 < '\0') {
                  if (uVar12 == 0x80) {
                    uVar12 = FUN_10171b39();
                  }
                  else {
                    uVar12 = uVar12 - 0x7f;
                  }
                  if (uVar4 < uVar12) goto LAB_10174adb;
                  iVar7 = FUN_10174b05(auStack_36);
                  if (iVar7 == 0) goto LAB_10174ae0;
                  uStack_50 = uVar12;
                  if (0 < (int)uVar12) {
                    do {
                      FUN_10174ba1(auStack_36);
                      iVar11 = iVar11 + 4;
                      uVar12 = uVar12 - 1;
                    } while (uVar12 != 0);
                  }
                }
                else {
                  uVar14 = uVar12 + 1;
                  uStack_50 = uVar14;
                  if (uVar4 <= uVar12) goto LAB_10174adb;
                  do {
                    iVar7 = FUN_10174b05(iVar11);
                    if (iVar7 == 0) goto LAB_10174ae0;
                    iVar11 = iVar11 + 4;
                    uVar14 = uVar14 - 1;
                  } while (uVar14 != 0);
                }
                uVar4 = local_58 - uStack_50;
              } while (uVar4 != 0 && (int)uStack_50 <= (int)local_58);
            }
          }
        }
        iVar11 = iStack_3c + 1;
      } while (local_48 != iVar11);
      iVar7 = iStack_40 + 1;
    } while (iVar7 != param_3);
  }
LAB_10174ae2:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_5c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_5;
LAB_10174adb:
  FUN_10170e07();
LAB_10174ae0:
  param_5 = 0;
  goto LAB_10174ae2;
}

