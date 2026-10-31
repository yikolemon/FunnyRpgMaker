/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180211f84 */

int FUN_180211f84(char *param_1,undefined4 param_2,undefined8 param_3,uint *param_4,
                 undefined8 *param_5)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  short sVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  undefined1 auStack_88 [32];
  longlong local_68;
  int *local_60;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_88;
  lVar13 = *(longlong *)(param_4 + 0xc);
  uVar9 = *(undefined8 *)(lVar13 + 0x80);
  local_4c = 0;
  iVar3 = strncmp(param_1,"COMMENT",7);
  if (iVar3 == 0) {
    if ((*param_4 & 0x2000) == 0) goto LAB_180212226;
    local_4c = FUN_180211ba3(lVar13,param_1,param_2);
LAB_1802121a8:
    iVar3 = local_4c;
    if (local_4c != 0) {
LAB_180212271:
      local_4c = iVar3;
      iVar15 = local_4c;
      if ((*param_4 & 0x40) != 0) {
        FUN_1801c9b65(uVar9,*(undefined8 *)(param_4 + 6));
        param_4[6] = 0;
        param_4[7] = 0;
        iVar15 = local_4c;
      }
      goto LAB_180212290;
    }
  }
  else {
    iVar3 = strncmp(param_1,"ENDFONT",7);
    if (iVar3 == 0) {
      iVar3 = 0xba;
      if ((*param_4 & 0xfc0) != 0) goto LAB_180212271;
      FUN_180289570(*(undefined8 *)(lVar13 + 0x38),*(undefined4 *)(lVar13 + 0x34),0x30,
                    &LAB_180212abe);
      *(byte *)param_4 = (byte)*param_4 & 0xfe;
      *param_5 = FUN_1800414e6;
    }
    else {
      iVar3 = strncmp(param_1,"ENDCHAR",7);
      if (iVar3 == 0) {
        FUN_1801c9b65(uVar9,*(undefined8 *)(param_4 + 6));
        param_4[6] = 0;
        param_4[7] = 0;
        param_4[8] = 0;
        *param_4 = *param_4 & 0xfffff03f;
      }
      else {
        uVar11 = *param_4;
        if ((((uVar11 & 0x40) == 0) || ((uVar11 >> 0xe & 1) != 0)) || (param_4[8] != 0xffffffff)) {
          iVar3 = strncmp(param_1,"STARTCHAR ",10);
          if (iVar3 == 0) {
            iVar3 = 0xb5;
            if ((uVar11 & 0xfc0) == 0) {
              uVar5 = FUN_180211c72(param_1);
              uVar5 = FUN_1801cfa40(uVar9,uVar5,&local_4c);
              *(undefined8 *)(param_4 + 6) = uVar5;
              iVar3 = local_4c;
              if (local_4c == 0) {
                *(byte *)param_4 = (byte)*param_4 | 0x40;
                goto LAB_180212226;
              }
            }
          }
          else {
            iVar3 = strncmp(param_1,"ENCODING ",9);
            if (iVar3 == 0) {
              iVar3 = 0xb5;
              if ((uVar11 & 0x40) != 0) {
                uVar5 = FUN_180211c72(param_1);
                uVar12 = FUN_18021290d(uVar5);
                uVar11 = 0xffffffff;
                if (-1 < (int)uVar12) {
                  uVar11 = uVar12;
                }
                param_4[8] = uVar11;
                pcVar6 = (char *)FUN_180211c72(uVar5);
                uVar11 = param_4[8];
                if (uVar11 == 0xffffffff) {
                  if (*pcVar6 != '\0') {
                    uVar11 = FUN_18021290d();
                    param_4[8] = uVar11;
                    goto LAB_1802122ff;
                  }
LAB_1802123af:
                  if ((*param_4 & 0x4000) == 0) {
                    FUN_1801c9b65(uVar9,*(undefined8 *)(param_4 + 6));
                    lVar7 = 0;
                  }
                  else {
                    uVar11 = *(uint *)(lVar13 + 0x44);
                    uVar16 = (ulonglong)uVar11;
                    lVar8 = *(longlong *)(lVar13 + 0x48);
                    if (uVar11 == *(uint *)(lVar13 + 0x40)) {
                      local_60 = &local_4c;
                      local_68 = lVar8;
                      lVar8 = FUN_1801c9c3f(uVar9,0x30,uVar16,uVar11 + 4);
                      *(longlong *)(lVar13 + 0x48) = lVar8;
                      iVar3 = local_4c;
                      if (local_4c != 0) goto LAB_180212271;
                      *(int *)(lVar13 + 0x40) = *(int *)(lVar13 + 0x40) + 4;
                      uVar16 = (ulonglong)*(uint *)(lVar13 + 0x44);
                    }
                    lVar14 = uVar16 * 0x30;
                    lVar7 = lVar8 + lVar14;
                    *(undefined8 *)(lVar8 + lVar14) = *(undefined8 *)(param_4 + 6);
                    iVar3 = *(int *)(lVar13 + 0x44);
                    *(int *)(lVar13 + 0x44) = iVar3 + 1;
                    *(int *)(lVar8 + 8 + lVar14) = iVar3;
                  }
                }
                else {
LAB_1802122ff:
                  if (uVar11 - 0x110000 < 0xffeeffff) {
                    param_4[8] = 0xffffffff;
                    goto LAB_1802123af;
                  }
                  if ((int)uVar11 < 0) goto LAB_1802123af;
                  uVar11 = *(uint *)(lVar13 + 0x34);
                  lVar8 = *(longlong *)(lVar13 + 0x38);
                  if (uVar11 == *(uint *)(lVar13 + 0x30)) {
                    local_60 = &local_4c;
                    local_68 = lVar8;
                    lVar8 = FUN_1801c9c3f(uVar9,0x30,uVar11,uVar11 + 0x40);
                    *(longlong *)(lVar13 + 0x38) = lVar8;
                    iVar3 = local_4c;
                    if (local_4c != 0) goto LAB_180212271;
                    *(int *)(lVar13 + 0x30) = *(int *)(lVar13 + 0x30) + 0x40;
                    uVar11 = *(uint *)(lVar13 + 0x34);
                  }
                  *(uint *)(lVar13 + 0x34) = uVar11 + 1;
                  lVar13 = (ulonglong)uVar11 * 0x30;
                  lVar7 = lVar8 + lVar13;
                  *(undefined8 *)(lVar8 + lVar13) = *(undefined8 *)(param_4 + 6);
                  *(uint *)(lVar8 + 8 + lVar13) = param_4[8];
                }
                param_4[6] = 0;
                param_4[7] = 0;
                *(longlong *)(param_4 + 10) = lVar7;
                *(byte *)param_4 = (byte)*param_4 | 0x80;
                goto LAB_1802121a8;
              }
            }
            else {
              iVar3 = 0xb6;
              if ((char)uVar11 < '\0') {
                lVar8 = *(longlong *)(param_4 + 10);
                iVar3 = strncmp(param_1,"SWIDTH ",7);
                if (iVar3 == 0) {
                  uVar9 = FUN_180211c72(param_1);
                  uVar1 = FUN_180211e79(uVar9);
                  *(undefined2 *)(lVar8 + 0xc) = uVar1;
                  *(byte *)((longlong)param_4 + 1) = *(byte *)((longlong)param_4 + 1) | 1;
                }
                else {
                  iVar3 = strncmp(param_1,"DWIDTH ",7);
                  if (iVar3 != 0) {
                    iVar15 = 0;
                    if ((uVar11 >> 0xb & 1) != 0) goto LAB_180212290;
                    iVar3 = strncmp(param_1,"BBX ",4);
                    if (iVar3 == 0) {
                      uVar9 = FUN_180211c72(param_1);
                      uVar1 = FUN_180211e79(uVar9);
                      *(undefined2 *)(lVar8 + 0x10) = uVar1;
                      uVar9 = FUN_180211c72(uVar9);
                      uVar1 = FUN_180211e79(uVar9);
                      *(undefined2 *)(lVar8 + 0x12) = uVar1;
                      uVar9 = FUN_180211c72(uVar9);
                      uVar1 = FUN_180211eef(uVar9);
                      *(undefined2 *)(lVar8 + 0x14) = uVar1;
                      uVar9 = FUN_180211c72(uVar9);
                      sVar2 = FUN_180211eef(uVar9);
                      *(short *)(lVar8 + 0x16) = sVar2;
                      sVar10 = sVar2 + *(short *)(lVar8 + 0x12);
                      *(short *)(lVar8 + 0x18) = sVar10;
                      *(short *)(lVar8 + 0x1a) = -sVar2;
                      if (sVar10 <= *(short *)((longlong)param_4 + 0x12)) {
                        sVar10 = *(short *)((longlong)param_4 + 0x12);
                      }
                      *(short *)((longlong)param_4 + 0x12) = sVar10;
                      sVar10 = (short)param_4[5];
                      if ((short)param_4[5] < *(short *)(lVar8 + 0x1a)) {
                        sVar10 = *(short *)(lVar8 + 0x1a);
                      }
                      *(short *)(param_4 + 5) = sVar10;
                      sVar10 = *(short *)(lVar8 + 0x14) + *(short *)(lVar8 + 0x10);
                      *(short *)((longlong)param_4 + 0x16) = sVar10;
                      if (sVar10 <= (short)param_4[4]) {
                        sVar10 = (short)param_4[4];
                      }
                      *(short *)(param_4 + 4) = sVar10;
                      sVar2 = (short)*(undefined4 *)(lVar8 + 0x14);
                      sVar10 = (short)param_4[3];
                      if (sVar2 < (short)param_4[3]) {
                        sVar10 = sVar2;
                      }
                      *(short *)(param_4 + 3) = sVar10;
                      sVar2 = (short)*(undefined4 *)(lVar8 + 0x14);
                      sVar10 = *(short *)((longlong)param_4 + 0xe);
                      if (*(short *)((longlong)param_4 + 0xe) < sVar2) {
                        sVar10 = sVar2;
                      }
                      *(short *)((longlong)param_4 + 0xe) = sVar10;
                      uVar11 = *param_4;
                      if ((uVar11 >> 9 & 1) == 0) {
                        *(undefined2 *)(lVar8 + 0xe) = *(undefined2 *)(lVar8 + 0x10);
                        uVar11 = *param_4;
                      }
                      if (((uVar11 >> 0xc & 1) != 0) &&
                         (sVar10 = FUN_1801cb4a4(*(undefined2 *)(lVar8 + 0xe),72000,
                                                 *(int *)(lVar13 + 0x18) * *(int *)(lVar13 + 0x14)),
                         *(short *)(lVar8 + 0xc) != sVar10)) {
                        *(short *)(lVar8 + 0xc) = sVar10;
                      }
                      *(byte *)((longlong)param_4 + 1) = *(byte *)((longlong)param_4 + 1) | 4;
                      iVar15 = 0;
                      goto LAB_180212290;
                    }
                    iVar4 = strncmp(param_1,"BITMAP",6);
                    iVar3 = 3;
                    if ((iVar4 == 0) && (iVar3 = 0xb7, (uVar11 >> 10 & 1) != 0)) {
                      uVar11 = (uint)*(ushort *)(lVar13 + 0x78) * (uint)*(ushort *)(lVar8 + 0x10);
                      uVar12 = uVar11 + 7 >> 3;
                      *(uint *)(lVar8 + 0x28) = uVar12;
                      iVar3 = 0xb8;
                      if ((uVar11 < 0x7fff9) &&
                         (uVar12 = uVar12 * *(ushort *)(lVar8 + 0x12), uVar12 < 0x10000)) {
                        *(short *)(lVar8 + 0x2c) = (short)uVar12;
                        if (uVar12 == 0) goto LAB_180212290;
                        uVar5 = FUN_1801c9a4b(uVar9,uVar12,&local_4c);
                        *(undefined8 *)(lVar8 + 0x20) = uVar5;
                        iVar3 = local_4c;
                        if (local_4c == 0) {
                          param_4[2] = 0;
                          *(byte *)((longlong)param_4 + 1) = *(byte *)((longlong)param_4 + 1) | 8;
                          *param_5 = FUN_180212acd;
                          goto LAB_180212290;
                        }
                      }
                    }
                    goto LAB_180212271;
                  }
                  uVar9 = FUN_180211c72(param_1);
                  uVar1 = FUN_180211e79(uVar9);
                  *(undefined2 *)(lVar8 + 0xe) = uVar1;
                  uVar11 = *param_4;
                  if ((uVar11 >> 8 & 1) == 0) {
                    uVar1 = FUN_1801cb4a4(uVar1,72000,
                                          *(int *)(lVar13 + 0x18) * *(int *)(lVar13 + 0x14));
                    *(undefined2 *)(lVar8 + 0xc) = uVar1;
                    uVar11 = *param_4;
                  }
                  *param_4 = uVar11 | 0x200;
                }
                goto LAB_180212226;
              }
            }
          }
          goto LAB_180212271;
        }
      }
    }
  }
LAB_180212226:
  iVar15 = 0;
LAB_180212290:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_88);
  }
  return iVar15;
}

