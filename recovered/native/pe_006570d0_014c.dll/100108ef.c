/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100108ef */

undefined8 FUN_100108ef(byte *param_1,byte *param_2,uint param_3,uint param_4,size_t param_5)

{
  byte *pbVar1;
  ushort uVar2;
  longlong lVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  char cVar21;
  bool bVar22;
  uint local_48;
  byte *local_40;
  uint local_38;
  
  if (param_3 != 0 || param_4 != 0) {
    uVar9 = param_4 >> 0x14;
    uVar17 = (param_4 & 0xfffff) + 0xfffff + (uint)(param_3 != 0) + (uint)(0xfffffffe < param_3 - 1)
    ;
    if (uVar9 == 0) {
      uVar17 = param_4 & 0xfffff;
    }
    iVar18 = -0x432;
    if (uVar9 != 0) {
      iVar18 = uVar9 - 0x433;
    }
    uVar9 = param_5 + 1;
    local_40 = param_1;
    local_38 = 0;
    local_48 = 0;
    if (iVar18 < -0x34) {
LAB_10010c59:
      uVar14 = (uint)-iVar18 >> 4;
      uVar5 = (uint)(byte)(&DAT_1028baa4)[uVar14];
      iVar20 = *(ushort *)(&DAT_1028baea + uVar14 * 2) - uVar5;
      uVar2 = *(ushort *)(&DAT_1028baec + uVar14 * 2);
      uVar15 = local_48;
      uVar14 = 199;
      if (199 < uVar5) {
        uVar14 = uVar5;
      }
      do {
        uVar6 = iVar20 + uVar5;
        if (uVar6 < uVar2) {
          uVar6 = FUN_1000aae1(param_3 << 8,uVar17 << 8 | param_3 >> 0x18,
                               &DAT_102a33a0 + uVar6 * 0x18,-iVar18 & 0xfU | 0x80);
          if (uVar15 == 0) {
            if (uVar6 == 0) goto LAB_10010e8b;
            local_48 = 9;
            if ((((uVar6 < 100000000) && (local_48 = 8, uVar6 < 10000000)) &&
                ((local_48 = 7, uVar6 < 1000000 &&
                 (((local_48 = 6, uVar6 < 100000 && (local_48 = 5, uVar6 < 10000)) &&
                  (local_48 = 4, uVar6 < 1000)))))) && (local_48 = 3, uVar6 < 100)) {
              local_48 = 2 - (uVar6 < 10);
            }
            local_38 = (~uVar5 * 9 + local_48) - 1;
            if (uVar9 < local_48) goto LAB_10010ee5;
            if (param_5 == 0) {
              if (local_40 == param_2) goto LAB_100110cd;
              *local_40 = (char)uVar6 + 0x30;
              local_40 = local_40 + 1;
            }
            else {
              if ((int)param_2 - (int)local_40 <= (int)local_48) goto LAB_100110cd;
              uVar15 = 0;
              if (9999 < uVar6) {
                iVar16 = 0;
                uVar15 = uVar6;
                do {
                  uVar6 = uVar15 / 10000;
                  *(undefined2 *)(local_40 + iVar16 + (local_48 - 1)) =
                       (&DAT_1028b698)[(uVar15 % 10000) % 100];
                  *(undefined2 *)(local_40 + iVar16 + (local_48 - 3)) =
                       (&DAT_1028b698)[(uVar15 % 10000) / 100];
                  iVar16 = iVar16 + -4;
                  bVar22 = 99999999 < uVar15;
                  uVar15 = uVar6;
                } while (bVar22);
                uVar15 = -iVar16;
              }
              uVar7 = uVar6;
              if (99 < uVar6) {
                uVar7 = (uVar6 & 0xffff) / 100;
                *(undefined2 *)(local_40 + ~uVar15 + local_48) =
                     (&DAT_1028b698)[uVar6 + uVar7 * -100 & 0xffff];
              }
              if (uVar7 < 10) {
                local_40[1] = 0x2e;
                bVar13 = (byte)uVar7 | 0x30;
              }
              else {
                local_40[2] = *(byte *)((int)&DAT_1028b698 + uVar7 * 2 + 1);
                local_40[1] = 0x2e;
                bVar13 = *(byte *)(&DAT_1028b698 + uVar7);
              }
              *local_40 = bVar13;
              local_40 = local_40 + local_48 + 1;
            }
          }
          else {
LAB_10010e5a:
            local_48 = uVar15 + 9;
            if (uVar9 < local_48) goto LAB_10010ec8;
            if ((int)param_2 - (int)local_40 < 9) goto LAB_100110cd;
            FUN_100088d0(uVar6,local_40);
            local_40 = local_40 + 9;
          }
        }
        else {
          uVar6 = 0;
          if (uVar15 != 0) goto LAB_10010e5a;
LAB_10010e8b:
          local_48 = 0;
        }
        bVar22 = uVar5 != uVar14;
        uVar5 = uVar5 + 1;
        uVar15 = local_48;
      } while (bVar22);
    }
    else {
      uVar5 = iVar18 + 0xfU >> 4;
      local_48 = 0;
      if (iVar18 < 0) {
        uVar5 = 0;
      }
      uVar2 = (&DAT_1028ba24)[uVar5];
      local_38 = 0;
      uVar14 = (uVar5 * 0x134410 >> 0x12) * 0x1c72 + 0x2c722 >> 0x10;
      do {
        uVar6 = FUN_1000aae1(param_3 << 8,uVar17 << 8 | param_3 >> 0x18,
                             &DAT_1029c0e0 + (uVar14 - 1) * 0x18 + (uint)uVar2 * 0x18,
                             (uVar5 * 0x10 - iVar18) + 0x80);
        if (local_48 == 0) {
          if (uVar6 == 0) {
            local_48 = 0;
          }
          else {
            local_48 = 9;
            if (((((uVar6 < 100000000) && (local_48 = 8, uVar6 < 10000000)) &&
                 (local_48 = 7, uVar6 < 1000000)) &&
                ((local_48 = 6, uVar6 < 100000 && (local_48 = 5, uVar6 < 10000)))) &&
               ((local_48 = 4, uVar6 < 1000 && (local_48 = 3, uVar6 < 100)))) {
              local_48 = 2 - (uVar6 < 10);
            }
            local_38 = ((uVar14 - 1) * 9 + local_48) - 1;
            if (uVar9 < local_48) goto LAB_10010ee5;
            if (param_5 == 0) {
              if (local_40 == param_2) goto LAB_100110cd;
              *local_40 = (char)uVar6 + 0x30;
              local_40 = local_40 + 1;
            }
            else {
              if ((int)param_2 - (int)local_40 <= (int)local_48) goto LAB_100110cd;
              uVar15 = 0;
              if (9999 < uVar6) {
                iVar20 = 0;
                uVar15 = uVar6;
                do {
                  uVar6 = uVar15 / 10000;
                  *(undefined2 *)(local_40 + iVar20 + (local_48 - 1)) =
                       (&DAT_1028b698)[(uVar15 % 10000) % 100];
                  *(undefined2 *)(local_40 + iVar20 + (local_48 - 3)) =
                       (&DAT_1028b698)[(uVar15 % 10000) / 100];
                  iVar20 = iVar20 + -4;
                  bVar22 = 99999999 < uVar15;
                  uVar15 = uVar6;
                } while (bVar22);
                uVar15 = -iVar20;
              }
              uVar7 = uVar6;
              if (99 < uVar6) {
                uVar7 = (uVar6 & 0xffff) / 100;
                *(undefined2 *)(local_40 + ~uVar15 + local_48) =
                     (&DAT_1028b698)[uVar6 + uVar7 * -100 & 0xffff];
              }
              if (uVar7 < 10) {
                local_40[1] = 0x2e;
                bVar13 = (byte)uVar7 | 0x30;
              }
              else {
                local_40[2] = *(byte *)((int)&DAT_1028b698 + uVar7 * 2 + 1);
                local_40[1] = 0x2e;
                bVar13 = *(byte *)(&DAT_1028b698 + uVar7);
              }
              *local_40 = bVar13;
              local_40 = local_40 + local_48 + 1;
            }
          }
        }
        else {
          uVar15 = local_48;
          if (uVar9 < local_48 + 9) goto LAB_10010ec8;
          if ((int)param_2 - (int)local_40 < 9) goto LAB_100110cd;
          FUN_100088d0(uVar6,local_40);
          local_40 = local_40 + 9;
          local_48 = local_48 + 9;
        }
        bVar22 = 1 < uVar14;
        uVar14 = uVar14 - 1;
      } while (bVar22);
      if (iVar18 < 0) goto LAB_10010c59;
    }
    uVar5 = uVar9 - local_48;
    uVar14 = 0;
    uVar6 = 0;
    uVar15 = local_48;
    goto LAB_10010f98;
  }
  uVar10 = 0x84;
  if ((int)param_2 - (int)param_1 < (int)((param_5 - (param_5 == 0)) + 6)) goto LAB_100111c0;
  *param_1 = 0x30;
  if (param_5 == 0) {
    local_40 = param_1 + 1;
  }
  else {
    param_1[1] = 0x2e;
    _memset(param_1 + 2,0x30,param_5);
    local_40 = param_1 + param_5 + 2;
  }
  local_40[0] = 0x65;
  local_40[1] = 0x2b;
  local_40[2] = 0x30;
  local_40[3] = 0x30;
  goto LAB_100111bb;
LAB_10010ec8:
  local_48 = 9;
  goto LAB_10010ee7;
LAB_10010ee5:
  uVar15 = 0;
LAB_10010ee7:
  uVar5 = uVar9 - uVar15;
  uVar14 = 0;
  iVar20 = local_48 - uVar5;
  if (local_48 < uVar5 || iVar20 == 0) {
LAB_10010f98:
    cVar21 = 5 < uVar14;
  }
  else {
    iVar20 = iVar20 + (uint)(iVar20 == 0);
    do {
      uVar14 = uVar6;
      uVar6 = uVar14 / 10;
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
    uVar14 = uVar14 + (uVar14 / 5 & 0xfffffffe) * -5;
    if (uVar14 != 5) goto LAB_10010f98;
    iVar20 = uVar9 - local_38;
    uVar9 = -(iVar18 + iVar20);
    if ((int)uVar9 < 1) {
      bVar22 = true;
LAB_100111d0:
      if ((-1 < iVar20) || (!bVar22)) {
        if ((bool)(-1 < iVar20 & bVar22)) goto LAB_1001127b;
        goto LAB_10011263;
      }
      uVar9 = 0xffffffff;
      do {
        lVar3 = (ulonglong)uVar17 * 0xcccccccd + ((ulonglong)param_3 * 0xcccccccd >> 0x20);
        uVar11 = (uint)((ulonglong)lVar3 >> 0x20);
        uVar12 = (uint)((ulonglong)param_3 * 0xcccccccc >> 0x20);
        uVar14 = (uint)CARRY4((uint)((ulonglong)param_3 * 0xcccccccc),(uint)lVar3);
        uVar7 = uVar12 + uVar11;
        uVar19 = uVar7 + uVar14;
        uVar8 = (uint)((ulonglong)uVar17 * 0xcccccccc);
        uVar14 = (int)((ulonglong)uVar17 * 0xcccccccc >> 0x20) +
                 (uint)(CARRY4(uVar12,uVar11) || CARRY4(uVar7,uVar14)) + (uint)CARRY4(uVar8,uVar19);
        uVar17 = uVar14 >> 2;
        uVar14 = uVar14 * 0x40000000 | uVar8 + uVar19 >> 2;
        uVar9 = uVar9 + 1;
        bVar22 = uVar14 * 5 == param_3;
        param_3 = uVar14;
      } while (bVar22);
      if (uVar9 < (uint)-iVar20) goto LAB_10011263;
LAB_1001127b:
      cVar21 = '\x02';
    }
    else {
      if (uVar9 < 0x3b || iVar18 + iVar20 == -0x3b) {
        uVar14 = -1 << ((byte)uVar9 & 0x1f);
        uVar7 = 0;
        if ((uVar9 & 0x20) == 0) {
          uVar7 = uVar14;
          uVar14 = 0xffffffff;
        }
        bVar22 = (~uVar7 & param_3) == 0 && (~uVar14 & uVar17) == 0;
        goto LAB_100111d0;
      }
LAB_10011263:
      cVar21 = '\x01';
    }
  }
  if (uVar15 == 0) {
    if (param_5 == 0) {
      if (local_40 == param_2) {
LAB_100110cd:
        uVar10 = 0x84;
        goto LAB_100111c0;
      }
      *local_40 = (char)uVar6 + 0x30;
      local_40 = local_40 + 1;
    }
    else {
      uVar10 = 0x84;
      if ((int)param_2 - (int)local_40 < (int)(uVar5 + 1)) goto LAB_100111c0;
      uVar17 = 0;
      if (9999 < uVar6) {
        iVar18 = 0;
        uVar17 = uVar6;
        do {
          uVar6 = uVar17 / 10000;
          *(undefined2 *)(local_40 + iVar18 + (uVar5 - 1)) = (&DAT_1028b698)[(uVar17 % 10000) % 100]
          ;
          *(undefined2 *)(local_40 + iVar18 + (uVar5 - 3)) = (&DAT_1028b698)[(uVar17 % 10000) / 100]
          ;
          iVar18 = iVar18 + -4;
          bVar22 = 99999999 < uVar17;
          uVar17 = uVar6;
        } while (bVar22);
        uVar17 = -iVar18;
      }
      uVar9 = uVar6;
      if (99 < uVar6) {
        uVar9 = (uVar6 & 0xffff) / 100;
        *(undefined2 *)(local_40 + ~uVar17 + uVar5) = (&DAT_1028b698)[uVar6 + uVar9 * -100 & 0xffff]
        ;
      }
      if (uVar9 < 10) {
        local_40[1] = 0x2e;
        bVar13 = (byte)uVar9 | 0x30;
      }
      else {
        local_40[2] = *(byte *)((int)&DAT_1028b698 + uVar9 * 2 + 1);
        local_40[1] = 0x2e;
        bVar13 = *(byte *)(&DAT_1028b698 + uVar9);
      }
      *local_40 = bVar13;
      local_40 = local_40 + uVar5 + 1;
    }
  }
  else {
    uVar10 = 0x84;
    if ((int)param_2 - (int)local_40 < (int)uVar5) goto LAB_100111c0;
    if (uVar6 == 0) {
      _memset(local_40,0x30,uVar5);
    }
    else {
      FUN_1000ad1a(uVar5,uVar6,local_40);
    }
    local_40 = local_40 + uVar5;
  }
  pbVar1 = local_40;
  if (cVar21 != '\0') {
    while (pbVar4 = pbVar1, pbVar4 != param_1) {
      pbVar1 = pbVar4 + -1;
      bVar13 = pbVar4[-1];
      if (bVar13 != 0x2e) {
        if (bVar13 != 0x39) {
          if ((cVar21 == '\x01') || ((bVar13 & 1) != 0)) {
            pbVar4[-1] = bVar13 + 1;
          }
          goto LAB_1001114d;
        }
        *pbVar1 = 0x30;
        cVar21 = '\x01';
      }
    }
    *pbVar4 = 0x31;
    local_38 = local_38 + 1;
  }
LAB_1001114d:
  uVar17 = -local_38;
  if ((int)-local_38 < 0) {
    uVar17 = local_38;
  }
  uVar10 = 0x84;
  if ((int)(5 - (uint)(uVar17 < 100)) <= (int)param_2 - (int)local_40) {
    *local_40 = 0x65;
    local_40[1] = (char)((int)local_38 >> 0x1f) * -2 + 0x2b;
    if (uVar17 < 100) {
      *(undefined2 *)(local_40 + 2) = (&DAT_1028b698)[uVar17];
LAB_100111bb:
      param_2 = local_40 + 4;
    }
    else {
      *(undefined2 *)(local_40 + 2) = (&DAT_1028b698)[uVar17 / 10];
      local_40[4] = (char)uVar17 + (char)(uVar17 / 10) * -10 | 0x30;
      param_2 = local_40 + 5;
    }
    uVar10 = 0;
  }
LAB_100111c0:
  return CONCAT44(uVar10,param_2);
}

