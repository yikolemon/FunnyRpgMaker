/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fb149 */

int FUN_1800fb149(byte *param_1,byte *param_2,int param_3,uint param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ushort uVar9;
  int iVar10;
  longlong lVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  int local_80;
  
  iVar10 = -1;
  if (-1 < (int)param_4 && param_1 != (byte *)0x0) {
    if (param_4 == 0) {
      if (param_3 == 1) {
        iVar10 = -(uint)(*param_1 != 0);
      }
    }
    else if (param_3 != 0) {
      pbVar1 = param_1 + param_3;
      pbVar2 = param_2 + param_4;
      pbVar21 = param_1;
      pbVar22 = param_2;
      if (param_4 < 0x40) goto LAB_1800fb716;
      pbVar12 = pbVar1 + -0xf;
      pbVar20 = param_1;
LAB_1800fb207:
      while( true ) {
        pbVar19 = pbVar20 + 1;
        bVar3 = *pbVar20;
        uVar16 = (uint)bVar3;
        uVar18 = (ulonglong)(uint)(bVar3 >> 4);
        if (bVar3 >> 4 == 0xf) {
          pbVar13 = pbVar19;
          if ((pbVar12 <= pbVar19) || (pbVar13 = pbVar20 + 2, pbVar12 < pbVar13))
          goto LAB_1800fb880;
          uVar18 = (ulonglong)*pbVar19;
          if (uVar18 == 0xff) {
            uVar18 = 0xff;
            pbVar21 = pbVar13;
            do {
              pbVar13 = pbVar21 + 1;
              if (pbVar12 < pbVar13) goto LAB_1800fb880;
              bVar4 = *pbVar21;
              uVar18 = uVar18 + bVar4;
              pbVar21 = pbVar13;
            } while ((ulonglong)bVar4 == 0xff);
            if (uVar18 == 0xffffffffffffffff) goto LAB_1800fb880;
          }
          uVar18 = uVar18 + 0xf;
          pbVar20 = pbVar13 + uVar18;
          pbVar23 = pbVar22 + uVar18;
          if ((CARRY8((ulonglong)pbVar22,uVar18)) || (CARRY8((ulonglong)pbVar13,uVar18)))
          goto LAB_1800fb880;
          pbVar19 = pbVar13;
          if (param_2 + ((ulonglong)param_4 - 0x20) < pbVar23) goto LAB_1800fb604;
          if (pbVar1 + -0x20 < pbVar20) goto LAB_1800fb604;
          lVar11 = 0;
          do {
            uVar8 = *(undefined8 *)(pbVar13 + lVar11 + 8);
            pbVar21 = pbVar22 + lVar11;
            *(undefined8 *)pbVar21 = *(undefined8 *)(pbVar13 + lVar11);
            *(undefined8 *)(pbVar21 + 8) = uVar8;
            pbVar19 = pbVar13 + lVar11 + 0x10;
            uVar5 = *(undefined4 *)(pbVar19 + 4);
            uVar6 = *(undefined4 *)(pbVar19 + 8);
            uVar7 = *(undefined4 *)(pbVar19 + 0xc);
            *(undefined4 *)(pbVar21 + 0x10) = *(undefined4 *)pbVar19;
            *(undefined4 *)(pbVar21 + 0x14) = uVar5;
            *(undefined4 *)(pbVar21 + 0x18) = uVar6;
            *(undefined4 *)(pbVar21 + 0x1c) = uVar7;
            lVar11 = lVar11 + 0x20;
          } while (pbVar21 + 0x20 < pbVar23);
        }
        else {
          if (pbVar1 + -0x11 < pbVar19) goto LAB_1800fb604;
          uVar5 = *(undefined4 *)(pbVar20 + 5);
          uVar6 = *(undefined4 *)(pbVar20 + 9);
          uVar7 = *(undefined4 *)(pbVar20 + 0xd);
          *(undefined4 *)pbVar22 = *(undefined4 *)pbVar19;
          *(undefined4 *)(pbVar22 + 4) = uVar5;
          *(undefined4 *)(pbVar22 + 8) = uVar6;
          *(undefined4 *)(pbVar22 + 0xc) = uVar7;
          pbVar20 = pbVar19 + uVar18;
          pbVar23 = pbVar22 + uVar18;
        }
        uVar9 = thunk_FUN_1800fb8b4(pbVar20);
        uVar15 = (ulonglong)uVar9;
        pbVar21 = pbVar20 + 2;
        pbVar19 = pbVar23 + -uVar15;
        uVar17 = (ulonglong)(bVar3 & 0xf);
        if (uVar17 == 0xf) break;
        pbVar22 = pbVar23 + uVar17 + 4;
        uVar17 = uVar17 + 4;
        if (pbVar2 + -0x40 <= pbVar22) goto LAB_1800fb6b5;
        pbVar20 = pbVar21;
        if ((pbVar19 < param_2) || (uVar9 < 8)) goto LAB_1800fb365;
        *(undefined8 *)pbVar23 = *(undefined8 *)pbVar19;
        *(undefined8 *)(pbVar23 + 8) = *(undefined8 *)(pbVar19 + 8);
        *(undefined2 *)(pbVar23 + 0x10) = *(undefined2 *)(pbVar19 + 0x10);
      }
      pbVar20 = pbVar20 + 3;
      pbVar13 = pbVar20;
      if (pbVar1 + -4 < pbVar20) goto LAB_1800fb880;
      uVar17 = (ulonglong)*pbVar21;
      if (uVar17 == 0xff) {
        uVar17 = 0xff;
        pbVar21 = pbVar20;
        do {
          pbVar20 = pbVar21 + 1;
          pbVar13 = pbVar20;
          if (pbVar1 + -4 < pbVar20) goto LAB_1800fb880;
          bVar3 = *pbVar21;
          uVar17 = uVar17 + bVar3;
          pbVar21 = pbVar20;
        } while ((ulonglong)bVar3 == 0xff);
        if (uVar17 == 0xffffffffffffffff) goto LAB_1800fb880;
      }
      uVar17 = uVar17 + 0x13;
      pbVar13 = pbVar20;
      if (CARRY8((ulonglong)pbVar23,uVar17)) goto LAB_1800fb880;
      pbVar21 = pbVar20;
      if (pbVar23 + uVar17 < pbVar2 + -0x40) {
LAB_1800fb365:
        pbVar13 = pbVar20;
        if (pbVar19 < param_2) goto LAB_1800fb880;
        pbVar22 = pbVar23 + uVar17;
        if (0xf < uVar9) {
          do {
            uVar8 = *(undefined8 *)(pbVar23 + -uVar15 + 8);
            *(undefined8 *)pbVar23 = *(undefined8 *)(pbVar23 + -uVar15);
            *(undefined8 *)(pbVar23 + 8) = uVar8;
            pbVar21 = pbVar23 + -uVar15 + 0x10;
            uVar5 = *(undefined4 *)(pbVar21 + 4);
            uVar6 = *(undefined4 *)(pbVar21 + 8);
            uVar7 = *(undefined4 *)(pbVar21 + 0xc);
            *(undefined4 *)(pbVar23 + 0x10) = *(undefined4 *)pbVar21;
            *(undefined4 *)(pbVar23 + 0x14) = uVar5;
            *(undefined4 *)(pbVar23 + 0x18) = uVar6;
            *(undefined4 *)(pbVar23 + 0x1c) = uVar7;
            pbVar23 = pbVar23 + 0x20;
          } while (pbVar23 < pbVar22);
          goto LAB_1800fb207;
        }
        if (uVar15 == 4) {
          iVar10 = *(int *)pbVar19;
        }
        else if (uVar9 == 2) {
          iVar10 = CONCAT22(*(undefined2 *)pbVar19,*(undefined2 *)pbVar19);
        }
        else {
          if (uVar9 != 1) {
            if (uVar9 < 8) {
              FUN_1800fb8a1(pbVar23,0);
              *pbVar23 = *pbVar19;
              pbVar23[1] = pbVar19[1];
              pbVar23[2] = pbVar19[2];
              pbVar23[3] = pbVar19[3];
              uVar16 = *(uint *)(&DAT_1802dd150 + (ulonglong)uVar9 * 4);
              *(undefined4 *)(pbVar23 + 4) = *(undefined4 *)(pbVar19 + uVar16);
              pbVar19 = pbVar19 + ((ulonglong)uVar16 -
                                  (longlong)*(int *)(&DAT_1802dd170 + (ulonglong)uVar9 * 4));
            }
            else {
              *(undefined8 *)pbVar23 = *(undefined8 *)pbVar19;
              pbVar19 = pbVar19 + 8;
            }
            pbVar23 = pbVar23 + 8;
            do {
              *(undefined8 *)pbVar23 = *(undefined8 *)pbVar19;
              pbVar23 = pbVar23 + 8;
              pbVar19 = pbVar19 + 8;
            } while (pbVar23 < pbVar22);
            goto LAB_1800fb207;
          }
          iVar10 = (uint)*pbVar19 * 0x1010101;
        }
        *(int *)pbVar23 = iVar10;
        *(int *)(pbVar23 + 4) = iVar10;
        if (8 < uVar17) {
          pbVar23 = pbVar23 + 8;
          do {
            *(int *)pbVar23 = iVar10;
            *(int *)(pbVar23 + 4) = iVar10;
            pbVar23 = pbVar23 + 8;
          } while (pbVar23 < pbVar22);
        }
        goto LAB_1800fb207;
      }
LAB_1800fb6b5:
      do {
        pbVar13 = pbVar21;
        if (pbVar19 < param_2) {
LAB_1800fb880:
          local_80 = (int)param_1;
          return ~(uint)pbVar13 + local_80;
        }
        pbVar22 = pbVar23 + uVar17;
        if ((uint)uVar15 < 8) {
          FUN_1800fb8a1(pbVar23,0);
          *pbVar23 = *pbVar19;
          pbVar23[1] = pbVar19[1];
          pbVar23[2] = pbVar19[2];
          pbVar23[3] = pbVar19[3];
          uVar14 = (uint)uVar15 << 2;
          uVar16 = *(uint *)(&DAT_1802dd150 + uVar14);
          *(undefined4 *)(pbVar23 + 4) = *(undefined4 *)(pbVar19 + uVar16);
          pbVar19 = pbVar19 + ((ulonglong)uVar16 - (longlong)*(int *)(&DAT_1802dd170 + uVar14));
        }
        else {
          *(undefined8 *)pbVar23 = *(undefined8 *)pbVar19;
          pbVar19 = pbVar19 + 8;
        }
        pbVar12 = pbVar23 + 8;
        if (pbVar2 + -0xc < pbVar22) {
          if (pbVar2 + -5 < pbVar22) goto LAB_1800fb880;
          pbVar20 = pbVar2 + -7;
          pbVar13 = pbVar19;
          pbVar23 = pbVar12;
          if (pbVar12 < pbVar20) {
            do {
              *(undefined8 *)pbVar23 = *(undefined8 *)pbVar13;
              pbVar23 = pbVar23 + 8;
              pbVar13 = pbVar13 + 8;
            } while (pbVar23 < pbVar20);
            pbVar19 = pbVar19 + ((longlong)pbVar20 - (longlong)pbVar12);
            pbVar12 = pbVar20;
          }
          for (; pbVar12 < pbVar22; pbVar12 = pbVar12 + 1) {
            bVar3 = *pbVar19;
            pbVar19 = pbVar19 + 1;
            *pbVar12 = bVar3;
          }
        }
        else {
          *(undefined8 *)pbVar12 = *(undefined8 *)pbVar19;
          if (0x10 < uVar17) {
            pbVar23 = pbVar23 + 0x10;
            do {
              pbVar19 = pbVar19 + 8;
              *(undefined8 *)pbVar23 = *(undefined8 *)pbVar19;
              pbVar23 = pbVar23 + 8;
            } while (pbVar23 < pbVar22);
          }
        }
LAB_1800fb716:
        pbVar19 = pbVar21 + 1;
        bVar3 = *pbVar21;
        while( true ) {
          uVar16 = (uint)bVar3;
          if (bVar3 >> 4 == 0xf) break;
          uVar18 = (ulonglong)(uint)(bVar3 >> 4);
          if ((param_1 + (longlong)param_3 + -0x10 <= pbVar19) ||
             (param_2 + ((ulonglong)param_4 - 0x20) < pbVar22)) goto LAB_1800fb604;
          uVar5 = *(undefined4 *)(pbVar19 + 4);
          uVar6 = *(undefined4 *)(pbVar19 + 8);
          uVar7 = *(undefined4 *)(pbVar19 + 0xc);
          *(undefined4 *)pbVar22 = *(undefined4 *)pbVar19;
          *(undefined4 *)(pbVar22 + 4) = uVar5;
          *(undefined4 *)(pbVar22 + 8) = uVar6;
          *(undefined4 *)(pbVar22 + 0xc) = uVar7;
          pbVar23 = pbVar22 + uVar18;
          pbVar12 = pbVar19 + uVar18;
          uVar17 = (ulonglong)(uVar16 & 0xf);
          uVar9 = thunk_FUN_1800fb8b4(pbVar12);
          uVar15 = (ulonglong)uVar9;
          pbVar21 = pbVar19 + uVar18 + 2;
          pbVar19 = pbVar23 + -uVar15;
          if ((((uVar16 & 0xf) == 0xf) || (uVar9 < 8)) || (pbVar19 < param_2)) goto LAB_1800fb65e;
          *(undefined8 *)pbVar23 = *(undefined8 *)pbVar19;
          *(undefined8 *)(pbVar23 + 8) = *(undefined8 *)(pbVar19 + 8);
          *(undefined2 *)(pbVar23 + 0x10) = *(undefined2 *)(pbVar19 + 0x10);
          pbVar22 = pbVar23 + uVar17 + 4;
          bVar3 = pbVar12[2];
          pbVar19 = pbVar12 + 3;
        }
        pbVar12 = pbVar1 + -0xf;
        pbVar13 = pbVar19;
        if ((pbVar12 <= pbVar19) || (pbVar13 = pbVar21 + 2, pbVar12 < pbVar13)) goto LAB_1800fb880;
        uVar18 = (ulonglong)*pbVar19;
        pbVar19 = pbVar13;
        if (uVar18 == 0xff) {
          uVar18 = 0xff;
          do {
            pbVar21 = pbVar13;
            pbVar19 = pbVar21 + 1;
            if (pbVar12 < pbVar19) goto LAB_1800fb832;
            uVar18 = uVar18 + *pbVar21;
            pbVar13 = pbVar19;
          } while ((ulonglong)*pbVar21 == 0xff);
          if (uVar18 == 0xffffffffffffffff) {
LAB_1800fb832:
            pbVar13 = pbVar21 + 1;
            goto LAB_1800fb880;
          }
        }
        uVar18 = uVar18 + 0xf;
        pbVar13 = pbVar19;
        if ((CARRY8((ulonglong)pbVar22,uVar18)) || (CARRY8((ulonglong)pbVar19,uVar18)))
        goto LAB_1800fb880;
LAB_1800fb604:
        pbVar23 = pbVar22 + uVar18;
        if ((pbVar2 + -0xc < pbVar23) || (pbVar21 = pbVar19 + uVar18, pbVar1 + -8 < pbVar21)) {
          pbVar13 = pbVar19;
          if ((pbVar19 + uVar18 == pbVar1) && (pbVar23 <= pbVar2)) {
            FUN_1802a82f0(pbVar22,pbVar19,uVar18);
            return (int)pbVar23 - (int)param_2;
          }
          goto LAB_1800fb880;
        }
        do {
          *(undefined8 *)pbVar22 = *(undefined8 *)pbVar19;
          pbVar22 = pbVar22 + 8;
          pbVar19 = pbVar19 + 8;
        } while (pbVar22 < pbVar23);
        uVar9 = thunk_FUN_1800fb8b4(pbVar21);
        uVar15 = (ulonglong)uVar9;
        pbVar21 = pbVar21 + 2;
        pbVar19 = pbVar23 + -uVar15;
        uVar17 = (ulonglong)(uVar16 & 0xf);
LAB_1800fb65e:
        if ((int)uVar17 == 0xf) {
          pbVar13 = pbVar21 + 1;
          if (pbVar1 + -4 < pbVar13) goto LAB_1800fb880;
          uVar18 = (ulonglong)*pbVar21;
          if (uVar18 == 0xff) {
            uVar18 = 0xff;
            pbVar21 = pbVar13;
            do {
              pbVar13 = pbVar21 + 1;
              if (pbVar1 + -4 < pbVar13) {
                pbVar13 = pbVar21 + 1;
                goto LAB_1800fb880;
              }
              bVar3 = *pbVar21;
              uVar18 = uVar18 + bVar3;
              pbVar21 = pbVar13;
            } while ((ulonglong)bVar3 == 0xff);
          }
          uVar17 = uVar18 + 0xf;
          if ((uVar18 == 0xffffffffffffffff) || (pbVar21 = pbVar13, ~(ulonglong)pbVar23 < uVar17))
          goto LAB_1800fb880;
        }
        uVar17 = uVar17 + 4;
      } while( true );
    }
  }
  return iVar10;
}

