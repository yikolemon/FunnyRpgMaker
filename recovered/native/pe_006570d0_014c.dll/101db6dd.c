/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101db6dd */

int __fastcall FUN_101db6dd(undefined4 *param_1,int param_2)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  short *psVar4;
  longlong lVar5;
  int *piVar6;
  short *psVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  short *psVar13;
  int *piVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  short *local_50;
  uint local_4c;
  short *local_48;
  int local_44;
  short *local_40;
  short *local_3c;
  short *local_38;
  short *local_34;
  short *local_30;
  byte *local_2c;
  byte *local_28;
  int local_24;
  int *local_20;
  undefined4 local_1c;
  short *local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_50;
  piVar14 = param_1 + param_2 * 0x151 + 0xd;
  iVar10 = param_1[0x2b1];
  psVar7 = (short *)param_1[param_2 * 0x151 + 0xf];
  if (psVar7 == (short *)0x0) {
    local_38 = (short *)0x0;
  }
  else {
    local_38 = psVar7 + *piVar14 * 0x16;
  }
  local_1c = *param_1;
  param_1[param_2 * 0x151 + 0x10] = 0;
  local_24 = param_1[(uint)(param_2 != 0) * 2 + 1];
  local_4c = *(uint *)(param_2 * 0x1c4 + iVar10 + 0xfc);
  iVar10 = (int)((longlong)(int)local_4c * (longlong)local_24 >> 0x3f);
  lVar5 = (longlong)(int)local_4c * (longlong)local_24 + CONCAT44(iVar10,iVar10) + 0x8000;
  if (0x10 < (int)((int)((ulonglong)lVar5 >> 0x20) << 0x10 | (uint)lVar5 >> 0x10)) {
    local_4c = FUN_101c2523(0x10,local_24);
  }
  piVar6 = piVar14;
  if (psVar7 < local_38) {
    do {
      local_20 = piVar6;
      psVar4 = (short *)piVar14[3];
      if (psVar4 == (short *)0x0) {
LAB_101db886:
        iVar10 = FUN_101dbaba((int)*(char *)((int)psVar7 + 1),0,local_1c,&local_18);
        if (iVar10 != 0) goto LAB_101dba97;
        local_18[8] = 0;
        local_18[9] = 0;
        local_18[10] = 0;
        local_18[0xb] = 0;
        local_18[0xc] = 0;
        local_18[0xd] = 0;
        local_18[0xe] = 0;
        local_18[0xf] = 0;
        local_18[0] = 0;
        local_18[1] = 0;
        local_18[2] = 0;
        local_18[3] = 0;
        local_18[4] = 0;
        local_18[5] = 0;
        local_18[6] = 0;
        local_18[7] = 0;
        local_18[0x10] = 0;
        local_18[0x11] = 0;
        *(short **)(local_18 + 0x12) = psVar7;
        *(short **)(local_18 + 0x14) = psVar7;
        *(undefined1 *)((int)local_18 + 0xd) = *(undefined1 *)((int)psVar7 + 1);
        lVar5 = (longlong)(int)psVar7[1] * (longlong)local_24;
        iVar10 = (int)(lVar5 >> 0x3f);
        lVar5 = lVar5 + CONCAT44(iVar10,iVar10) + 0x8000;
        uVar8 = (int)((ulonglong)lVar5 >> 0x20) << 0x10 | (uint)lVar5 >> 0x10;
        *local_18 = psVar7[1];
        *(uint *)(local_18 + 2) = uVar8;
        *(uint *)(local_18 + 4) = uVar8;
        *(short **)(psVar7 + 8) = psVar7;
      }
      else {
        local_34 = (short *)piVar14[5];
        local_50 = (short *)CONCAT31(local_50._1_3_,*(char *)((int)psVar7 + 1));
        local_3c = (short *)0x0;
        pbVar16 = (byte *)0xffff;
        psVar13 = (short *)0x0;
        do {
          if (*(char *)((int)local_34 + (int)psVar13 * 0x2c + 0xd) == *(char *)((int)psVar7 + 1)) {
            local_48 = local_34 + (int)psVar13 * 0x16;
            local_28 = (byte *)-((int)psVar7[1] - (int)*local_48);
            if ((int)local_28 < 0) {
              local_28 = (byte *)((int)psVar7[1] - (int)*local_48);
            }
            if ((int)local_28 < (int)pbVar16 && (int)local_28 < (int)local_4c) {
              local_44 = *(int *)(psVar7 + 10);
              if (local_44 != 0) {
                iVar12 = 0;
                iVar10 = *(int *)(local_48 + 0x12);
                do {
                  if (*(int *)(iVar10 + 0x14) != 0) {
                    sVar2 = *(short *)(local_44 + 2);
                    sVar3 = *(short *)(*(int *)(iVar10 + 0x14) + 2);
                    iVar12 = (int)sVar3 - (int)sVar2;
                    if (sVar3 < sVar2) {
                      iVar12 = (int)sVar2 - (int)sVar3;
                    }
                    if ((int)local_4c <= iVar12) break;
                  }
                  iVar10 = *(int *)(iVar10 + 0x10);
                } while (iVar10 != *(int *)(local_48 + 0x12));
                local_2c = pbVar16;
                if ((int)local_4c <= iVar12) goto LAB_101db860;
              }
              pbVar16 = local_28;
              local_3c = local_48;
            }
          }
LAB_101db860:
          psVar13 = (short *)((int)psVar13 + 1);
        } while (psVar13 != psVar4);
        piVar14 = local_20;
        local_40 = psVar7;
        local_30 = psVar4;
        if (local_3c == (short *)0x0) goto LAB_101db886;
        *(undefined4 *)(psVar7 + 8) = *(undefined4 *)(local_3c + 0x12);
        *(short **)(*(int *)(local_3c + 0x14) + 0x10) = psVar7;
        *(short **)(local_3c + 0x14) = psVar7;
      }
      psVar7 = psVar7 + 0x16;
      piVar6 = local_20;
    } while (psVar7 < local_38);
  }
  local_50 = (short *)piVar14[5];
  iVar10 = 0;
  if ((local_50 != (short *)0x0) && (piVar14[3] != 0)) {
    local_34 = local_50 + piVar14[3] * 0x16;
    psVar7 = local_50;
    do {
      iVar10 = *(int *)(psVar7 + 0x12);
      if (iVar10 != 0) {
        do {
          *(short **)(iVar10 + 0xc) = psVar7;
          iVar10 = *(int *)(iVar10 + 0x10);
        } while (iVar10 != *(int *)(psVar7 + 0x12));
      }
      psVar7 = psVar7 + 0x16;
    } while (psVar7 < local_34);
    do {
      pbVar16 = *(byte **)(local_50 + 0x12);
      bVar9 = false;
      if (pbVar16 != (byte *)0x0) {
        local_4c = 0;
        local_40 = local_50 + 0xc;
        local_30 = local_50 + 0xe;
        uVar8 = 0;
        pbVar17 = pbVar16;
        do {
          bVar1 = *pbVar16;
          iVar10 = *(int *)(pbVar16 + 0x18);
          if (iVar10 == 0) {
            local_44 = *(int *)(pbVar16 + 0x14);
            if (local_44 != 0) {
LAB_101db9b4:
              local_48 = (short *)0x0;
              psVar7 = local_40;
              goto LAB_101db9c0;
            }
          }
          else {
            psVar7 = *(short **)(iVar10 + 0xc);
            local_44 = *(int *)(pbVar16 + 0x14);
            if ((local_44 != 0) || (psVar7 != local_50)) {
              if (psVar7 == local_50) goto LAB_101db9b4;
              local_48 = (short *)CONCAT31((int3)((uint)psVar7 >> 8),1);
              psVar7 = local_30;
              local_44 = iVar10;
LAB_101db9c0:
              pbVar15 = *(byte **)psVar7;
              if (pbVar15 == (byte *)0x0) {
LAB_101dba0e:
                pbVar15 = *(byte **)(local_44 + 0xc);
              }
              else {
                iVar12 = (int)*local_50;
                iVar10 = (int)*(short *)pbVar15;
                uVar11 = iVar10 - iVar12;
                if (iVar10 < iVar12) {
                  uVar11 = iVar12 - iVar10;
                }
                sVar2 = *(short *)(pbVar16 + 2);
                sVar3 = *(short *)(local_44 + 2);
                local_3c = (short *)CONCAT22(local_3c._2_2_,sVar3);
                iVar10 = (int)sVar3 - (int)sVar2;
                if (sVar3 < sVar2) {
                  iVar10 = (int)sVar2 - (int)sVar3;
                }
                local_2c = pbVar15;
                local_28 = pbVar17;
                if (iVar10 < (int)(uVar11 & 0xffff)) goto LAB_101dba0e;
              }
              if ((char)local_48 == '\0') {
                *(byte **)local_40 = pbVar15;
              }
              else {
                *(byte **)(local_50 + 0xe) = pbVar15;
                pbVar15[0xc] = pbVar15[0xc] | 2;
                pbVar17 = *(byte **)(local_50 + 0x12);
              }
            }
          }
          local_4c = local_4c + (bVar1 & 1);
          uVar8 = uVar8 + (byte)((byte)(bVar1 & 1) ^ 1);
          pbVar16 = *(byte **)(pbVar16 + 0x10);
        } while (pbVar16 != pbVar17);
        bVar9 = local_4c != 0 && uVar8 <= local_4c;
      }
      *(bool *)(local_50 + 6) = bVar9;
      if ((*(int *)(local_50 + 0xe) != 0) && (*(int *)(local_50 + 0xc) != 0)) {
        local_50[0xe] = 0;
        local_50[0xf] = 0;
      }
      local_50 = local_50 + 0x16;
    } while (local_50 < local_34);
    iVar10 = 0;
  }
LAB_101dba97:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_50)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar10;
}

