/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180233f04 */

undefined8 FUN_180233f04(undefined8 *param_1,uint *param_2,int param_3,int param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar11;
  longlong lVar12;
  ulonglong uVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  undefined1 auStack_a8 [36];
  uint local_84;
  ulonglong local_80;
  ulonglong local_78;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  ulonglong uVar10;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_a8;
  if (param_1 == (undefined8 *)0x0) {
    uVar4 = 0x21;
  }
  else {
    uVar4 = 6;
    if ((param_2 != (uint *)0x0) && (*(longlong *)(param_2 + 4) != 0)) {
      uVar8 = (int)(param_3 + 0x20U) >> 6;
      uVar9 = (int)(param_4 + 0x20U) >> 6;
      uVar10 = (ulonglong)uVar9;
      iVar5 = (int)(param_3 + 0x20U | param_4 + 0x20U) >> 6;
      if (iVar5 != 0) {
        if (iVar5 < 0) goto switchD_180233fa6_caseD_7;
        uVar4 = 0;
        switch(*(undefined1 *)((longlong)param_2 + 0x1a)) {
        case 1:
          if (7 < uVar8) {
            uVar8 = 8;
          }
          break;
        case 3:
        case 4:
          FUN_180233d68(&local_70);
          uVar4 = FUN_18023418f(param_1,param_2,&local_70,1);
          if ((int)uVar4 != 0) goto switchD_180233fa6_caseD_7;
          FUN_1802345b2(param_1,param_2);
          *param_2 = local_70;
          param_2[1] = uStack_6c;
          param_2[2] = uStack_68;
          param_2[3] = uStack_64;
          param_2[4] = local_60;
          param_2[5] = uStack_5c;
          param_2[6] = uStack_58;
          param_2[7] = uStack_54;
          *(undefined8 *)(param_2 + 8) = local_50;
          break;
        case 5:
          uVar8 = uVar8 * 3;
          break;
        case 6:
          uVar10 = (ulonglong)(uVar9 * 3);
          break;
        case 7:
          goto switchD_180233fa6_caseD_7;
        }
        iVar5 = (int)uVar10;
        uVar4 = FUN_1802345f8(*param_1,param_2,uVar8,uVar10);
        if ((int)uVar4 != 0) goto switchD_180233fa6_caseD_7;
        uVar9 = param_2[2];
        if ((int)uVar9 < 1) {
          uVar9 = -uVar9;
          uVar3 = *param_2;
          lVar12 = (ulonglong)((uVar3 - 1) * uVar9) + *(longlong *)(param_2 + 4);
        }
        else {
          lVar12 = (ulonglong)(uVar9 * iVar5) + *(longlong *)(param_2 + 4);
          uVar3 = *param_2;
        }
        uVar16 = 0;
        if (uVar3 != 0) {
          local_84 = uVar9 - 2;
          uVar7 = 0;
          do {
            local_78 = uVar7;
            uVar7 = (ulonglong)uVar9;
            uVar3 = local_84;
            if (uVar9 != 0) {
              do {
                uVar13 = uVar7 - 1;
                if (uVar8 != 0) {
                  bVar2 = *(byte *)(lVar12 + -1 + uVar7);
                  uVar15 = (uint)bVar2;
                  iVar6 = 1;
                  bVar11 = 7;
                  uVar16 = uVar3;
                  do {
                    if (*(char *)((longlong)param_2 + 0x1a) == '\x01') {
                      bVar14 = (byte)uVar15 | bVar2 >> ((byte)iVar6 & 0x1f);
                      uVar15 = (uint)bVar14;
                      *(byte *)(lVar12 + -1 + uVar7) = bVar14;
                      if (uVar7 != 1) {
                        bVar14 = bVar14 | *(char *)(lVar12 + -2 + uVar7) << (bVar11 & 0x1f);
                        uVar15 = (uint)bVar14;
                        *(byte *)(lVar12 + -1 + uVar7) = bVar14;
                      }
                    }
                    else {
                      if ((int)uVar16 < 0) break;
                      uVar15 = (uint)*(byte *)(lVar12 + (ulonglong)uVar16) + (uVar15 & 0xff);
                      if ((ushort)param_2[6] <= uVar15) {
                        *(char *)(lVar12 + uVar13) = (char)(ushort)param_2[6] + -1;
                        break;
                      }
                      *(char *)(lVar12 + uVar13) = (char)uVar15;
                      if ((uVar15 & 0xff) == (ushort)param_2[6] - 1) break;
                    }
                    if ((int)uVar8 <= iVar6) break;
                    iVar6 = iVar6 + 1;
                    uVar16 = uVar16 - 1;
                    bVar11 = bVar11 - 1;
                  } while( true );
                }
                uVar3 = uVar3 - 1;
                bVar17 = 1 < (longlong)uVar7;
                uVar7 = uVar13;
              } while (bVar17);
            }
            if (iVar5 != 0) {
              iVar6 = 1;
              do {
                if (uVar9 != 0) {
                  uVar3 = param_2[2];
                  uVar7 = 0;
                  do {
                    pbVar1 = (byte *)((lVar12 - (int)(uVar3 * iVar6)) + uVar7);
                    *pbVar1 = *pbVar1 | *(byte *)(lVar12 + uVar7);
                    uVar7 = uVar7 + 1;
                  } while (uVar9 != uVar7);
                }
                bVar17 = iVar6 != iVar5;
                iVar6 = iVar6 + 1;
              } while (bVar17);
            }
            lVar12 = lVar12 + (int)param_2[2];
            uVar3 = (int)local_78 + 1;
            uVar16 = *param_2;
            uVar7 = (ulonglong)uVar3;
            local_80 = uVar10;
          } while (uVar3 < uVar16);
        }
        param_2[1] = param_2[1] + uVar8;
        *param_2 = uVar16 + iVar5;
      }
      uVar4 = 0;
    }
  }
switchD_180233fa6_caseD_7:
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_a8)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_a8);
}

