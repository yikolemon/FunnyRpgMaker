/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047d8bc */

void __fastcall FUN_0047d8bc(int *param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  char *pcVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined4 uVar23;
  int iVar24;
  uint uVar25;
  byte *local_68;
  byte *local_64;
  
  iVar7 = param_1[7];
  local_64 = (byte *)*param_1;
  pbVar3 = local_64 + param_1[1] + -5;
  iVar24 = param_1[4];
  bVar4 = *(byte *)(iVar7 + 0x58);
  local_68 = (byte *)param_1[3];
  pbVar13 = local_68 + (iVar24 - param_2);
  uVar8 = *(uint *)(iVar7 + 0x34);
  pbVar14 = local_68 + iVar24 + -0x101;
  bVar5 = *(byte *)(iVar7 + 0x5c);
  iVar19 = ((param_2 + uVar8) - iVar24) - (int)local_68;
  iVar24 = *(int *)(iVar7 + 0x2c);
  uVar9 = *(uint *)(iVar7 + 0x30);
  pbVar10 = *(byte **)(iVar7 + 0x38);
  uVar25 = *(uint *)(iVar7 + 0x3c);
  uVar20 = *(uint *)(iVar7 + 0x40);
  iVar11 = *(int *)(iVar7 + 0x50);
  iVar12 = *(int *)(iVar7 + 0x54);
LAB_0047d96c:
  if (uVar20 < 0xf) {
    bVar6 = *local_64;
    pbVar17 = local_64 + 1;
    local_64 = local_64 + 2;
    uVar25 = ((uint)*pbVar17 << ((byte)uVar20 + 8 & 0x1f)) +
             ((uint)bVar6 << ((byte)uVar20 & 0x1f)) + uVar25;
    uVar20 = uVar20 | 0x10;
  }
  pbVar17 = (byte *)(iVar11 + (uVar25 & ~(-1 << (bVar4 & 0x1f))) * 4);
  while( true ) {
    uVar25 = uVar25 >> (pbVar17[1] & 0x1f);
    uVar20 = uVar20 - pbVar17[1];
    bVar6 = *pbVar17;
    if (bVar6 == 0) break;
    if ((bVar6 & 0x10) != 0) {
      uVar21 = (uint)*(ushort *)(pbVar17 + 2);
      uVar15 = bVar6 & 0xf;
      if ((bVar6 & 0xf) != 0) {
        if (uVar20 < uVar15) {
          bVar6 = *local_64;
          local_64 = local_64 + 1;
          uVar25 = uVar25 + ((uint)bVar6 << ((byte)uVar20 & 0x1f));
          uVar20 = uVar20 + 8;
        }
        uVar21 = uVar21 + (~(-1 << (sbyte)uVar15) & uVar25);
        uVar25 = uVar25 >> (sbyte)uVar15;
        uVar20 = uVar20 - uVar15;
      }
      if (uVar20 < 0xf) {
        bVar6 = *local_64;
        pbVar17 = local_64 + 1;
        local_64 = local_64 + 2;
        uVar25 = ((uint)*pbVar17 << ((byte)uVar20 + 8 & 0x1f)) +
                 ((uint)bVar6 << ((byte)uVar20 & 0x1f)) + uVar25;
        uVar20 = uVar20 | 0x10;
      }
      pbVar17 = (byte *)(iVar12 + (uVar25 & ~(-1 << (bVar5 & 0x1f))) * 4);
      uVar25 = uVar25 >> (pbVar17[1] & 0x1f);
      uVar20 = uVar20 - pbVar17[1];
      bVar6 = *pbVar17;
      goto LAB_0047da7a;
    }
    if ((bVar6 & 0x40) != 0) {
      uVar23 = 0x3f3f;
      pcVar18 = "invalid literal/length code";
      if ((bVar6 & 0x20) != 0) goto LAB_0047dd30;
      goto LAB_0047dd24;
    }
    pbVar17 = (byte *)(iVar11 + (uint)*(ushort *)(pbVar17 + 2) * 4 +
                      (~(-1 << (bVar6 & 0x1f)) & uVar25) * 4);
  }
  *local_68 = pbVar17[2];
  local_68 = local_68 + 1;
  goto LAB_0047d9e7;
LAB_0047da7a:
  if ((bVar6 & 0x10) != 0) goto LAB_0047daad;
  if ((bVar6 & 0x40) != 0) {
    pcVar18 = "invalid distance code";
    goto LAB_0047dd24;
  }
  pbVar17 = (byte *)(iVar12 + (uint)*(ushort *)(pbVar17 + 2) * 4 +
                    (~(-1 << (bVar6 & 0x1f)) & uVar25) * 4);
  uVar25 = uVar25 >> (pbVar17[1] & 0x1f);
  uVar20 = uVar20 - pbVar17[1];
  bVar6 = *pbVar17;
  goto LAB_0047da7a;
LAB_0047daad:
  uVar16 = bVar6 & 0xf;
  uVar15 = uVar20;
  if (uVar20 < uVar16) {
    uVar25 = ((uint)*local_64 << ((byte)uVar20 & 0x1f)) + uVar25;
    uVar15 = uVar20 + 8;
    if (uVar15 < uVar16) {
      pbVar1 = local_64 + 1;
      local_64 = local_64 + 2;
      uVar25 = uVar25 + ((uint)*pbVar1 << ((byte)uVar15 & 0x1f));
      uVar15 = uVar20 + 0x10;
    }
    else {
      local_64 = local_64 + 1;
    }
  }
  uVar22 = ~(-1 << (sbyte)uVar16) & uVar25;
  uVar2 = uVar22 + *(ushort *)(pbVar17 + 2);
  uVar25 = uVar25 >> (sbyte)uVar16;
  uVar20 = uVar15 - uVar16;
  uVar15 = uVar2 - ((int)local_68 - (int)pbVar13);
  if (uVar2 < (uint)((int)local_68 - (int)pbVar13) || uVar15 == 0) {
    uVar15 = 0;
    uVar16 = uVar21;
    do {
      uVar22 = uVar15;
      local_68[uVar22] = local_68[uVar22 - uVar2];
      local_68[uVar22 + 1] = local_68[uVar22 + (1 - uVar2)];
      local_68[uVar22 + 2] = local_68[uVar22 + (2 - uVar2)];
      uVar16 = uVar16 - 3;
      uVar15 = uVar22 + 3;
    } while (2 < uVar16);
    if (uVar15 == uVar21) {
      local_68 = local_68 + uVar15;
    }
    else {
      local_68[uVar15] = local_68[uVar15 + -uVar2];
      if (uVar15 - uVar21 == -2) {
        local_68[uVar22 + 4] = local_68[-uVar2 + 1 + uVar15];
        local_68 = local_68 + uVar22 + 5;
      }
      else {
        local_68 = local_68 + uVar22 + 4;
      }
    }
    goto LAB_0047d9e7;
  }
  if ((uVar9 < uVar15) && (*(int *)(iVar7 + 0x1bc4) != 0)) {
    pcVar18 = "invalid distance too far back";
LAB_0047dd24:
    param_1[6] = (int)pcVar18;
    uVar23 = 0x3f51;
LAB_0047dd30:
    *(undefined4 *)(iVar7 + 4) = uVar23;
LAB_0047dd3a:
    iVar24 = (int)local_64 - (uVar20 >> 3);
    *param_1 = iVar24;
    param_1[3] = (int)local_68;
    param_1[1] = (int)(pbVar3 + (5 - iVar24));
    param_1[4] = (int)(pbVar14 + (0x101 - (int)local_68));
    *(uint *)(iVar7 + 0x3c) = ~(-1 << (sbyte)(uVar20 & 7)) & uVar25;
    *(uint *)(iVar7 + 0x40) = uVar20 & 7;
    return;
  }
  uVar16 = uVar21;
  if (uVar8 == 0) {
    uVar22 = uVar21 - uVar15;
    pbVar17 = pbVar10 + (iVar24 - uVar15);
    if (uVar15 <= uVar21 && uVar22 != 0) {
      uVar21 = 0;
      do {
        local_68[uVar21] = (pbVar10 + (iVar24 - uVar15))[uVar21];
        uVar21 = uVar21 + 1;
      } while (uVar15 != uVar21);
LAB_0047dc72:
      local_68 = local_68 + uVar21;
      uVar16 = uVar22;
      pbVar17 = local_68 + -uVar2;
    }
  }
  else if (uVar8 < uVar15) {
    uVar16 = uVar21 - (uVar15 - uVar8);
    if (uVar21 < uVar15 - uVar8 || uVar16 == 0) {
      uVar16 = uVar21;
      pbVar17 = pbVar10 + ((uVar8 + iVar24) - uVar15);
    }
    else {
      pbVar17 = local_68 + ((iVar19 - uVar22) - (uint)*(ushort *)(pbVar17 + 2));
      do {
        *local_68 = pbVar10[(int)(pbVar17 + iVar24)];
        local_68 = local_68 + 1;
        pbVar17 = pbVar17 + 1;
      } while (pbVar17 != (byte *)0x0);
      pbVar17 = pbVar10;
      if (uVar8 <= uVar16 && uVar16 - uVar8 != 0) {
        uVar15 = 0;
        do {
          *local_68 = pbVar10[uVar15];
          local_68 = local_68 + 1;
          uVar15 = uVar15 + 1;
        } while (uVar8 != uVar15);
        uVar16 = uVar16 - uVar8;
        pbVar17 = local_68 + -uVar2;
      }
    }
  }
  else {
    uVar22 = uVar21 - uVar15;
    pbVar17 = pbVar10 + (uVar8 - uVar15);
    if (uVar15 <= uVar21 && uVar22 != 0) {
      uVar21 = 0;
      do {
        local_68[uVar21] = (pbVar10 + (uVar8 - uVar15))[uVar21];
        uVar21 = uVar21 + 1;
      } while (uVar15 != uVar21);
      goto LAB_0047dc72;
    }
  }
  for (; 2 < uVar16; uVar16 = uVar16 - 3) {
    *local_68 = *pbVar17;
    local_68[1] = pbVar17[1];
    local_68[2] = pbVar17[2];
    local_68 = local_68 + 3;
    pbVar17 = pbVar17 + 3;
  }
  if (uVar16 != 0) {
    *local_68 = *pbVar17;
    if (uVar16 == 2) {
      local_68[1] = pbVar17[1];
      local_68 = local_68 + 2;
    }
    else {
      local_68 = local_68 + 1;
    }
  }
LAB_0047d9e7:
  if ((pbVar3 <= local_64) || (pbVar14 <= local_68)) goto LAB_0047dd3a;
  goto LAB_0047d96c;
}

