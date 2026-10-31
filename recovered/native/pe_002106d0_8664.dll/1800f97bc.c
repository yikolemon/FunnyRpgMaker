/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f97bc */

int FUN_1800f97bc(undefined8 param_1,undefined8 *param_2,char *param_3,uint param_4,int param_5,
                 uint param_6)

{
  ushort uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  char *pcVar14;
  undefined8 *puVar15;
  longlong lVar16;
  char *pcVar17;
  undefined8 *puVar18;
  longlong lVar19;
  undefined8 *puVar20;
  char *pcVar21;
  undefined8 *puVar22;
  uint uVar23;
  uint uVar24;
  undefined8 *puVar25;
  char *pcVar26;
  int iVar27;
  undefined8 *puVar28;
  char *pcVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  uint uVar33;
  ulonglong uVar34;
  uint uVar35;
  char *pcVar36;
  char *local_d0;
  char *local_c0;
  undefined8 *local_b0;
  int local_a0;
  char *local_98;
  int local_90;
  undefined8 *local_80;
  
  uVar32 = (ulonglong)param_4;
  lVar12 = FUN_1800fb06f(param_1,0x4020);
  uVar35 = 1;
  if (1 < (int)param_6) {
    uVar35 = param_6;
  }
  if (0x10000 < (int)uVar35) {
    uVar35 = 0x10001;
  }
  iVar8 = FUN_1800f979c(uVar32);
  iVar27 = (int)param_3;
  if (param_5 < iVar8) {
    if ((int)param_4 < 0x1000b) {
      if (param_4 < 0x7e000001) {
        if (param_4 != 0) {
          uVar2 = *(uint *)(lVar12 + 0x4010);
          pcVar17 = param_3 + param_5;
          *(int *)(lVar12 + 0x4018) = *(int *)(lVar12 + 0x4018) + param_4;
          *(uint *)(lVar12 + 0x4010) = param_4 + uVar2;
          *(undefined4 *)(lVar12 + 0x4014) = 3;
          local_80 = param_2;
          local_98 = param_3;
          if (param_4 < 0xd) {
LAB_1800faf47:
            uVar32 = (longlong)param_2 + (uVar32 - (longlong)local_80);
            if (local_98 + (uVar32 + 0xf0) / 0xff + uVar32 + 1 <= pcVar17) {
              if (uVar32 < 0xf) {
                *local_98 = (char)uVar32 << 4;
              }
              else {
                uVar31 = uVar32 - 0xf;
                *local_98 = -0x10;
                pcVar17 = local_98 + 1;
                if (0xfe < uVar31) {
                  uVar31 = (uVar32 - 0x10e) / 0xff;
                  FUN_1802a89a0(pcVar17,CONCAT71((int7)((uVar32 - 0x10e) / 0x1fe),0xff),uVar31 + 1);
                  pcVar17 = local_98 + uVar31 + 2;
                  uVar31 = (uVar32 + uVar31 * -0xff) - 0x10e;
                }
                *pcVar17 = (char)uVar31;
                local_98 = pcVar17;
              }
              FUN_1802a82f0(local_98 + 1,local_80,uVar32);
              return ((int)(local_98 + 1) + (int)uVar32) - iVar27;
            }
            return 0;
          }
          lVar19 = (longlong)param_2 - (ulonglong)uVar2;
          puVar20 = (undefined8 *)((longlong)param_2 + (uVar32 - 0xb));
          iVar8 = FUN_1800fb899(param_2);
          *(short *)(lVar12 + (ulonglong)((uint)(iVar8 * -0x61c8864f) >> 0x13) * 2) = (short)uVar2;
          puVar28 = (undefined8 *)((longlong)param_2 + 1);
          iVar8 = FUN_1800fb899(puVar28);
          pcVar14 = (char *)((longlong)param_2 + (uVar32 - 0xc));
LAB_1800fa5eb:
          uVar24 = 1;
          uVar33 = uVar35 << 6;
          do {
            puVar18 = puVar28;
            puVar28 = (undefined8 *)((ulonglong)uVar24 + (longlong)puVar18);
            if (puVar20 < puVar28) goto LAB_1800faf47;
            uVar24 = uVar33 >> 6;
            uVar33 = uVar33 + 1;
            uVar31 = (ulonglong)((uint)(iVar8 * -0x61c8864f) >> 0x13);
            uVar1 = *(ushort *)(lVar12 + uVar31 * 2);
            sVar5 = (short)lVar19;
            puVar22 = (undefined8 *)(lVar19 + (ulonglong)uVar1);
            iVar8 = FUN_1800fb899(puVar28);
            *(short *)(lVar12 + uVar31 * 2) = (short)puVar18 - sVar5;
            iVar9 = FUN_1800fb899(puVar22);
            iVar10 = FUN_1800fb899(puVar18);
          } while (iVar9 != iVar10);
          puVar28 = puVar18;
          if ((uVar2 < uVar1) &&
             (*(char *)((longlong)puVar18 + -1) == *(char *)((longlong)puVar22 + -1))) {
            puVar15 = (undefined8 *)((longlong)puVar18 + -1);
            puVar25 = (undefined8 *)((longlong)puVar18 + -1);
            puVar3 = (undefined8 *)((longlong)param_2 + (ulonglong)uVar1 + ~(ulonglong)uVar2);
            do {
              puVar22 = puVar3;
              puVar18 = puVar25;
              puVar28 = puVar15;
              if ((puVar22 <= param_2) || (puVar28 <= local_80)) break;
              puVar15 = (undefined8 *)((longlong)puVar28 + -1);
              puVar25 = (undefined8 *)((longlong)puVar18 + -1);
              puVar3 = (undefined8 *)((longlong)puVar22 + -1);
            } while (*(char *)((longlong)puVar28 + -1) == *(char *)((longlong)puVar22 + -1));
          }
          uVar31 = (longlong)puVar18 - (longlong)local_80;
          uVar34 = uVar31 & 0xffffffff;
          if (pcVar17 < local_98 + uVar34 / 0xff + uVar34 + 9) {
            return 0;
          }
          pcVar21 = local_98 + 1;
          if ((uint)uVar31 < 0xf) {
            *local_98 = (char)uVar31 << 4;
          }
          else {
            uVar33 = (uint)uVar31 - 0xf;
            *local_98 = -0x10;
            if (0xfe < uVar33) {
              iVar8 = (int)puVar18 - (int)local_80;
              uVar33 = iVar8 - 0x10e;
              uVar31 = (ulonglong)uVar33 / 0xff;
              FUN_1802a89a0(pcVar21,CONCAT71((int7)(uVar34 / 0xff00),0xff),uVar31 + 1);
              pcVar21 = local_98 + uVar31 + 2;
              uVar33 = (iVar8 + uVar33 / 0xff) - 0x10e;
            }
            *pcVar21 = (char)uVar33;
            pcVar21 = pcVar21 + 1;
          }
          pcVar29 = pcVar21 + uVar34;
          do {
            *(undefined8 *)pcVar21 = *local_80;
            pcVar21 = pcVar21 + 8;
            local_80 = local_80 + 1;
          } while (pcVar21 < pcVar29);
          do {
            thunk_FUN_1800fb8a4(pcVar29,(int)puVar28 - (int)puVar22);
            pcVar21 = (char *)((longlong)puVar22 + 4);
            pcVar36 = (char *)((longlong)puVar28 + 4);
            pcVar26 = pcVar36;
            if (pcVar36 < pcVar14) {
              uVar31 = FUN_1800fb8a8(pcVar21);
              uVar34 = FUN_1800fb8a8(pcVar36);
              if (uVar31 == uVar34) {
                pcVar21 = (char *)((longlong)puVar22 + 0xc);
                pcVar26 = (char *)((longlong)puVar28 + 0xc);
                goto LAB_1800fa80e;
              }
              uVar33 = FUN_1800fb8ac(uVar34 ^ uVar31);
            }
            else {
LAB_1800fa80e:
              if (pcVar26 < pcVar14) {
                iVar8 = ((int)pcVar26 - (int)puVar28) + -4;
                do {
                  uVar31 = FUN_1800fb8a8(pcVar21);
                  uVar34 = FUN_1800fb8a8(pcVar26);
                  if (uVar31 != uVar34) {
                    iVar9 = FUN_1800fb8ac(uVar34 ^ uVar31);
                    uVar33 = iVar9 + iVar8;
                    goto LAB_1800fa8a3;
                  }
                  pcVar26 = pcVar26 + 8;
                  pcVar21 = pcVar21 + 8;
                  iVar8 = iVar8 + 8;
                } while (pcVar26 < pcVar14);
              }
              if (pcVar26 < (char *)((longlong)param_2 + (uVar32 - 8))) {
                iVar8 = FUN_1800fb899(pcVar21);
                iVar9 = FUN_1800fb899(pcVar26);
                if (iVar8 == iVar9) {
                  pcVar26 = pcVar26 + 4;
                  pcVar21 = pcVar21 + 4;
                }
              }
              if (pcVar26 < (char *)((longlong)param_2 + (uVar32 - 6))) {
                sVar6 = FUN_1800fb8b4(pcVar21);
                sVar7 = FUN_1800fb8b4(pcVar26);
                if (sVar6 == sVar7) {
                  pcVar26 = pcVar26 + 2;
                  pcVar21 = pcVar21 + 2;
                }
              }
              if (pcVar26 < (char *)((longlong)param_2 + (uVar32 - 5))) {
                pcVar26 = pcVar26 + (*pcVar21 == *pcVar26);
              }
              local_a0 = (int)pcVar36;
              uVar33 = (int)pcVar26 - local_a0;
            }
LAB_1800fa8a3:
            if (pcVar17 < pcVar29 + (ulonglong)(uVar33 + 0xf0) / 0xff + 8) {
              return 0;
            }
            pcVar21 = pcVar29 + 2;
            if (uVar33 < 0xf) {
              *local_98 = *local_98 + (char)uVar33;
              local_98 = pcVar21;
            }
            else {
              *local_98 = *local_98 + '\x0f';
              uVar24 = uVar33 - 0xf;
              FUN_1800fb8a1(pcVar21,0xffffffff);
              if (0x3fb < uVar24) {
                pcVar29 = pcVar29 + 6;
                do {
                  pcVar21 = pcVar29;
                  FUN_1800fb8a1(pcVar21,0xffffffff);
                  uVar24 = uVar24 - 0x3fc;
                  pcVar29 = pcVar21 + 4;
                } while (0x3fb < uVar24);
              }
              uVar11 = uVar24 * 0x8081 >> 0x17;
              pcVar21[uVar11] = (char)uVar11 + (char)uVar24;
              local_98 = pcVar21 + uVar11 + 1;
            }
            uVar31 = (ulonglong)uVar33;
            local_80 = (undefined8 *)((longlong)puVar28 + uVar31 + 4);
            if (puVar20 <= local_80) goto LAB_1800faf47;
            lVar13 = (longlong)puVar28 + uVar31 + 2;
            iVar8 = FUN_1800fb899(lVar13);
            *(short *)(lVar12 + (ulonglong)((uint)(iVar8 * -0x61c8864f) >> 0x13) * 2) =
                 (short)lVar13 - sVar5;
            iVar8 = FUN_1800fb899(local_80);
            uVar34 = (ulonglong)((uint)(iVar8 * -0x61c8864f) >> 0x13);
            puVar22 = (undefined8 *)((ulonglong)*(ushort *)(lVar12 + uVar34 * 2) + lVar19);
            *(short *)(lVar12 + uVar34 * 2) = (short)local_80 - sVar5;
            iVar8 = FUN_1800fb899(puVar22);
            iVar9 = FUN_1800fb899(local_80);
            if (iVar8 != iVar9) goto code_r0x0001800fa9bf;
            pcVar29 = local_98 + 1;
            *local_98 = '\0';
            puVar28 = local_80;
          } while( true );
        }
        if (param_5 < 1) {
          return 0;
        }
LAB_1800fa545:
        *param_3 = '\0';
        return 1;
      }
    }
    else if (param_4 < 0x7e000001) {
      uVar2 = *(uint *)(lVar12 + 0x4010);
      lVar19 = (longlong)param_2 - (ulonglong)uVar2;
      puVar20 = (undefined8 *)((longlong)param_2 + (uVar32 - 0xb));
      *(int *)(lVar12 + 0x4018) = *(int *)(lVar12 + 0x4018) + param_4;
      pcVar17 = param_3 + param_5;
      *(uint *)(lVar12 + 0x4010) = param_4 + uVar2;
      *(undefined4 *)(lVar12 + 0x4014) = 2;
      lVar13 = FUN_1800fb8a8(param_2);
      *(uint *)(lVar12 + ((ulonglong)(lVar13 * -0x30e4432345000000) >> 0x34) * 4) = uVar2;
      puVar28 = (undefined8 *)((longlong)param_2 + 1);
      lVar13 = FUN_1800fb8a8(puVar28);
      pcVar14 = (char *)((longlong)param_2 + (uVar32 - 0xc));
      puVar18 = (undefined8 *)((longlong)param_2 + 2);
      uVar33 = uVar35;
      uVar24 = uVar35 * 0x40;
      puVar22 = param_2;
LAB_1800f9a21:
      do {
        puVar15 = puVar18;
        uVar34 = (ulonglong)uVar33;
        uVar31 = (ulonglong)(lVar13 * -0x30e4432345000000) >> 0x34;
        uVar33 = *(uint *)(lVar12 + uVar31 * 4);
        local_d0._0_4_ = (int)lVar19;
        uVar11 = (int)puVar28 - (int)local_d0;
        lVar13 = FUN_1800fb8a8(puVar15);
        *(uint *)(lVar12 + uVar31 * 4) = uVar11;
        if (uVar11 <= uVar33 + 0xffff) {
          puVar25 = (undefined8 *)(lVar19 + (ulonglong)uVar33);
          iVar8 = FUN_1800fb899(puVar25);
          iVar9 = FUN_1800fb899(puVar28);
          if (iVar8 == iVar9) {
            puVar18 = puVar28;
            if ((uVar2 < uVar33) &&
               (*(char *)((longlong)puVar28 + -1) == *(char *)((longlong)puVar25 + -1))) {
              puVar15 = (undefined8 *)((longlong)puVar28 + -1);
              puVar3 = (undefined8 *)((longlong)puVar28 + -1);
              puVar4 = (undefined8 *)((longlong)param_2 + (ulonglong)uVar33 + ~(ulonglong)uVar2);
              do {
                puVar25 = puVar4;
                puVar28 = puVar3;
                puVar18 = puVar15;
                if ((puVar25 <= param_2) || (puVar18 <= puVar22)) break;
                puVar15 = (undefined8 *)((longlong)puVar18 + -1);
                puVar3 = (undefined8 *)((longlong)puVar28 + -1);
                puVar4 = (undefined8 *)((longlong)puVar25 + -1);
              } while (*(char *)((longlong)puVar18 + -1) == *(char *)((longlong)puVar25 + -1));
            }
            uVar31 = (longlong)puVar28 - (longlong)puVar22;
            uVar34 = uVar31 & 0xffffffff;
            if (pcVar17 < param_3 + uVar34 / 0xff + uVar34 + 9) {
              return 0;
            }
            pcVar21 = param_3 + 1;
            if ((uint)uVar31 < 0xf) {
              *param_3 = (char)uVar31 << 4;
            }
            else {
              uVar33 = (uint)uVar31 - 0xf;
              *param_3 = -0x10;
              if (0xfe < uVar33) {
                iVar8 = (int)puVar28 - (int)puVar22;
                uVar33 = iVar8 - 0x10e;
                uVar31 = (ulonglong)uVar33 / 0xff;
                FUN_1802a89a0(pcVar21,CONCAT71((int7)(uVar34 / 0xff00),0xff),uVar31 + 1);
                pcVar21 = param_3 + uVar31 + 2;
                uVar33 = (iVar8 + uVar33 / 0xff) - 0x10e;
              }
              *pcVar21 = (char)uVar33;
              pcVar21 = pcVar21 + 1;
            }
            pcVar29 = pcVar21 + uVar34;
            do {
              *(undefined8 *)pcVar21 = *puVar22;
              pcVar21 = pcVar21 + 8;
              puVar22 = puVar22 + 1;
            } while (pcVar21 < pcVar29);
            do {
              thunk_FUN_1800fb8a4(pcVar29,(int)puVar18 - (int)puVar25);
              pcVar21 = (char *)((longlong)puVar25 + 4);
              pcVar36 = (char *)((longlong)puVar18 + 4);
              pcVar26 = pcVar36;
              if (pcVar36 < pcVar14) {
                uVar31 = FUN_1800fb8a8(pcVar21);
                uVar34 = FUN_1800fb8a8(pcVar36);
                if (uVar31 == uVar34) {
                  pcVar21 = (char *)((longlong)puVar25 + 0xc);
                  pcVar26 = (char *)((longlong)puVar18 + 0xc);
                  goto LAB_1800f9bee;
                }
                uVar33 = FUN_1800fb8ac(uVar34 ^ uVar31);
              }
              else {
LAB_1800f9bee:
                if (pcVar26 < pcVar14) {
                  iVar8 = ((int)pcVar26 - (int)puVar18) + -4;
                  do {
                    uVar31 = FUN_1800fb8a8(pcVar21);
                    uVar34 = FUN_1800fb8a8(pcVar26);
                    if (uVar31 != uVar34) {
                      iVar9 = FUN_1800fb8ac(uVar34 ^ uVar31);
                      uVar33 = iVar9 + iVar8;
                      goto LAB_1800f9cc6;
                    }
                    pcVar26 = pcVar26 + 8;
                    pcVar21 = pcVar21 + 8;
                    iVar8 = iVar8 + 8;
                  } while (pcVar26 < pcVar14);
                }
                if (pcVar26 < (char *)((longlong)param_2 + (uVar32 - 8))) {
                  iVar8 = FUN_1800fb899(pcVar21);
                  iVar9 = FUN_1800fb899(pcVar26);
                  if (iVar8 == iVar9) {
                    pcVar26 = pcVar26 + 4;
                    pcVar21 = pcVar21 + 4;
                  }
                }
                if (pcVar26 < (char *)((longlong)param_2 + (uVar32 - 6))) {
                  sVar5 = FUN_1800fb8b4(pcVar21);
                  sVar6 = FUN_1800fb8b4(pcVar26);
                  if (sVar5 == sVar6) {
                    pcVar26 = pcVar26 + 2;
                    pcVar21 = pcVar21 + 2;
                  }
                }
                if (pcVar26 < (char *)((longlong)param_2 + (uVar32 - 5))) {
                  pcVar26 = pcVar26 + (*pcVar21 == *pcVar26);
                }
                local_90 = (int)pcVar36;
                uVar33 = (int)pcVar26 - local_90;
              }
LAB_1800f9cc6:
              if (pcVar17 < pcVar29 + (ulonglong)(uVar33 + 0xf0) / 0xff + 8) {
                return 0;
              }
              pcVar21 = pcVar29 + 2;
              if (uVar33 < 0xf) {
                *param_3 = *param_3 + (char)uVar33;
                param_3 = pcVar21;
              }
              else {
                *param_3 = *param_3 + '\x0f';
                uVar24 = uVar33 - 0xf;
                FUN_1800fb8a1(pcVar21,0xffffffff);
                if (0x3fb < uVar24) {
                  pcVar29 = pcVar29 + 6;
                  do {
                    pcVar21 = pcVar29;
                    FUN_1800fb8a1(pcVar21,0xffffffff);
                    uVar24 = uVar24 - 0x3fc;
                    pcVar29 = pcVar21 + 4;
                  } while (0x3fb < uVar24);
                }
                uVar11 = uVar24 * 0x8081 >> 0x17;
                pcVar21[uVar11] = (char)uVar11 + (char)uVar24;
                param_3 = pcVar21 + uVar11 + 1;
              }
              uVar31 = (ulonglong)uVar33;
              puVar22 = (undefined8 *)((longlong)puVar18 + uVar31 + 4);
              if (puVar20 <= puVar22) goto LAB_1800fa45d;
              lVar13 = (longlong)puVar18 + uVar31 + 2;
              lVar16 = FUN_1800fb8a8(lVar13);
              *(int *)(lVar12 + ((ulonglong)(lVar16 * -0x30e4432345000000) >> 0x34) * 4) =
                   (int)lVar13 - (int)local_d0;
              lVar13 = FUN_1800fb8a8(puVar22);
              uVar34 = (ulonglong)(lVar13 * -0x30e4432345000000) >> 0x34;
              uVar24 = (int)puVar22 - (int)local_d0;
              uVar33 = *(uint *)(lVar12 + uVar34 * 4);
              *(uint *)(lVar12 + uVar34 * 4) = uVar24;
              if (uVar33 + 0xffff < uVar24) goto LAB_1800f9dfc;
              puVar25 = (undefined8 *)((ulonglong)uVar33 + lVar19);
              iVar8 = FUN_1800fb899(puVar25);
              iVar9 = FUN_1800fb899(puVar22);
              if (iVar8 != iVar9) goto LAB_1800f9dfc;
              pcVar29 = param_3 + 1;
              *param_3 = '\0';
              puVar18 = puVar22;
            } while( true );
          }
        }
        puVar18 = (undefined8 *)(uVar34 + (longlong)puVar15);
        puVar28 = puVar15;
        uVar33 = uVar24 + 1 >> 6;
        uVar24 = uVar24 + 1;
      } while ((undefined8 *)(uVar34 + (longlong)puVar15) <= puVar20);
      goto LAB_1800fa45d;
    }
  }
  else if ((int)param_4 < 0x1000b) {
    if (param_4 < 0x7e000001) {
      if (param_4 != 0) {
        uVar2 = *(uint *)(lVar12 + 0x4010);
        *(int *)(lVar12 + 0x4018) = *(int *)(lVar12 + 0x4018) + param_4;
        *(uint *)(lVar12 + 0x4010) = uVar2 + param_4;
        *(undefined4 *)(lVar12 + 0x4014) = 3;
        local_b0 = param_2;
        if (param_4 < 0xd) {
LAB_1800faeae:
          uVar32 = (longlong)param_2 + (uVar32 - (longlong)local_b0);
          if (uVar32 < 0xf) {
            *param_3 = (char)uVar32 << 4;
          }
          else {
            uVar31 = uVar32 - 0xf;
            *param_3 = -0x10;
            pcVar17 = param_3 + 1;
            if (0xfe < uVar31) {
              uVar31 = (uVar32 - 0x10e) / 0xff;
              FUN_1802a89a0(pcVar17,CONCAT71((int7)((uVar32 - 0x10e) / 0x1fe),0xff),uVar31 + 1);
              pcVar17 = param_3 + uVar31 + 2;
              uVar31 = (uVar32 + uVar31 * -0xff) - 0x10e;
            }
            *pcVar17 = (char)uVar31;
            param_3 = pcVar17;
          }
          FUN_1802a82f0(param_3 + 1,local_b0,uVar32);
          return ((int)(param_3 + 1) + (int)uVar32) - iVar27;
        }
        lVar19 = (longlong)param_2 - (ulonglong)uVar2;
        puVar20 = (undefined8 *)((longlong)param_2 + (uVar32 - 0xb));
        iVar8 = FUN_1800fb899(param_2);
        *(short *)(lVar12 + (ulonglong)((uint)(iVar8 * -0x61c8864f) >> 0x13) * 2) = (short)uVar2;
        puVar28 = (undefined8 *)((longlong)param_2 + 1);
        uVar33 = FUN_1800fb899(puVar28);
        pcVar17 = (char *)((longlong)param_2 + (uVar32 - 0xc));
        local_c0 = param_3;
LAB_1800faac9:
        uVar31 = (ulonglong)uVar33;
        uVar24 = 1;
        uVar33 = uVar35 << 6;
        do {
          puVar18 = puVar28;
          puVar28 = (undefined8 *)((ulonglong)uVar24 + (longlong)puVar18);
          param_3 = local_c0;
          if (puVar20 < puVar28) goto LAB_1800faeae;
          uVar24 = uVar33 >> 6;
          uVar33 = uVar33 + 1;
          uVar31 = (ulonglong)((uint)((int)uVar31 * -0x61c8864f) >> 0x13);
          uVar1 = *(ushort *)(lVar12 + uVar31 * 2);
          sVar5 = (short)lVar19;
          puVar22 = (undefined8 *)(lVar19 + (ulonglong)uVar1);
          uVar11 = FUN_1800fb899(puVar28);
          *(short *)(lVar12 + uVar31 * 2) = (short)puVar18 - sVar5;
          iVar8 = FUN_1800fb899(puVar22);
          iVar9 = FUN_1800fb899(puVar18);
          uVar31 = (ulonglong)uVar11;
        } while (iVar8 != iVar9);
        puVar28 = puVar18;
        if ((uVar2 < uVar1) &&
           (*(char *)((longlong)puVar18 + -1) == *(char *)((longlong)puVar22 + -1))) {
          puVar15 = (undefined8 *)((longlong)puVar18 + -1);
          puVar25 = (undefined8 *)((longlong)puVar18 + -1);
          puVar3 = (undefined8 *)((longlong)param_2 + (ulonglong)uVar1 + ~(ulonglong)uVar2);
          do {
            puVar22 = puVar3;
            puVar18 = puVar25;
            puVar28 = puVar15;
            if ((puVar22 <= param_2) || (puVar28 <= local_b0)) break;
            uVar31 = CONCAT71((int7)(uVar31 >> 8),*(char *)((longlong)puVar28 + -1));
            puVar15 = (undefined8 *)((longlong)puVar28 + -1);
            puVar25 = (undefined8 *)((longlong)puVar18 + -1);
            puVar3 = (undefined8 *)((longlong)puVar22 + -1);
          } while (*(char *)((longlong)puVar28 + -1) == *(char *)((longlong)puVar22 + -1));
        }
        uVar34 = (longlong)puVar18 - (longlong)local_b0;
        pcVar14 = local_c0 + 1;
        if ((uint)uVar34 < 0xf) {
          *local_c0 = (char)uVar34 << 4;
        }
        else {
          uVar33 = (uint)uVar34 - 0xf;
          *local_c0 = -0x10;
          if (0xfe < uVar33) {
            iVar8 = (int)puVar18 - (int)local_b0;
            uVar33 = iVar8 - 0x10e;
            uVar30 = (ulonglong)uVar33 / 0xff;
            FUN_1802a89a0(pcVar14,CONCAT71((int7)(uVar31 >> 8),0xff),uVar30 + 1);
            pcVar14 = local_c0 + uVar30 + 2;
            uVar33 = (iVar8 + uVar33 / 0xff) - 0x10e;
          }
          *pcVar14 = (char)uVar33;
          pcVar14 = pcVar14 + 1;
        }
        pcVar21 = pcVar14 + (uVar34 & 0xffffffff);
        do {
          *(undefined8 *)pcVar14 = *local_b0;
          pcVar14 = pcVar14 + 8;
          local_b0 = local_b0 + 1;
        } while (pcVar14 < pcVar21);
        do {
          thunk_FUN_1800fb8a4(pcVar21,(int)puVar28 - (int)puVar22);
          param_3 = pcVar21 + 2;
          pcVar14 = (char *)((longlong)puVar22 + 4);
          pcVar29 = (char *)((longlong)puVar28 + 4);
          pcVar36 = pcVar29;
          if (pcVar29 < pcVar17) {
            uVar31 = FUN_1800fb8a8(pcVar14);
            uVar34 = FUN_1800fb8a8(pcVar29);
            if (uVar31 == uVar34) {
              pcVar14 = (char *)((longlong)puVar22 + 0xc);
              pcVar36 = (char *)((longlong)puVar28 + 0xc);
              goto LAB_1800face8;
            }
            uVar33 = FUN_1800fb8ac(uVar34 ^ uVar31);
            uVar31 = (ulonglong)uVar33;
            local_b0 = (undefined8 *)((longlong)puVar28 + (ulonglong)uVar33 + 4);
LAB_1800fadca:
            *local_c0 = *local_c0 + (char)uVar31;
          }
          else {
LAB_1800face8:
            for (; pcVar36 < pcVar17; pcVar36 = pcVar36 + 8) {
              uVar31 = FUN_1800fb8a8(pcVar14);
              uVar34 = FUN_1800fb8a8(pcVar36);
              if (uVar31 != uVar34) {
                uVar33 = FUN_1800fb8ac(uVar34 ^ uVar31);
                pcVar36 = pcVar36 + uVar33;
                goto LAB_1800fad4c;
              }
              pcVar14 = pcVar14 + 8;
            }
            if (pcVar36 < (char *)((longlong)param_2 + (uVar32 - 8))) {
              iVar8 = FUN_1800fb899(pcVar14);
              iVar9 = FUN_1800fb899(pcVar36);
              if (iVar8 == iVar9) {
                pcVar36 = pcVar36 + 4;
                pcVar14 = pcVar14 + 4;
              }
            }
            if (pcVar36 < (char *)((longlong)param_2 + (uVar32 - 6))) {
              sVar6 = FUN_1800fb8b4(pcVar14);
              sVar7 = FUN_1800fb8b4(pcVar36);
              if (sVar6 == sVar7) {
                pcVar36 = pcVar36 + 2;
                pcVar14 = pcVar14 + 2;
              }
            }
            if (pcVar36 < (char *)((longlong)param_2 + (uVar32 - 5))) {
              pcVar36 = pcVar36 + (*pcVar14 == *pcVar36);
            }
LAB_1800fad4c:
            uVar31 = (longlong)pcVar36 - (longlong)pcVar29;
            local_b0 = (undefined8 *)((longlong)puVar28 + (uVar31 & 0xffffffff) + 4);
            if ((uint)uVar31 < 0xf) goto LAB_1800fadca;
            *local_c0 = *local_c0 + '\x0f';
            uVar33 = (uint)uVar31 - 0xf;
            FUN_1800fb8a1(param_3,0xffffffff);
            if (0x3fb < uVar33) {
              pcVar14 = pcVar21 + 6;
              do {
                param_3 = pcVar14;
                FUN_1800fb8a1(param_3,0xffffffff);
                uVar33 = uVar33 - 0x3fc;
                pcVar14 = param_3 + 4;
              } while (0x3fb < uVar33);
            }
            uVar24 = uVar33 * 0x8081 >> 0x17;
            pcVar14 = param_3 + uVar24;
            param_3 = pcVar14 + 1;
            *pcVar14 = (char)uVar24 + (char)uVar33;
          }
          if (puVar20 <= local_b0) goto LAB_1800faeae;
          iVar8 = FUN_1800fb899((longlong)local_b0 + -2);
          *(short *)(lVar12 + (ulonglong)((uint)(iVar8 * -0x61c8864f) >> 0x13) * 2) =
               (short)((longlong)local_b0 + -2) - sVar5;
          iVar8 = FUN_1800fb899(local_b0);
          uVar31 = (ulonglong)((uint)(iVar8 * -0x61c8864f) >> 0x13);
          puVar22 = (undefined8 *)((ulonglong)*(ushort *)(lVar12 + uVar31 * 2) + lVar19);
          *(short *)(lVar12 + uVar31 * 2) = (short)local_b0 - sVar5;
          iVar8 = FUN_1800fb899(puVar22);
          iVar9 = FUN_1800fb899(local_b0);
          local_c0 = param_3;
          if (iVar8 != iVar9) goto code_r0x0001800fae3e;
          pcVar21 = param_3 + 1;
          *param_3 = '\0';
          puVar28 = local_b0;
        } while( true );
      }
      goto LAB_1800fa545;
    }
  }
  else if (param_4 < 0x7e000001) {
    uVar2 = *(uint *)(lVar12 + 0x4010);
    lVar19 = (longlong)param_2 - (ulonglong)uVar2;
    puVar18 = (undefined8 *)((longlong)param_2 + (uVar32 - 0xb));
    *(int *)(lVar12 + 0x4018) = *(int *)(lVar12 + 0x4018) + param_4;
    *(uint *)(lVar12 + 0x4010) = param_4 + uVar2;
    *(undefined4 *)(lVar12 + 0x4014) = 2;
    lVar13 = FUN_1800fb8a8(param_2);
    *(uint *)(lVar12 + ((ulonglong)(lVar13 * -0x30e4432345000000) >> 0x34) * 4) = uVar2;
    puVar28 = (undefined8 *)((longlong)param_2 + 2);
    lVar13 = FUN_1800fb8a8();
    pcVar17 = (char *)((longlong)param_2 + (uVar32 - 0xc));
    puVar20 = param_2;
    local_c0 = param_3;
LAB_1800f9f94:
    local_d0 = (char *)((longlong)puVar20 + 1);
    uVar24 = uVar35;
    uVar33 = uVar35 * 0x40;
    do {
      uVar33 = uVar33 + 1;
      uVar31 = (ulonglong)(lVar13 * -0x30e4432345000000) >> 0x34;
      uVar11 = *(uint *)(lVar12 + uVar31 * 4);
      local_a0 = (int)lVar19;
      uVar23 = (int)local_d0 - local_a0;
      lVar13 = FUN_1800fb8a8(puVar28);
      *(uint *)(lVar12 + uVar31 * 4) = uVar23;
      if (uVar23 <= uVar11 + 0xffff) {
        puVar22 = (undefined8 *)(lVar19 + (ulonglong)uVar11);
        iVar8 = FUN_1800fb899(puVar22);
        iVar9 = FUN_1800fb899(local_d0);
        if (iVar8 == iVar9) goto LAB_1800fa033;
      }
      puVar22 = (undefined8 *)((ulonglong)uVar24 + (longlong)puVar28);
      uVar24 = uVar33 >> 6;
      local_d0 = (char *)puVar28;
      puVar28 = puVar22;
      if (puVar18 < puVar22) goto LAB_1800fa3d3;
    } while( true );
  }
  return 0;
LAB_1800fa033:
  puVar28 = (undefined8 *)local_d0;
  if ((uVar2 < uVar11) && (*(char *)((longlong)local_d0 - 1) == *(char *)((longlong)puVar22 + -1)))
  {
    puVar15 = (undefined8 *)((longlong)local_d0 - 1U);
    puVar25 = (undefined8 *)((longlong)local_d0 - 1U);
    puVar3 = (undefined8 *)((longlong)param_2 + (ulonglong)uVar11 + ~(ulonglong)uVar2);
    do {
      puVar22 = puVar3;
      local_d0 = (char *)puVar25;
      puVar28 = puVar15;
      if ((puVar22 <= param_2) || (puVar28 <= puVar20)) break;
      puVar15 = (undefined8 *)((longlong)puVar28 + -1);
      puVar25 = (undefined8 *)((longlong)local_d0 - 1);
      puVar3 = (undefined8 *)((longlong)puVar22 + -1);
    } while (*(char *)((longlong)puVar28 + -1) == *(char *)((longlong)puVar22 + -1));
  }
  uVar31 = (longlong)local_d0 - (longlong)puVar20;
  pcVar14 = local_c0 + 1;
  if ((uint)uVar31 < 0xf) {
    *local_c0 = (char)uVar31 << 4;
  }
  else {
    uVar33 = (uint)uVar31 - 0xf;
    *local_c0 = -0x10;
    if (0xfe < uVar33) {
      local_98._0_4_ = (int)puVar20;
      local_98._0_4_ = (int)local_d0 - (int)local_98;
      uVar33 = (int)local_98 - 0x10e;
      uVar34 = (ulonglong)uVar33 / 0xff;
      FUN_1802a89a0(pcVar14,0xff,uVar34 + 1);
      pcVar14 = local_c0 + uVar34 + 2;
      uVar33 = ((int)local_98 + uVar33 / 0xff) - 0x10e;
    }
    *pcVar14 = (char)uVar33;
    pcVar14 = pcVar14 + 1;
  }
  pcVar21 = pcVar14 + (uVar31 & 0xffffffff);
  do {
    *(undefined8 *)pcVar14 = *puVar20;
    pcVar14 = pcVar14 + 8;
    puVar20 = puVar20 + 1;
  } while (pcVar14 < pcVar21);
  local_d0 = local_c0;
  puVar20 = puVar28;
  do {
    thunk_FUN_1800fb8a4(pcVar21,(int)puVar20 - (int)puVar22);
    local_c0 = pcVar21 + 2;
    pcVar14 = (char *)((longlong)puVar22 + 4);
    pcVar36 = (char *)((longlong)puVar20 + 4);
    pcVar29 = pcVar36;
    if (pcVar36 < pcVar17) {
      uVar31 = FUN_1800fb8a8(pcVar14);
      uVar34 = FUN_1800fb8a8(pcVar36);
      if (uVar31 == uVar34) {
        pcVar14 = (char *)((longlong)puVar22 + 0xc);
        pcVar29 = (char *)((longlong)puVar20 + 0xc);
        goto LAB_1800fa152;
      }
      uVar33 = FUN_1800fb8ac(uVar34 ^ uVar31);
      uVar31 = (ulonglong)uVar33;
      puVar20 = (undefined8 *)((longlong)puVar20 + (ulonglong)uVar33 + 4);
LAB_1800fa240:
      *local_d0 = *local_d0 + (char)uVar31;
    }
    else {
LAB_1800fa152:
      for (; pcVar29 < pcVar17; pcVar29 = pcVar29 + 8) {
        uVar31 = FUN_1800fb8a8(pcVar14);
        uVar34 = FUN_1800fb8a8(pcVar29);
        if (uVar31 != uVar34) {
          uVar33 = FUN_1800fb8ac(uVar34 ^ uVar31);
          pcVar29 = pcVar29 + uVar33;
          goto LAB_1800fa1bc;
        }
        pcVar14 = pcVar14 + 8;
      }
      if (pcVar29 < (char *)((longlong)param_2 + (uVar32 - 8))) {
        iVar8 = FUN_1800fb899(pcVar14);
        iVar9 = FUN_1800fb899(pcVar29);
        if (iVar8 == iVar9) {
          pcVar29 = pcVar29 + 4;
          pcVar14 = pcVar14 + 4;
        }
      }
      if (pcVar29 < (char *)((longlong)param_2 + (uVar32 - 6))) {
        sVar5 = FUN_1800fb8b4(pcVar14);
        sVar6 = FUN_1800fb8b4(pcVar29);
        if (sVar5 == sVar6) {
          pcVar29 = pcVar29 + 2;
          pcVar14 = pcVar14 + 2;
        }
      }
      if (pcVar29 < (char *)((longlong)param_2 + (uVar32 - 5))) {
        pcVar29 = pcVar29 + (*pcVar14 == *pcVar29);
      }
LAB_1800fa1bc:
      uVar31 = (longlong)pcVar29 - (longlong)pcVar36;
      puVar20 = (undefined8 *)((longlong)puVar20 + (uVar31 & 0xffffffff) + 4);
      if ((uint)uVar31 < 0xf) goto LAB_1800fa240;
      *local_d0 = *local_d0 + '\x0f';
      uVar33 = (uint)uVar31 - 0xf;
      FUN_1800fb8a1(local_c0,0xffffffff);
      if (0x3fb < uVar33) {
        pcVar14 = pcVar21 + 6;
        do {
          local_c0 = pcVar14;
          FUN_1800fb8a1(local_c0,0xffffffff);
          uVar33 = uVar33 - 0x3fc;
          pcVar14 = local_c0 + 4;
        } while (0x3fb < uVar33);
      }
      uVar24 = uVar33 * 0x8081 >> 0x17;
      pcVar14 = local_c0 + uVar24;
      local_c0 = pcVar14 + 1;
      *pcVar14 = (char)uVar24 + (char)uVar33;
    }
    if (puVar18 <= puVar20) goto LAB_1800fa3d3;
    lVar13 = FUN_1800fb8a8((longlong)puVar20 + -2);
    *(int *)(lVar12 + ((ulonglong)(lVar13 * -0x30e4432345000000) >> 0x34) * 4) =
         (int)((longlong)puVar20 + -2) - local_a0;
    lVar13 = FUN_1800fb8a8(puVar20);
    uVar31 = (ulonglong)(lVar13 * -0x30e4432345000000) >> 0x34;
    uVar24 = (int)puVar20 - local_a0;
    uVar33 = *(uint *)(lVar12 + uVar31 * 4);
    *(uint *)(lVar12 + uVar31 * 4) = uVar24;
    if (uVar33 + 0xffff < uVar24) break;
    puVar22 = (undefined8 *)((ulonglong)uVar33 + lVar19);
    iVar8 = FUN_1800fb899(puVar22);
    iVar9 = FUN_1800fb899(puVar20);
    if (iVar8 != iVar9) break;
    pcVar21 = local_c0 + 1;
    *local_c0 = '\0';
    local_d0 = local_c0;
  } while( true );
  lVar13 = FUN_1800fb8a8();
  puVar28 = (undefined8 *)((longlong)puVar20 + 2);
  if (puVar18 < puVar28) {
LAB_1800fa3d3:
    uVar32 = (longlong)param_2 + (uVar32 - (longlong)puVar20);
    if (uVar32 < 0xf) {
      *local_c0 = (char)uVar32 << 4;
    }
    else {
      uVar31 = uVar32 - 0xf;
      *local_c0 = -0x10;
      pcVar17 = local_c0 + 1;
      if (0xfe < uVar31) {
        uVar31 = (uVar32 - 0x10e) / 0xff;
        FUN_1802a89a0(pcVar17,CONCAT71((int7)((uVar32 - 0x10e) / 0x1fe),0xff),uVar31 + 1);
        pcVar17 = local_c0 + uVar31 + 2;
        uVar31 = (uVar32 + uVar31 * -0xff) - 0x10e;
      }
      *pcVar17 = (char)uVar31;
      local_c0 = pcVar17;
    }
    FUN_1802a82f0(local_c0 + 1,puVar20,uVar32);
    return ((int)(local_c0 + 1) + (int)uVar32) - iVar27;
  }
  goto LAB_1800f9f94;
code_r0x0001800fae3e:
  puVar28 = (undefined8 *)((longlong)local_b0 + 1);
  uVar33 = FUN_1800fb899(puVar28);
  goto LAB_1800faac9;
LAB_1800f9dfc:
  puVar28 = (undefined8 *)((longlong)puVar18 + uVar31 + 5);
  lVar13 = FUN_1800fb8a8(puVar28);
  puVar18 = (undefined8 *)((longlong)puVar18 + uVar31 + 6);
  uVar33 = uVar35;
  uVar24 = uVar35 * 0x40;
  if (puVar20 < puVar18) {
LAB_1800fa45d:
    uVar32 = (longlong)param_2 + (uVar32 - (longlong)puVar22);
    iVar8 = 0;
    if (param_3 + (uVar32 + 0xf0) / 0xff + uVar32 + 1 <= pcVar17) {
      if (uVar32 < 0xf) {
        *param_3 = (char)uVar32 << 4;
      }
      else {
        uVar31 = uVar32 - 0xf;
        *param_3 = -0x10;
        pcVar17 = param_3 + 1;
        if (0xfe < uVar31) {
          uVar31 = (uVar32 - 0x10e) / 0xff;
          FUN_1802a89a0(pcVar17,CONCAT71((int7)((uVar32 - 0x10e) / 0x1fe),0xff),uVar31 + 1);
          pcVar17 = param_3 + uVar31 + 2;
          uVar31 = (uVar32 + uVar31 * -0xff) - 0x10e;
        }
        *pcVar17 = (char)uVar31;
        param_3 = pcVar17;
      }
      FUN_1802a82f0(param_3 + 1,puVar22,uVar32);
      iVar8 = ((int)(param_3 + 1) + (int)uVar32) - iVar27;
    }
    return iVar8;
  }
  goto LAB_1800f9a21;
code_r0x0001800fa9bf:
  puVar28 = (undefined8 *)((longlong)puVar28 + uVar31 + 5);
  iVar8 = FUN_1800fb899(puVar28);
  goto LAB_1800fa5eb;
}

