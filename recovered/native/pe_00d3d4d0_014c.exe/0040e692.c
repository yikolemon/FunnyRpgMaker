/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040e692 */

undefined4 * __cdecl
FUN_0040e692(undefined4 *param_1,byte *param_2,byte *param_3,uint param_4,uint param_5,
            size_t param_6)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  size_t sVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  undefined4 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  undefined *puVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  char cVar22;
  bool bVar23;
  byte *local_44;
  
  if (param_4 == 0 && param_5 == 0) {
    uVar10 = 0x84;
    if ((int)((param_6 - (param_6 == 0)) + 2) <= (int)param_3 - (int)param_2) {
      *param_2 = 0x30;
      if (param_6 == 0) {
        pbVar12 = param_2 + 1;
LAB_0040e967:
        param_3 = pbVar12;
        uVar10 = 0;
      }
      else {
        param_2[1] = 0x2e;
        FUN_0040e201(param_2 + 2,0x30,param_6);
        uVar10 = 0;
        param_3 = param_2 + param_6 + 2;
      }
    }
    goto LAB_0040ec27;
  }
  uVar7 = param_5 >> 0x14;
  iVar19 = uVar7 - 0x433;
  uVar17 = (param_5 & 0xfffff) + 0xfffff + (uint)(param_4 != 0) + (uint)(0xfffffffe < param_4 - 1);
  if (uVar7 == 0) {
    iVar19 = -0x433;
    uVar17 = param_5 & 0xfffff;
  }
  iVar8 = -0x432;
  if (uVar7 != 0) {
    iVar8 = iVar19;
  }
  local_44 = param_2;
  if (-0x35 < iVar8) {
    uVar7 = iVar8 + 0xfU >> 4;
    bVar23 = false;
    if (iVar8 < 0) {
      uVar7 = 0;
    }
    uVar18 = (uVar7 * 0x134410 >> 0x12) * 0x1c72 + 0x2c722 >> 0x10;
    while( true ) {
      puVar14 = &UNK_004b2238 + uVar18 * 0x18;
      iVar19 = uVar18 + 1;
      do {
        iVar6 = iVar19;
        iVar19 = iVar6 + -1;
        if (iVar19 < 1) {
          if (bVar23) goto LAB_0040e8cf;
          goto LAB_0040e8c2;
        }
        uVar18 = FUN_00410386(param_4 << 8,uVar17 << 8 | param_4 >> 0x18,
                              (uint *)(puVar14 + (uint)(ushort)(&DAT_004a9514)[uVar7] * 0x18),
                              (uVar7 * 0x10 - iVar8) + 0x80);
        if (bVar23) {
          if ((int)param_3 - (int)local_44 < 9) goto LAB_0040eaba;
          FUN_0040e175(uVar18,(char *)local_44);
          iVar19 = 9;
          goto LAB_0040e850;
        }
        puVar14 = puVar14 + -0x18;
        bVar23 = false;
      } while (uVar18 == 0);
      iVar19 = 9;
      if (((((uVar18 < 100000000) && (iVar19 = 8, uVar18 < 10000000)) &&
           (iVar19 = 7, uVar18 < 1000000)) &&
          ((iVar19 = 6, uVar18 < 100000 && (iVar19 = 5, uVar18 < 10000)))) &&
         ((iVar19 = 4, uVar18 < 1000 && (iVar19 = 3, uVar18 < 100)))) {
        iVar19 = 2 - (uint)(uVar18 < 10);
      }
      if ((int)param_3 - (int)local_44 < iVar19) break;
      FUN_0040e0a5(iVar19,uVar18,local_44);
LAB_0040e850:
      local_44 = local_44 + iVar19;
      uVar18 = iVar6 - 2;
      bVar23 = true;
    }
LAB_0040eaba:
    uVar10 = 0x84;
    goto LAB_0040ec27;
  }
LAB_0040e8c2:
  if (local_44 == param_3) {
LAB_0040ec22:
    uVar10 = 0x84;
    goto LAB_0040ec27;
  }
  *local_44 = 0x30;
  local_44 = local_44 + 1;
LAB_0040e8cf:
  if (param_6 != 0) {
    if (local_44 == param_3) goto LAB_0040ec22;
    *local_44 = 0x2e;
    local_44 = local_44 + 1;
  }
  if (iVar8 < 0) {
    uVar20 = (uint)-iVar8 >> 4;
    uVar18 = param_6 / 9;
    uVar7 = (uint)(byte)(&DAT_004a9594)[uVar20];
    if (uVar18 < uVar7) goto joined_r0x0040e93d;
    uVar13 = 0;
    if (0xffffffc1 < uVar20 - 0x44) {
      sVar4 = uVar7 * 9;
      if ((int)param_3 - (int)local_44 < (int)sVar4) {
LAB_0040eb97:
        uVar10 = 0x84;
        goto LAB_0040ec27;
      }
      FUN_0040e201(local_44,0x30,sVar4);
      local_44 = local_44 + sVar4;
      uVar13 = uVar7;
    }
    uVar2 = *(ushort *)(&DAT_004a95da + uVar20 * 2);
    uVar3 = *(ushort *)(&DAT_004a95dc + uVar20 * 2);
    uVar20 = (uVar2 - uVar7) + uVar13;
    if (uVar20 < uVar3) {
      puVar15 = (uint *)(&DAT_004b9510 + uVar20 * 0x18);
      iVar19 = (int)param_3 - (int)local_44;
LAB_0040ea1b:
      uVar20 = FUN_00410386(param_4 << 8,uVar17 << 8 | param_4 >> 0x18,puVar15,-iVar8 & 0xfU | 0x80)
      ;
      if (uVar18 != uVar13) {
        if (8 < iVar19) goto code_r0x0040ea45;
        goto LAB_0040eb97;
      }
      uVar13 = param_6 % 9;
      uVar7 = 0;
      if (uVar13 - 9 == 0) goto LAB_0040eb6e;
      uVar16 = 0;
      do {
        uVar7 = uVar20;
        uVar20 = uVar7 / 10;
        uVar16 = uVar16 + 1;
      } while (uVar16 < -(uVar13 - 9));
      uVar7 = uVar7 + (uVar7 / 5 & 0xfffffffe) * -5;
      if (uVar7 == 5) {
        uVar7 = ~param_6 - iVar8;
        if ((int)uVar7 < 1) {
          cVar22 = '\x02';
        }
        else {
          if (uVar7 < 0x3c) {
            uVar16 = -1 << ((byte)uVar7 & 0x1f);
            uVar21 = 0;
            if ((uVar7 & 0x20) == 0) {
              uVar21 = uVar16;
              uVar16 = 0xffffffff;
            }
            bVar23 = (param_4 & ~uVar21) == 0 && (uVar17 & ~uVar16) == 0;
          }
          else {
            bVar23 = false;
          }
          cVar22 = bVar23 + '\x01';
        }
      }
      else {
LAB_0040eb6e:
        cVar22 = 5 < uVar7;
      }
      pbVar12 = local_44;
      if (uVar13 != 0) {
        if ((int)uVar13 <= iVar19) {
          FUN_004105bf(uVar13,uVar20,(int)local_44);
          pbVar12 = local_44 + uVar13;
          goto LAB_0040ebb6;
        }
        goto LAB_0040eb97;
      }
LAB_0040ebb6:
      if (cVar22 == '\0') goto LAB_0040e967;
      if (pbVar12 == param_2) {
        *pbVar12 = 0x31;
LAB_0040ec13:
        if (pbVar12 != param_3) {
          *pbVar12 = 0x30;
          pbVar12 = pbVar12 + 1;
          goto LAB_0040e95f;
        }
        goto LAB_0040ec22;
      }
      pbVar5 = local_44 + ~(uVar18 * 9) + param_6;
      pbVar11 = param_3;
      while (pbVar9 = pbVar5, bVar1 = *pbVar9, bVar1 == 0x39) {
        *pbVar9 = 0x30;
        cVar22 = '\x01';
LAB_0040ebee:
        pbVar5 = pbVar9 + -1;
        if (pbVar9 == param_2) {
          *pbVar9 = 0x31;
          if (pbVar11 != param_3) {
            pbVar11[0] = 0x30;
            pbVar11[1] = 0x2e;
          }
          goto LAB_0040ec13;
        }
      }
      pbVar11 = pbVar9;
      if (bVar1 == 0x2e) goto LAB_0040ebee;
      if ((cVar22 == '\x01') || ((bVar1 & 1) != 0)) {
        *pbVar9 = bVar1 + 1;
      }
      goto LAB_0040e95f;
    }
LAB_0040ea78:
    param_6 = param_6 + uVar13 * -9;
    uVar10 = 0x84;
    if ((int)param_3 - (int)local_44 < (int)param_6) goto LAB_0040ec27;
    if (param_6 != 0) {
      FUN_0040e201(local_44,0x30,param_6);
    }
  }
  else {
joined_r0x0040e93d:
    uVar10 = 0x84;
    if ((int)param_3 - (int)local_44 < (int)param_6) goto LAB_0040ec27;
    if (param_6 != 0) {
      FUN_0040e201(local_44,0x30,param_6);
    }
  }
  pbVar12 = local_44 + param_6;
LAB_0040e95f:
  uVar10 = 0;
  param_3 = pbVar12;
LAB_0040ec27:
  *param_1 = param_3;
  param_1[1] = uVar10;
  return param_1;
code_r0x0040ea45:
  FUN_0040e175(uVar20,(char *)local_44);
  local_44 = local_44 + 9;
  puVar15 = puVar15 + 6;
  iVar19 = iVar19 + -9;
  iVar6 = (uVar2 - uVar7) + uVar13;
  uVar13 = uVar13 + 1;
  if ((uint)uVar3 <= iVar6 + 1U) goto LAB_0040ea78;
  goto LAB_0040ea1b;
}

