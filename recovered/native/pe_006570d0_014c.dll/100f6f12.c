/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f6f12 */

byte * FUN_100f6f12(byte *param_1,byte *param_2,int param_3,uint param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ushort uVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint uVar16;
  byte *pbVar17;
  byte *pbVar18;
  uint local_3c;
  
  pbVar12 = (byte *)0xffffffff;
  if (-1 < (int)param_4 && param_1 != (byte *)0x0) {
    if (param_4 == 0) {
      if (param_3 == 1) {
        pbVar12 = (byte *)-(uint)(*param_1 != 0);
      }
    }
    else if (param_3 != 0) {
      pbVar1 = param_1 + param_3;
      pbVar2 = param_2 + param_4;
      pbVar12 = param_1;
      pbVar15 = param_2;
      if (param_4 < 0x40) goto LAB_100f745a;
      pbVar8 = pbVar1 + -0xf;
LAB_100f6fa8:
      do {
        pbVar13 = pbVar12 + 1;
        uVar11 = (uint)*pbVar12;
        uVar16 = (uint)(*pbVar12 >> 4);
        if (uVar16 == 0xf) {
          pbVar14 = pbVar13;
          if ((pbVar8 <= pbVar13) || (pbVar9 = pbVar12 + 2, pbVar14 = pbVar9, pbVar8 < pbVar9))
          goto LAB_100f751f;
          uVar16 = (uint)*pbVar13;
          if (uVar16 == 0xff) {
            uVar16 = 0xff;
            do {
              pbVar9 = pbVar14 + 1;
              if (pbVar8 < pbVar9) goto LAB_100f7590;
              bVar3 = *pbVar14;
              uVar16 = uVar16 + bVar3;
              if ((int)uVar16 < 0) goto LAB_100f7590;
              pbVar14 = pbVar9;
            } while (bVar3 == 0xff);
          }
          uVar16 = uVar16 + 0xf;
          pbVar13 = pbVar9 + uVar16;
          pbVar18 = pbVar15 + uVar16;
          pbVar14 = pbVar9;
          if ((CARRY4((uint)pbVar15,uVar16)) || (CARRY4((uint)pbVar9,uVar16))) goto LAB_100f751f;
          if (param_2 + (param_4 - 0x20) < pbVar18) goto LAB_100f7362;
          if (pbVar1 + -0x20 < pbVar13) goto LAB_100f7362;
          iVar10 = 0;
          do {
            pbVar12 = pbVar9 + iVar10;
            uVar4 = *(undefined4 *)(pbVar12 + 4);
            uVar5 = *(undefined4 *)(pbVar12 + 8);
            uVar6 = *(undefined4 *)(pbVar12 + 0xc);
            pbVar14 = pbVar15 + iVar10;
            *(undefined4 *)pbVar14 = *(undefined4 *)pbVar12;
            *(undefined4 *)(pbVar14 + 4) = uVar4;
            *(undefined4 *)(pbVar14 + 8) = uVar5;
            *(undefined4 *)(pbVar14 + 0xc) = uVar6;
            pbVar12 = pbVar9 + iVar10 + 0x10;
            uVar4 = *(undefined4 *)(pbVar12 + 4);
            uVar5 = *(undefined4 *)(pbVar12 + 8);
            uVar6 = *(undefined4 *)(pbVar12 + 0xc);
            *(undefined4 *)(pbVar14 + 0x10) = *(undefined4 *)pbVar12;
            *(undefined4 *)(pbVar14 + 0x14) = uVar4;
            *(undefined4 *)(pbVar14 + 0x18) = uVar5;
            *(undefined4 *)(pbVar14 + 0x1c) = uVar6;
            iVar10 = iVar10 + 0x20;
          } while (pbVar14 + 0x20 < pbVar18);
        }
        else {
          pbVar9 = pbVar13;
          if (pbVar1 + -0x11 < pbVar13) goto LAB_100f7362;
          uVar4 = *(undefined4 *)(pbVar12 + 5);
          uVar5 = *(undefined4 *)(pbVar12 + 9);
          uVar6 = *(undefined4 *)(pbVar12 + 0xd);
          *(undefined4 *)pbVar15 = *(undefined4 *)pbVar13;
          *(undefined4 *)(pbVar15 + 4) = uVar4;
          *(undefined4 *)(pbVar15 + 8) = uVar5;
          *(undefined4 *)(pbVar15 + 0xc) = uVar6;
          pbVar13 = pbVar13 + uVar16;
          pbVar18 = pbVar15 + uVar16;
        }
        uVar7 = thunk_FUN_100f75b3();
        local_3c = (uint)uVar7;
        pbVar12 = pbVar13 + 2;
        pbVar17 = pbVar18 + -local_3c;
        uVar11 = uVar11 & 0xf;
        if (uVar11 == 0xf) {
          pbVar14 = pbVar13 + 3;
          if (pbVar1 + -4 < pbVar14) goto LAB_100f751f;
          uVar11 = (uint)*pbVar12;
          pbVar12 = pbVar14;
          if (uVar11 == 0xff) {
            uVar11 = 0xff;
            do {
              pbVar12 = pbVar14 + 1;
              if (pbVar1 + -4 < pbVar12) goto LAB_100f7590;
              bVar3 = *pbVar14;
              uVar11 = uVar11 + bVar3;
              if ((int)uVar11 < 0) goto LAB_100f7590;
              pbVar14 = pbVar12;
            } while (bVar3 == 0xff);
          }
          uVar11 = uVar11 + 0x13;
          pbVar14 = pbVar12;
          if (CARRY4((uint)pbVar18,uVar11)) goto LAB_100f751f;
          if (pbVar2 + -0x40 <= pbVar18 + uVar11) goto LAB_100f73f8;
        }
        else {
          pbVar15 = pbVar18 + uVar11 + 4;
          uVar11 = uVar11 + 4;
          if (pbVar2 + -0x40 <= pbVar15) goto LAB_100f73f8;
          if ((param_2 <= pbVar17) && (7 < uVar7)) {
            *(undefined8 *)pbVar18 = *(undefined8 *)pbVar17;
            *(undefined8 *)(pbVar18 + 8) = *(undefined8 *)(pbVar17 + 8);
            *(undefined2 *)(pbVar18 + 0x10) = *(undefined2 *)(pbVar17 + 0x10);
            goto LAB_100f6fa8;
          }
        }
        pbVar14 = pbVar12;
        if (pbVar17 < param_2) goto LAB_100f751f;
        pbVar15 = pbVar18 + uVar11;
        if (uVar7 < 0x10) {
          if (local_3c == 4) {
            iVar10 = *(int *)pbVar17;
          }
          else if (local_3c == 2) {
            iVar10 = CONCAT22(*(undefined2 *)pbVar17,*(undefined2 *)pbVar17);
          }
          else {
            if (local_3c != 1) {
              if (uVar7 < 8) {
                FUN_100f75a5();
                *pbVar18 = *pbVar17;
                pbVar18[1] = pbVar17[1];
                pbVar18[2] = pbVar17[2];
                pbVar18[3] = pbVar17[3];
                iVar10 = *(int *)(&DAT_102b7b60 + local_3c * 4);
                *(undefined4 *)(pbVar18 + 4) = *(undefined4 *)(pbVar17 + iVar10);
                pbVar17 = pbVar17 + (iVar10 - *(int *)(&DAT_102b7b80 + local_3c * 4));
              }
              else {
                *(undefined8 *)pbVar18 = *(undefined8 *)pbVar17;
                pbVar17 = pbVar17 + 8;
              }
              pbVar18 = pbVar18 + 8;
              do {
                *(undefined8 *)pbVar18 = *(undefined8 *)pbVar17;
                pbVar18 = pbVar18 + 8;
                pbVar17 = pbVar17 + 8;
              } while (pbVar18 < pbVar15);
              goto LAB_100f6fa8;
            }
            iVar10 = (uint)*pbVar17 * 0x1010101;
          }
          *(int *)pbVar18 = iVar10;
          *(int *)(pbVar18 + 4) = iVar10;
          if (8 < uVar11) {
            pbVar18 = pbVar18 + 8;
            do {
              *(int *)pbVar18 = iVar10;
              *(int *)(pbVar18 + 4) = iVar10;
              pbVar18 = pbVar18 + 8;
            } while (pbVar18 < pbVar15);
          }
          goto LAB_100f6fa8;
        }
        do {
          pbVar13 = pbVar18 + -local_3c;
          uVar4 = *(undefined4 *)(pbVar13 + 4);
          uVar5 = *(undefined4 *)(pbVar13 + 8);
          uVar6 = *(undefined4 *)(pbVar13 + 0xc);
          *(undefined4 *)pbVar18 = *(undefined4 *)pbVar13;
          *(undefined4 *)(pbVar18 + 4) = uVar4;
          *(undefined4 *)(pbVar18 + 8) = uVar5;
          *(undefined4 *)(pbVar18 + 0xc) = uVar6;
          pbVar13 = pbVar18 + -local_3c + 0x10;
          uVar4 = *(undefined4 *)(pbVar13 + 4);
          uVar5 = *(undefined4 *)(pbVar13 + 8);
          uVar6 = *(undefined4 *)(pbVar13 + 0xc);
          *(undefined4 *)(pbVar18 + 0x10) = *(undefined4 *)pbVar13;
          *(undefined4 *)(pbVar18 + 0x14) = uVar4;
          *(undefined4 *)(pbVar18 + 0x18) = uVar5;
          *(undefined4 *)(pbVar18 + 0x1c) = uVar6;
          pbVar18 = pbVar18 + 0x20;
        } while (pbVar18 < pbVar15);
      } while( true );
    }
  }
  return pbVar12;
LAB_100f73f8:
  pbVar14 = pbVar12;
  if (pbVar17 < param_2) goto LAB_100f751f;
  pbVar15 = pbVar18 + uVar11;
  if (local_3c < 8) {
    FUN_100f75a5();
    *pbVar18 = *pbVar17;
    pbVar18[1] = pbVar17[1];
    pbVar18[2] = pbVar17[2];
    pbVar18[3] = pbVar17[3];
    iVar10 = *(int *)(&DAT_102b7b60 + local_3c * 4);
    *(undefined4 *)(pbVar18 + 4) = *(undefined4 *)(pbVar17 + iVar10);
    pbVar17 = pbVar17 + (iVar10 - *(int *)(&DAT_102b7b80 + local_3c * 4));
  }
  else {
    *(undefined8 *)pbVar18 = *(undefined8 *)pbVar17;
    pbVar17 = pbVar17 + 8;
  }
  pbVar8 = pbVar18 + 8;
  if (pbVar2 + -0xc < pbVar15) {
    if (pbVar2 + -5 < pbVar15) goto LAB_100f751f;
    pbVar13 = pbVar2 + -7;
    pbVar9 = pbVar17;
    pbVar18 = pbVar8;
    if (pbVar8 < pbVar13) {
      do {
        *(undefined8 *)pbVar18 = *(undefined8 *)pbVar9;
        pbVar18 = pbVar18 + 8;
        pbVar9 = pbVar9 + 8;
      } while (pbVar18 < pbVar13);
      pbVar17 = pbVar17 + ((int)pbVar13 - (int)pbVar8);
      pbVar8 = pbVar13;
    }
    for (; pbVar8 < pbVar15; pbVar8 = pbVar8 + 1) {
      bVar3 = *pbVar17;
      pbVar17 = pbVar17 + 1;
      *pbVar8 = bVar3;
    }
  }
  else {
    *(undefined8 *)pbVar8 = *(undefined8 *)pbVar17;
    if (0x10 < uVar11) {
      pbVar18 = pbVar18 + 0x10;
      do {
        pbVar17 = pbVar17 + 8;
        *(undefined8 *)pbVar18 = *(undefined8 *)pbVar17;
        pbVar18 = pbVar18 + 8;
      } while (pbVar18 < pbVar15);
    }
  }
LAB_100f745a:
  pbVar9 = pbVar12 + 1;
  bVar3 = *pbVar12;
  while( true ) {
    uVar16 = (uint)(bVar3 >> 4);
    uVar11 = (uint)bVar3;
    if (uVar16 == 0xf) break;
    if ((param_1 + param_3 + -0x10 <= pbVar9) || (param_2 + (param_4 - 0x20) < pbVar15))
    goto LAB_100f7362;
    uVar4 = *(undefined4 *)(pbVar9 + 4);
    uVar5 = *(undefined4 *)(pbVar9 + 8);
    uVar6 = *(undefined4 *)(pbVar9 + 0xc);
    *(undefined4 *)pbVar15 = *(undefined4 *)pbVar9;
    *(undefined4 *)(pbVar15 + 4) = uVar4;
    *(undefined4 *)(pbVar15 + 8) = uVar5;
    *(undefined4 *)(pbVar15 + 0xc) = uVar6;
    pbVar18 = pbVar15 + uVar16;
    uVar11 = uVar11 & 0xf;
    uVar7 = thunk_FUN_100f75b3();
    local_3c = (uint)uVar7;
    pbVar12 = pbVar9 + uVar16 + 2;
    pbVar17 = pbVar18 + -local_3c;
    if ((uVar11 == 0xf) || (uVar7 < 8)) goto LAB_100f73b7;
    if (pbVar17 < param_2) goto LAB_100f73f5;
    *(undefined8 *)pbVar18 = *(undefined8 *)pbVar17;
    *(undefined8 *)(pbVar18 + 8) = *(undefined8 *)(pbVar17 + 8);
    *(undefined2 *)(pbVar18 + 0x10) = *(undefined2 *)(pbVar17 + 0x10);
    pbVar15 = pbVar18 + uVar11 + 4;
    bVar3 = pbVar9[uVar16 + 2];
    pbVar9 = pbVar9 + uVar16 + 3;
  }
  pbVar8 = pbVar1 + -0xf;
  pbVar14 = pbVar9;
  if ((pbVar8 <= pbVar9) || (pbVar14 = pbVar12 + 2, pbVar8 < pbVar14)) goto LAB_100f751f;
  uVar16 = (uint)*pbVar9;
  if (uVar16 == 0xff) {
    uVar16 = 0xff;
    pbVar12 = pbVar14;
    do {
      pbVar14 = pbVar12 + 1;
      if (pbVar8 < pbVar14) {
LAB_100f7593:
        pbVar14 = pbVar12 + 1;
        goto LAB_100f751f;
      }
      bVar3 = *pbVar12;
      uVar16 = uVar16 + bVar3;
      if ((int)uVar16 < 0) goto LAB_100f7593;
      pbVar12 = pbVar14;
    } while (bVar3 == 0xff);
  }
  uVar16 = uVar16 + 0xf;
  if ((CARRY4((uint)pbVar15,uVar16)) || (pbVar9 = pbVar14, CARRY4((uint)pbVar14,uVar16)))
  goto LAB_100f751f;
LAB_100f7362:
  pbVar18 = pbVar15 + uVar16;
  if ((pbVar2 + -0xc < pbVar18) || (pbVar12 = pbVar9 + uVar16, pbVar1 + -8 < pbVar12)) {
    pbVar14 = pbVar9;
    if ((pbVar9 + uVar16 == pbVar1) && (pbVar18 <= pbVar2)) {
      FUN_1025b2d0(pbVar15,pbVar9,uVar16);
      return pbVar18 + -(int)param_2;
    }
    goto LAB_100f751f;
  }
  do {
    *(undefined8 *)pbVar15 = *(undefined8 *)pbVar9;
    pbVar15 = pbVar15 + 8;
    pbVar9 = pbVar9 + 8;
  } while (pbVar15 < pbVar18);
  local_3c = thunk_FUN_100f75b3();
  local_3c = local_3c & 0xffff;
  pbVar12 = pbVar12 + 2;
  pbVar17 = pbVar18 + -local_3c;
  uVar11 = uVar11 & 0xf;
LAB_100f73b7:
  if (uVar11 == 0xf) {
    pbVar15 = pbVar12 + 1;
    pbVar14 = pbVar15;
    if (pbVar1 + -4 < pbVar15) goto LAB_100f751f;
    uVar11 = (uint)*pbVar12;
    if (uVar11 == 0xff) {
      uVar11 = 0xff;
      do {
        pbVar15 = pbVar14 + 1;
        if (pbVar1 + -4 < pbVar15) goto LAB_100f7590;
        bVar3 = *pbVar14;
        uVar11 = uVar11 + bVar3;
        if ((int)uVar11 < 0) goto LAB_100f7590;
        pbVar14 = pbVar15;
      } while (bVar3 == 0xff);
    }
    uVar11 = uVar11 + 0xf;
    pbVar12 = pbVar15;
    pbVar14 = pbVar15;
    if (CARRY4((uint)pbVar18,uVar11)) goto LAB_100f751f;
  }
LAB_100f73f5:
  uVar11 = uVar11 + 4;
  goto LAB_100f73f8;
LAB_100f7590:
  pbVar14 = pbVar14 + 1;
LAB_100f751f:
  return param_1 + ~(uint)pbVar14;
}

