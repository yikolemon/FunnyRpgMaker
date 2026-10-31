/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101defae */

int __fastcall FUN_101defae(undefined4 *param_1,int param_2)

{
  byte bVar1;
  undefined *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  int *piVar16;
  byte *pbVar17;
  uint uVar18;
  short *psVar19;
  uint local_40;
  byte *local_3c;
  int *local_38;
  int local_34;
  uint local_30;
  int *local_2c;
  int *local_28;
  short *local_24;
  short *local_20;
  uint local_1c;
  short *local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_40;
  local_2c = param_1 + param_2 * 0x151 + 0xd;
  piVar11 = (int *)param_1[0x2b1];
  local_3c = (byte *)(param_2 * 0x204);
  uVar14 = param_1[param_2 * 0x151 + 0xf];
  if (uVar14 == 0) {
    local_30 = 0;
  }
  else {
    local_30 = *local_2c * 0x2c + uVar14;
  }
  local_20 = (short *)*param_1;
  puVar2 = (&PTR_DAT_1030af74)[*(int *)(*piVar11 + 8)];
  param_1[param_2 * 0x151 + 0x10] = 0;
  psVar19 = (short *)param_1[(uint)(param_2 != 0) * 2 + 1];
  if (param_2 == 0) {
    local_40 = 0;
    local_34 = FUN_101c2523(0x40,param_1[3]);
  }
  else {
    local_40 = CONCAT31((int3)((uint)puVar2 >> 8),puVar2[0xc]);
    local_34 = 0;
  }
  local_38 = (int *)FUN_101c2523(0x20,psVar19);
  lVar3 = (longlong)(int)psVar19 * (longlong)piVar11[param_2 * 0x81 + 0x3f];
  iVar8 = (int)(lVar3 >> 0x3f);
  lVar3 = lVar3 + CONCAT44(iVar8,iVar8) + 0x8000;
  uVar9 = (int)((ulonglong)lVar3 >> 0x20) << 0x10 | (uint)lVar3 >> 0x10;
  uVar18 = 0x10;
  if ((int)uVar9 < 0x10) {
    uVar18 = uVar9;
  }
  local_24 = psVar19;
  local_3c = (byte *)FUN_101c2523(uVar18,psVar19);
  piVar11 = local_2c;
  if (uVar14 < local_30) {
    local_28 = (int *)(local_34 * 3);
    local_1c = local_40 & 0xff;
    iVar8 = local_34;
    piVar16 = local_38;
    uVar18 = uVar14;
    do {
      if ((iVar8 <= *(short *)(uVar18 + 10)) && ((int)*(short *)(uVar18 + 4) <= (int)piVar16)) {
        local_40 = (uint)*(char *)(uVar18 + 1);
        if ((local_40 != 4) &&
           ((*(int *)(uVar18 + 0x18) == 0 || ((int)local_28 <= *(short *)(uVar18 + 10) * 2)))) {
          iVar8 = piVar11[3];
          if (iVar8 != 0) {
            iVar12 = (int)*(short *)(uVar18 + 2);
            puVar10 = (uint *)(piVar11[5] + 0x28);
            do {
              iVar4 = (int)(short)puVar10[-10];
              iVar5 = iVar4 - iVar12;
              if (iVar4 < iVar12) {
                iVar5 = iVar12 - iVar4;
              }
              if ((iVar5 < (int)local_3c) &&
                 (*(char *)((int)puVar10 + -0x1b) == *(char *)(uVar18 + 1))) {
                *(uint *)(uVar18 + 0x10) = puVar10[-1];
                *(uint *)(*puVar10 + 0x10) = uVar18;
                *puVar10 = uVar18;
                iVar8 = local_34;
                piVar11 = local_2c;
                piVar16 = local_38;
                goto LAB_101df1c2;
              }
              puVar10 = puVar10 + 0xb;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          iVar8 = FUN_101dbaba(local_40,local_1c,local_20,&local_18);
          if (iVar8 != 0) goto LAB_101df390;
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
          *(uint *)(local_18 + 0x12) = uVar18;
          *(uint *)(local_18 + 0x14) = uVar18;
          *(undefined1 *)((int)local_18 + 0xd) = *(undefined1 *)(uVar18 + 1);
          lVar3 = (longlong)(int)*(short *)(uVar18 + 2) * (longlong)(int)local_24;
          iVar8 = (int)(lVar3 >> 0x3f);
          lVar3 = lVar3 + CONCAT44(iVar8,iVar8) + 0x8000;
          uVar9 = (int)((ulonglong)lVar3 >> 0x20) << 0x10 | (uint)lVar3 >> 0x10;
          *local_18 = *(short *)(uVar18 + 2);
          *(uint *)(local_18 + 2) = uVar9;
          *(uint *)(local_18 + 4) = uVar9;
          *(uint *)(uVar18 + 0x10) = uVar18;
          iVar8 = local_34;
          piVar11 = local_2c;
          piVar16 = local_38;
        }
      }
LAB_101df1c2:
      uVar18 = uVar18 + 0x2c;
    } while (uVar18 < local_30);
    do {
      if ((*(char *)(uVar14 + 1) == '\x04') && (iVar8 = piVar11[3], iVar8 != 0)) {
        iVar12 = (int)*(short *)(uVar14 + 2);
        puVar10 = (uint *)(piVar11[5] + 0x28);
        do {
          iVar4 = (int)(short)puVar10[-10];
          iVar5 = iVar4 - iVar12;
          if (iVar4 < iVar12) {
            iVar5 = iVar12 - iVar4;
          }
          if (iVar5 < (int)local_3c) {
            *(uint *)(uVar14 + 0x10) = puVar10[-1];
            *(uint *)(*puVar10 + 0x10) = uVar14;
            *puVar10 = uVar14;
            break;
          }
          puVar10 = puVar10 + 0xb;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      uVar14 = uVar14 + 0x2c;
    } while (uVar14 < local_30);
  }
  psVar19 = (short *)piVar11[5];
  iVar8 = 0;
  if ((psVar19 != (short *)0x0) && (piVar11[3] != 0)) {
    local_24 = psVar19 + piVar11[3] * 0x16;
    psVar6 = psVar19;
    do {
      iVar8 = *(int *)(psVar6 + 0x12);
      if (iVar8 != 0) {
        do {
          *(short **)(iVar8 + 0xc) = psVar6;
          iVar8 = *(int *)(iVar8 + 0x10);
        } while (iVar8 != *(int *)(psVar6 + 0x12));
      }
      psVar6 = psVar6 + 0x16;
    } while (psVar6 < local_24);
    do {
      local_20 = psVar19;
      pbVar15 = *(byte **)(local_20 + 0x12);
      local_38 = (int *)(local_20 + 0xc);
      local_28 = (int *)(local_20 + 0xe);
      uVar18 = 0;
      uVar14 = 0;
      pbVar17 = pbVar15;
      do {
        local_3c = pbVar17;
        if ((*(int *)(pbVar15 + 0x18) == 0) ||
           (psVar19 = *(short **)(*(int *)(pbVar15 + 0x18) + 0xc), psVar19 == (short *)0x0)) {
          piVar11 = (int *)0x0;
        }
        else {
          piVar11 = (int *)CONCAT31((int3)((uint)psVar19 >> 8),psVar19 != local_20);
        }
        bVar1 = *pbVar15;
        cVar7 = (char)piVar11;
        pbVar17 = local_3c;
        if (*(int *)(pbVar15 + 0x14) == 0) {
          if (cVar7 != '\0') goto LAB_101df2af;
        }
        else if ((cVar7 != '\0') || (*(int *)(*(int *)(pbVar15 + 0x14) + 0xc) != 0)) {
LAB_101df2af:
          puVar10 = (uint *)(pbVar15 + 0x18);
          piVar16 = local_28;
          if (cVar7 == '\0') {
            puVar10 = (uint *)(pbVar15 + 0x14);
            piVar16 = local_38;
          }
          local_30 = *puVar10;
          psVar19 = (short *)*piVar16;
          if (psVar19 == (short *)0x0) {
LAB_101df318:
            psVar19 = *(short **)(local_30 + 0xc);
          }
          else {
            iVar8 = (int)*local_20;
            iVar12 = (int)*psVar19;
            uVar9 = iVar12 - iVar8;
            if (iVar12 < iVar8) {
              uVar9 = iVar8 - iVar12;
            }
            local_34 = (int)*(short *)(pbVar15 + 2);
            iVar8 = (int)*(short *)(local_30 + 2);
            uVar13 = iVar8 - local_34;
            if (iVar8 < local_34) {
              uVar13 = local_34 - iVar8;
            }
            if ((uVar13 & 0xffff) < (uVar9 & 0xffff)) goto LAB_101df318;
          }
          local_40 = uVar18;
          local_2c = piVar11;
          if (cVar7 == '\0') {
            *local_38 = (int)psVar19;
          }
          else {
            *(short **)(local_20 + 0xe) = psVar19;
            *(byte *)(psVar19 + 6) = *(byte *)(psVar19 + 6) | 2;
            pbVar17 = *(byte **)(local_20 + 0x12);
          }
        }
        uVar18 = uVar18 + (bVar1 & 1);
        uVar14 = uVar14 + (byte)((byte)(bVar1 & 1) ^ 1);
        pbVar15 = *(byte **)(pbVar15 + 0x10);
      } while (pbVar15 != pbVar17);
      *(bool *)(local_20 + 6) = uVar14 <= uVar18 && uVar18 != 0;
      if ((*(int *)(local_20 + 0xe) != 0) && (*local_38 != 0)) {
        *local_28 = 0;
      }
      psVar19 = local_20 + 0x16;
    } while (local_20 + 0x16 < local_24);
    iVar8 = 0;
  }
LAB_101df390:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_40)) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

