/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005f5c0 */

int FUN_14005f5c0(char *param_1,int param_2,undefined8 param_3,uint *param_4,undefined8 *param_5)

{
  longlong lVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined1 (*pauVar5) [32];
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  byte *pbVar9;
  ulonglong uVar10;
  char *pcVar11;
  short sVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  undefined1 auStackY_88 [32];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_88;
  lVar15 = *(longlong *)(param_4 + 0xc);
  lVar1 = *(longlong *)(lVar15 + 0x80);
  local_4c = 0;
  iVar3 = strncmp(param_1,"COMMENT",7);
  if (iVar3 == 0) {
    if ((*param_4 & 0x2000) == 0) goto LAB_14005f862;
    local_4c = FUN_14005f1df(lVar15,(longlong)param_1,param_2);
LAB_14005f7e4:
    iVar3 = local_4c;
    if (local_4c != 0) {
LAB_14005f8ad:
      local_4c = iVar3;
      iVar17 = local_4c;
      if ((*param_4 & 0x40) != 0) {
        FUN_14001c53d(lVar1,*(longlong *)(param_4 + 6));
        param_4[6] = 0;
        param_4[7] = 0;
        iVar17 = local_4c;
      }
      goto LAB_14005f8cc;
    }
  }
  else {
    iVar3 = strncmp(param_1,"ENDFONT",7);
    if (iVar3 == 0) {
      iVar3 = 0xba;
      if ((*param_4 & 0xfc0) != 0) goto LAB_14005f8ad;
      FUN_14009aaf0(*(undefined1 **)(lVar15 + 0x38),(ulonglong)*(uint *)(lVar15 + 0x34),0x30,
                    &LAB_1400600fa);
      *(byte *)param_4 = (byte)*param_4 & 0xfe;
      *param_5 = FUN_1400076ba;
    }
    else {
      iVar3 = strncmp(param_1,"ENDCHAR",7);
      if (iVar3 == 0) {
        FUN_14001c53d(lVar1,*(longlong *)(param_4 + 6));
        param_4[6] = 0;
        param_4[7] = 0;
        param_4[8] = 0;
        *param_4 = *param_4 & 0xfffff03f;
      }
      else {
        uVar13 = *param_4;
        if ((((uVar13 & 0x40) == 0) || ((uVar13 >> 0xe & 1) != 0)) || (param_4[8] != 0xffffffff)) {
          iVar3 = strncmp(param_1,"STARTCHAR ",10);
          if (iVar3 == 0) {
            iVar3 = 0xb5;
            if ((uVar13 & 0xfc0) == 0) {
              pcVar11 = (char *)FUN_14005f2ae(param_1);
              uVar6 = FUN_140021e43(lVar1,pcVar11,&local_4c);
              *(undefined8 *)(param_4 + 6) = uVar6;
              iVar3 = local_4c;
              if (local_4c == 0) {
                *(byte *)param_4 = (byte)*param_4 | 0x40;
                goto LAB_14005f862;
              }
            }
          }
          else {
            iVar3 = strncmp(param_1,"ENCODING ",9);
            if (iVar3 == 0) {
              iVar3 = 0xb5;
              if ((uVar13 & 0x40) != 0) {
                pcVar11 = (char *)FUN_14005f2ae(param_1);
                uVar14 = FUN_14005ff49(pcVar11);
                uVar13 = 0xffffffff;
                if (-1 < (int)uVar14) {
                  uVar13 = uVar14;
                }
                param_4[8] = uVar13;
                pcVar11 = (char *)FUN_14005f2ae(pcVar11);
                uVar13 = param_4[8];
                if (uVar13 == 0xffffffff) {
                  if (*pcVar11 != '\0') {
                    uVar13 = FUN_14005ff49(pcVar11);
                    param_4[8] = uVar13;
                    goto LAB_14005f93b;
                  }
LAB_14005f9eb:
                  if ((*param_4 & 0x4000) == 0) {
                    FUN_14001c53d(lVar1,*(longlong *)(param_4 + 6));
                    lVar7 = 0;
                  }
                  else {
                    uVar13 = *(uint *)(lVar15 + 0x44);
                    lVar8 = *(longlong *)(lVar15 + 0x48);
                    if (uVar13 == *(uint *)(lVar15 + 0x40)) {
                      lVar8 = FUN_14001c617(lVar1,0x30,uVar13,uVar13 + 4,lVar8,&local_4c);
                      *(longlong *)(lVar15 + 0x48) = lVar8;
                      iVar3 = local_4c;
                      if (local_4c != 0) goto LAB_14005f8ad;
                      *(int *)(lVar15 + 0x40) = *(int *)(lVar15 + 0x40) + 4;
                      uVar13 = *(uint *)(lVar15 + 0x44);
                    }
                    lVar16 = (ulonglong)uVar13 * 0x30;
                    lVar7 = lVar8 + lVar16;
                    *(undefined8 *)(lVar8 + lVar16) = *(undefined8 *)(param_4 + 6);
                    iVar3 = *(int *)(lVar15 + 0x44);
                    *(int *)(lVar15 + 0x44) = iVar3 + 1;
                    *(int *)(lVar8 + 8 + lVar16) = iVar3;
                  }
                }
                else {
LAB_14005f93b:
                  if (uVar13 - 0x110000 < 0xffeeffff) {
                    param_4[8] = 0xffffffff;
                    goto LAB_14005f9eb;
                  }
                  if ((int)uVar13 < 0) goto LAB_14005f9eb;
                  uVar13 = *(uint *)(lVar15 + 0x34);
                  lVar8 = *(longlong *)(lVar15 + 0x38);
                  if (uVar13 == *(uint *)(lVar15 + 0x30)) {
                    lVar8 = FUN_14001c617(lVar1,0x30,uVar13,uVar13 + 0x40,lVar8,&local_4c);
                    *(longlong *)(lVar15 + 0x38) = lVar8;
                    iVar3 = local_4c;
                    if (local_4c != 0) goto LAB_14005f8ad;
                    *(int *)(lVar15 + 0x30) = *(int *)(lVar15 + 0x30) + 0x40;
                    uVar13 = *(uint *)(lVar15 + 0x34);
                  }
                  *(uint *)(lVar15 + 0x34) = uVar13 + 1;
                  lVar15 = (ulonglong)uVar13 * 0x30;
                  lVar7 = lVar8 + lVar15;
                  *(undefined8 *)(lVar8 + lVar15) = *(undefined8 *)(param_4 + 6);
                  *(uint *)(lVar8 + 8 + lVar15) = param_4[8];
                }
                param_4[6] = 0;
                param_4[7] = 0;
                *(longlong *)(param_4 + 10) = lVar7;
                *(byte *)param_4 = (byte)*param_4 | 0x80;
                goto LAB_14005f7e4;
              }
            }
            else {
              iVar3 = 0xb6;
              if ((char)uVar13 < '\0') {
                lVar8 = *(longlong *)(param_4 + 10);
                iVar3 = strncmp(param_1,"SWIDTH ",7);
                if (iVar3 == 0) {
                  pbVar9 = (byte *)FUN_14005f2ae(param_1);
                  uVar10 = FUN_14005f4b5(pbVar9);
                  *(short *)(lVar8 + 0xc) = (short)uVar10;
                  *(byte *)((longlong)param_4 + 1) = *(byte *)((longlong)param_4 + 1) | 1;
                }
                else {
                  iVar3 = strncmp(param_1,"DWIDTH ",7);
                  if (iVar3 != 0) {
                    iVar17 = 0;
                    if ((uVar13 >> 0xb & 1) != 0) goto LAB_14005f8cc;
                    iVar3 = strncmp(param_1,"BBX ",4);
                    if (iVar3 == 0) {
                      pbVar9 = (byte *)FUN_14005f2ae(param_1);
                      uVar10 = FUN_14005f4b5(pbVar9);
                      *(short *)(lVar8 + 0x10) = (short)uVar10;
                      pbVar9 = (byte *)FUN_14005f2ae((char *)pbVar9);
                      uVar10 = FUN_14005f4b5(pbVar9);
                      *(short *)(lVar8 + 0x12) = (short)uVar10;
                      pcVar11 = (char *)FUN_14005f2ae((char *)pbVar9);
                      uVar10 = FUN_14005f52b(pcVar11);
                      *(short *)(lVar8 + 0x14) = (short)uVar10;
                      pcVar11 = (char *)FUN_14005f2ae(pcVar11);
                      uVar10 = FUN_14005f52b(pcVar11);
                      sVar2 = (short)uVar10;
                      *(short *)(lVar8 + 0x16) = sVar2;
                      sVar12 = sVar2 + *(short *)(lVar8 + 0x12);
                      *(short *)(lVar8 + 0x18) = sVar12;
                      *(short *)(lVar8 + 0x1a) = -sVar2;
                      if (sVar12 <= *(short *)((longlong)param_4 + 0x12)) {
                        sVar12 = *(short *)((longlong)param_4 + 0x12);
                      }
                      *(short *)((longlong)param_4 + 0x12) = sVar12;
                      sVar12 = (short)param_4[5];
                      if ((short)param_4[5] < *(short *)(lVar8 + 0x1a)) {
                        sVar12 = *(short *)(lVar8 + 0x1a);
                      }
                      *(short *)(param_4 + 5) = sVar12;
                      sVar12 = *(short *)(lVar8 + 0x14) + *(short *)(lVar8 + 0x10);
                      *(short *)((longlong)param_4 + 0x16) = sVar12;
                      if (sVar12 <= (short)param_4[4]) {
                        sVar12 = (short)param_4[4];
                      }
                      *(short *)(param_4 + 4) = sVar12;
                      sVar2 = (short)*(undefined4 *)(lVar8 + 0x14);
                      sVar12 = (short)param_4[3];
                      if (sVar2 < (short)param_4[3]) {
                        sVar12 = sVar2;
                      }
                      *(short *)(param_4 + 3) = sVar12;
                      sVar2 = (short)*(undefined4 *)(lVar8 + 0x14);
                      sVar12 = *(short *)((longlong)param_4 + 0xe);
                      if (*(short *)((longlong)param_4 + 0xe) < sVar2) {
                        sVar12 = sVar2;
                      }
                      *(short *)((longlong)param_4 + 0xe) = sVar12;
                      uVar13 = *param_4;
                      if ((uVar13 >> 9 & 1) == 0) {
                        *(undefined2 *)(lVar8 + 0xe) = *(undefined2 *)(lVar8 + 0x10);
                        uVar13 = *param_4;
                      }
                      if ((uVar13 >> 0xc & 1) != 0) {
                        iVar3 = FUN_14001de7c((uint)*(ushort *)(lVar8 + 0xe),72000,
                                              *(int *)(lVar15 + 0x18) * *(int *)(lVar15 + 0x14));
                        if (*(short *)(lVar8 + 0xc) != (short)iVar3) {
                          *(short *)(lVar8 + 0xc) = (short)iVar3;
                        }
                      }
                      *(byte *)((longlong)param_4 + 1) = *(byte *)((longlong)param_4 + 1) | 4;
                      iVar17 = 0;
                      goto LAB_14005f8cc;
                    }
                    iVar4 = strncmp(param_1,"BITMAP",6);
                    iVar3 = 3;
                    if ((iVar4 == 0) && (iVar3 = 0xb7, (uVar13 >> 10 & 1) != 0)) {
                      uVar13 = (uint)*(ushort *)(lVar15 + 0x78) * (uint)*(ushort *)(lVar8 + 0x10);
                      uVar14 = uVar13 + 7 >> 3;
                      *(uint *)(lVar8 + 0x28) = uVar14;
                      iVar3 = 0xb8;
                      if ((uVar13 < 0x7fff9) &&
                         (uVar14 = uVar14 * *(ushort *)(lVar8 + 0x12), uVar14 < 0x10000)) {
                        *(short *)(lVar8 + 0x2c) = (short)uVar14;
                        if (uVar14 == 0) goto LAB_14005f8cc;
                        pauVar5 = FUN_14001c423(lVar1,uVar14,&local_4c);
                        *(undefined1 (**) [32])(lVar8 + 0x20) = pauVar5;
                        iVar3 = local_4c;
                        if (local_4c == 0) {
                          param_4[2] = 0;
                          *(byte *)((longlong)param_4 + 1) = *(byte *)((longlong)param_4 + 1) | 8;
                          *param_5 = FUN_140060109;
                          goto LAB_14005f8cc;
                        }
                      }
                    }
                    goto LAB_14005f8ad;
                  }
                  pbVar9 = (byte *)FUN_14005f2ae(param_1);
                  uVar10 = FUN_14005f4b5(pbVar9);
                  *(short *)(lVar8 + 0xe) = (short)uVar10;
                  uVar13 = *param_4;
                  if ((uVar13 >> 8 & 1) == 0) {
                    iVar3 = FUN_14001de7c((uint)uVar10 & 0xffff,72000,
                                          *(int *)(lVar15 + 0x18) * *(int *)(lVar15 + 0x14));
                    *(short *)(lVar8 + 0xc) = (short)iVar3;
                    uVar13 = *param_4;
                  }
                  *param_4 = uVar13 | 0x200;
                }
                goto LAB_14005f862;
              }
            }
          }
          goto LAB_14005f8ad;
        }
      }
    }
  }
LAB_14005f862:
  iVar17 = 0;
LAB_14005f8cc:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_88);
  }
  return iVar17;
}

