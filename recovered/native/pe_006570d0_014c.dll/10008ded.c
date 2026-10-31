/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10008ded */

undefined4 *
FUN_10008ded(undefined4 *param_1,byte *param_2,byte *param_3,uint param_4,uint param_5,uint param_6)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  undefined4 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  undefined *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  char cVar20;
  bool bVar21;
  byte *local_44;
  
  if (param_4 == 0 && param_5 == 0) {
    uVar9 = 0x84;
    if ((int)((param_6 - (param_6 == 0)) + 2) <= (int)param_3 - (int)param_2) {
      *param_2 = 0x30;
      if (param_6 == 0) {
        pbVar11 = param_2 + 1;
LAB_100090c2:
        param_3 = pbVar11;
        uVar9 = 0;
      }
      else {
        param_2[1] = 0x2e;
        FUN_1000895c(param_2 + 2,0x30,param_6);
        uVar9 = 0;
        param_3 = param_2 + param_6 + 2;
      }
    }
    goto LAB_10009382;
  }
  uVar6 = param_5 >> 0x14;
  iVar17 = uVar6 - 0x433;
  uVar15 = (param_5 & 0xfffff) + 0xfffff + (uint)(param_4 != 0) + (uint)(0xfffffffe < param_4 - 1);
  if (uVar6 == 0) {
    iVar17 = -0x433;
    uVar15 = param_5 & 0xfffff;
  }
  iVar7 = -0x432;
  if (uVar6 != 0) {
    iVar7 = iVar17;
  }
  local_44 = param_2;
  if (-0x35 < iVar7) {
    uVar6 = iVar7 + 0xfU >> 4;
    bVar21 = false;
    if (iVar7 < 0) {
      uVar6 = 0;
    }
    uVar16 = (uVar6 * 0x134410 >> 0x12) * 0x1c72 + 0x2c722 >> 0x10;
    while( true ) {
      puVar13 = &UNK_1029c0c8 + uVar16 * 0x18;
      iVar17 = uVar16 + 1;
      do {
        iVar5 = iVar17;
        iVar17 = iVar5 + -1;
        if (iVar17 < 1) {
          if (bVar21) goto LAB_1000902a;
          goto LAB_1000901d;
        }
        uVar16 = FUN_1000aae1(param_4 << 8,uVar15 << 8 | param_4 >> 0x18,
                              puVar13 + (uint)(ushort)(&DAT_1028ba24)[uVar6] * 0x18,
                              (uVar6 * 0x10 - iVar7) + 0x80);
        if (bVar21) {
          if ((int)param_3 - (int)local_44 < 9) goto LAB_10009215;
          FUN_100088d0(uVar16,local_44);
          iVar17 = 9;
          goto LAB_10008fab;
        }
        puVar13 = puVar13 + -0x18;
        bVar21 = false;
      } while (uVar16 == 0);
      iVar17 = 9;
      if (((((uVar16 < 100000000) && (iVar17 = 8, uVar16 < 10000000)) &&
           (iVar17 = 7, uVar16 < 1000000)) &&
          ((iVar17 = 6, uVar16 < 100000 && (iVar17 = 5, uVar16 < 10000)))) &&
         ((iVar17 = 4, uVar16 < 1000 && (iVar17 = 3, uVar16 < 100)))) {
        iVar17 = 2 - (uint)(uVar16 < 10);
      }
      if ((int)param_3 - (int)local_44 < iVar17) break;
      FUN_10008800(iVar17,uVar16,local_44);
LAB_10008fab:
      local_44 = local_44 + iVar17;
      uVar16 = iVar5 - 2;
      bVar21 = true;
    }
LAB_10009215:
    uVar9 = 0x84;
    goto LAB_10009382;
  }
LAB_1000901d:
  if (local_44 == param_3) {
LAB_1000937d:
    uVar9 = 0x84;
    goto LAB_10009382;
  }
  *local_44 = 0x30;
  local_44 = local_44 + 1;
LAB_1000902a:
  if (param_6 != 0) {
    if (local_44 == param_3) goto LAB_1000937d;
    *local_44 = 0x2e;
    local_44 = local_44 + 1;
  }
  if (iVar7 < 0) {
    uVar18 = (uint)-iVar7 >> 4;
    uVar16 = param_6 / 9;
    uVar6 = (uint)(byte)(&DAT_1028baa4)[uVar18];
    if (uVar16 < uVar6) goto joined_r0x10009098;
    uVar12 = 0;
    if (0xffffffc1 < uVar18 - 0x44) {
      iVar17 = uVar6 * 9;
      if ((int)param_3 - (int)local_44 < iVar17) {
LAB_100092f2:
        uVar9 = 0x84;
        goto LAB_10009382;
      }
      FUN_1000895c(local_44,0x30,iVar17);
      local_44 = local_44 + iVar17;
      uVar12 = uVar6;
    }
    uVar2 = *(ushort *)(&DAT_1028baea + uVar18 * 2);
    uVar3 = *(ushort *)(&DAT_1028baec + uVar18 * 2);
    uVar18 = (uVar2 - uVar6) + uVar12;
    if (uVar18 < uVar3) {
      puVar13 = &DAT_102a33a0 + uVar18 * 0x18;
      iVar17 = (int)param_3 - (int)local_44;
LAB_10009176:
      uVar18 = FUN_1000aae1(param_4 << 8,uVar15 << 8 | param_4 >> 0x18,puVar13,-iVar7 & 0xfU | 0x80)
      ;
      if (uVar16 != uVar12) {
        if (8 < iVar17) goto code_r0x100091a0;
        goto LAB_100092f2;
      }
      uVar12 = param_6 % 9;
      uVar6 = 0;
      if (uVar12 - 9 == 0) goto LAB_100092c9;
      uVar14 = 0;
      do {
        uVar6 = uVar18;
        uVar18 = uVar6 / 10;
        uVar14 = uVar14 + 1;
      } while (uVar14 < -(uVar12 - 9));
      uVar6 = uVar6 + (uVar6 / 5 & 0xfffffffe) * -5;
      if (uVar6 == 5) {
        uVar6 = ~param_6 - iVar7;
        if ((int)uVar6 < 1) {
          cVar20 = '\x02';
        }
        else {
          if (uVar6 < 0x3c) {
            uVar14 = -1 << ((byte)uVar6 & 0x1f);
            uVar19 = 0;
            if ((uVar6 & 0x20) == 0) {
              uVar19 = uVar14;
              uVar14 = 0xffffffff;
            }
            bVar21 = (param_4 & ~uVar19) == 0 && (uVar15 & ~uVar14) == 0;
          }
          else {
            bVar21 = false;
          }
          cVar20 = bVar21 + '\x01';
        }
      }
      else {
LAB_100092c9:
        cVar20 = 5 < uVar6;
      }
      pbVar11 = local_44;
      if (uVar12 != 0) {
        if ((int)uVar12 <= iVar17) {
          FUN_1000ad1a(uVar12,uVar18,local_44);
          pbVar11 = local_44 + uVar12;
          goto LAB_10009311;
        }
        goto LAB_100092f2;
      }
LAB_10009311:
      if (cVar20 == '\0') goto LAB_100090c2;
      if (pbVar11 == param_2) {
        *pbVar11 = 0x31;
LAB_1000936e:
        if (pbVar11 != param_3) {
          *pbVar11 = 0x30;
          pbVar11 = pbVar11 + 1;
          goto LAB_100090ba;
        }
        goto LAB_1000937d;
      }
      pbVar4 = local_44 + ~(uVar16 * 9) + param_6;
      pbVar10 = param_3;
      while (pbVar8 = pbVar4, bVar1 = *pbVar8, bVar1 == 0x39) {
        *pbVar8 = 0x30;
        cVar20 = '\x01';
LAB_10009349:
        pbVar4 = pbVar8 + -1;
        if (pbVar8 == param_2) {
          *pbVar8 = 0x31;
          if (pbVar10 != param_3) {
            pbVar10[0] = 0x30;
            pbVar10[1] = 0x2e;
          }
          goto LAB_1000936e;
        }
      }
      pbVar10 = pbVar8;
      if (bVar1 == 0x2e) goto LAB_10009349;
      if ((cVar20 == '\x01') || ((bVar1 & 1) != 0)) {
        *pbVar8 = bVar1 + 1;
      }
      goto LAB_100090ba;
    }
LAB_100091d3:
    param_6 = param_6 + uVar12 * -9;
    uVar9 = 0x84;
    if ((int)param_3 - (int)local_44 < (int)param_6) goto LAB_10009382;
    if (param_6 != 0) {
      FUN_1000895c(local_44,0x30,param_6);
    }
  }
  else {
joined_r0x10009098:
    uVar9 = 0x84;
    if ((int)param_3 - (int)local_44 < (int)param_6) goto LAB_10009382;
    if (param_6 != 0) {
      FUN_1000895c(local_44,0x30,param_6);
    }
  }
  pbVar11 = local_44 + param_6;
LAB_100090ba:
  uVar9 = 0;
  param_3 = pbVar11;
LAB_10009382:
  *param_1 = param_3;
  param_1[1] = uVar9;
  return param_1;
code_r0x100091a0:
  FUN_100088d0(uVar18,local_44);
  local_44 = local_44 + 9;
  puVar13 = puVar13 + 0x18;
  iVar17 = iVar17 + -9;
  iVar5 = (uVar2 - uVar6) + uVar12;
  uVar12 = uVar12 + 1;
  if ((uint)uVar3 <= iVar5 + 1U) goto LAB_100091d3;
  goto LAB_10009176;
}

