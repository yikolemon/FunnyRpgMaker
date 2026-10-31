/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10222f96 */

int FUN_10222f96(int param_1,uint *param_2,int param_3,int param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  uint local_50;
  uint local_4c;
  int local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  undefined8 local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_50;
  if (param_1 == 0) {
    iVar11 = 0x21;
  }
  else {
    iVar11 = 6;
    if ((param_2 != (uint *)0x0) && (param_2[3] != 0)) {
      uVar4 = (int)(param_3 + 0x20U) >> 6;
      iVar10 = (int)(param_4 + 0x20U) >> 6;
      iVar5 = (int)(param_3 + 0x20U | param_4 + 0x20U) >> 6;
      if (iVar5 != 0) {
        if (iVar5 < 0) goto switchD_10223012_caseD_7;
        iVar11 = 0;
        switch(*(undefined1 *)((int)param_2 + 0x12)) {
        case 1:
          if (7 < uVar4) {
            uVar4 = 8;
          }
          break;
        case 3:
        case 4:
          FUN_10222e28(&local_2c);
          iVar11 = FUN_10223228(param_1,param_2,&local_2c,1);
          if (iVar11 != 0) goto switchD_10223012_caseD_7;
          FUN_102235e6(param_1,param_2);
          *param_2 = local_2c;
          param_2[1] = uStack_28;
          param_2[2] = uStack_24;
          param_2[3] = uStack_20;
          *(undefined8 *)(param_2 + 4) = local_1c;
          break;
        case 5:
          uVar4 = uVar4 * 3;
          break;
        case 6:
          iVar10 = iVar10 * 3;
          break;
        case 7:
          goto switchD_10223012_caseD_7;
        }
        local_50 = uVar4;
        iVar11 = FUN_10223624(uVar4,iVar10);
        if (iVar11 != 0) goto switchD_10223012_caseD_7;
        uVar4 = param_2[2];
        if ((int)uVar4 < 1) {
          uVar4 = -uVar4;
          uVar6 = *param_2;
          iVar11 = (uVar6 - 1) * uVar4 + param_2[3];
        }
        else {
          iVar11 = uVar4 * iVar10 + param_2[3];
          uVar6 = *param_2;
        }
        uVar7 = 0;
        if (uVar6 != 0) {
          local_3c = uVar4 - 2;
          uVar6 = 0;
          do {
            local_34 = uVar6;
            local_48 = local_3c;
            local_44 = uVar4;
            if (uVar4 != 0) {
              do {
                local_4c = local_44;
                uVar6 = local_44 - 1;
                if (local_50 != 0) {
                  bVar2 = *(byte *)(iVar11 + -1 + local_44);
                  uVar7 = (uint)bVar2;
                  local_30 = (uint)bVar2;
                  bVar9 = 7;
                  iVar8 = 1;
                  iVar5 = local_48;
                  do {
                    if (*(char *)((int)param_2 + 0x12) == '\x01') {
                      bVar3 = (byte)uVar7 | bVar2 >> ((byte)iVar8 & 0x1f);
                      *(byte *)(iVar11 + -1 + local_44) = bVar3;
                      if (local_44 != 1) {
                        bVar3 = bVar3 | *(char *)(iVar11 + -2 + local_44) << (bVar9 & 0x1f);
                        *(byte *)(iVar11 + -1 + local_44) = bVar3;
                      }
                      uVar7 = (uint)bVar3;
                    }
                    else {
                      if (iVar5 < 0) break;
                      uVar7 = (uint)*(byte *)(iVar11 + iVar5) + (uVar7 & 0xff);
                      if ((ushort)param_2[4] <= uVar7) {
                        *(char *)(iVar11 + (local_44 - 1)) = (char)(ushort)param_2[4] + -1;
                        break;
                      }
                      *(char *)(iVar11 + (local_44 - 1)) = (char)uVar7;
                      if ((uVar7 & 0xff) == (ushort)param_2[4] - 1) break;
                    }
                    if ((int)local_50 <= iVar8) break;
                    iVar8 = iVar8 + 1;
                    iVar5 = iVar5 + -1;
                    bVar9 = bVar9 - 1;
                  } while( true );
                }
                local_48 = local_48 + -1;
                bVar12 = 1 < (int)local_44;
                local_44 = uVar6;
              } while (bVar12);
            }
            if (iVar10 != 0) {
              iVar8 = -1;
              iVar5 = 1;
              do {
                if (uVar4 != 0) {
                  uVar6 = param_2[2];
                  uVar7 = 0;
                  do {
                    pbVar1 = (byte *)(uVar6 * iVar8 + iVar11 + uVar7);
                    *pbVar1 = *pbVar1 | *(byte *)(iVar11 + uVar7);
                    uVar7 = uVar7 + 1;
                  } while (uVar4 != uVar7);
                }
                iVar8 = iVar8 + -1;
                bVar12 = iVar5 != iVar10;
                iVar5 = iVar5 + 1;
              } while (bVar12);
            }
            iVar11 = iVar11 + param_2[2];
            uVar7 = *param_2;
            uVar6 = local_34 + 1;
            local_40 = uVar4;
            local_38 = iVar10;
          } while (local_34 + 1 < uVar7);
        }
        param_2[1] = param_2[1] + local_50;
        *param_2 = uVar7 + iVar10;
      }
      iVar11 = 0;
    }
  }
switchD_10223012_caseD_7:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_50)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar11;
}

