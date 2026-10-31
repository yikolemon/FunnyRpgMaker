/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101740d6 */

undefined4 __fastcall FUN_101740d6(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  char *pcVar8;
  byte bVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  int local_3c;
  uint local_38;
  uint local_20;
  int iVar15;
  
  pbVar6 = *(byte **)(param_1 + 0xac);
  if (*(byte **)(param_1 + 0xb0) <= pbVar6) {
    if (*(int *)(param_1 + 0x20) == 0) {
      bVar9 = 0;
      goto LAB_1017411b;
    }
    FUN_10170e8c();
    pbVar6 = *(byte **)(param_1 + 0xac);
  }
  *(byte **)(param_1 + 0xac) = pbVar6 + 1;
  bVar9 = *pbVar6;
  if (0xc < bVar9) {
    return 0;
  }
LAB_1017411b:
  uVar16 = 1 << (bVar9 & 0x1f);
  uVar10 = 0;
  do {
    *(undefined2 *)(param_2 + 0x828 + uVar10 * 4) = 0xffff;
    *(char *)(param_2 + 0x82a + uVar10 * 4) = (char)uVar10;
    *(char *)(param_2 + 0x82b + uVar10 * 4) = (char)uVar10;
    uVar10 = uVar10 + 1;
  } while (uVar16 != uVar10);
  uVar13 = (2 << (bVar9 & 0x1f)) - 1;
  local_20 = 0;
  uVar17 = 0;
  iVar15 = 0;
  uVar2 = uVar16 + 2;
  iVar14 = bVar9 + 1;
  uVar3 = 0xffffffff;
  bVar19 = false;
  uVar10 = uVar13;
  do {
    do {
      for (; uVar5 = uVar10, bVar1 = bVar19, uVar12 = uVar3, local_3c = iVar14, local_38 = uVar2,
          iVar14 = iVar15 - local_3c, iVar15 < local_3c; iVar15 = iVar15 + 8) {
        pbVar6 = *(byte **)(param_1 + 0xac);
        pbVar11 = *(byte **)(param_1 + 0xb0);
        pbVar7 = pbVar6;
        if (uVar17 == 0) {
          if (pbVar11 <= pbVar6) {
            if (*(int *)(param_1 + 0x20) == 0) goto LAB_10174341;
            FUN_10170e8c();
            pbVar6 = *(byte **)(param_1 + 0xac);
          }
          pbVar7 = pbVar6 + 1;
          *(byte **)(param_1 + 0xac) = pbVar7;
          uVar17 = (uint)*pbVar6;
          if (uVar17 == 0) {
LAB_10174341:
            return *(undefined4 *)(param_2 + 8);
          }
          pbVar11 = *(byte **)(param_1 + 0xb0);
        }
        if (pbVar7 < pbVar11) {
LAB_1017420f:
          *(byte **)(param_1 + 0xac) = pbVar7 + 1;
          uVar10 = (uint)*pbVar7;
        }
        else {
          if (*(int *)(param_1 + 0x20) != 0) {
            FUN_10170e8c();
            pbVar7 = *(byte **)(param_1 + 0xac);
            goto LAB_1017420f;
          }
          uVar10 = 0;
        }
        uVar17 = uVar17 - 1;
        local_20 = local_20 | uVar10 << ((byte)iVar15 & 0x1f);
        uVar2 = local_38;
        iVar14 = local_3c;
        uVar3 = uVar12;
        bVar19 = bVar1;
        uVar10 = uVar5;
      }
      uVar10 = (int)local_20 >> ((byte)local_3c & 0x1f);
      uVar18 = local_20 & uVar5;
      local_20 = uVar10;
      iVar15 = iVar14;
      uVar2 = uVar16 + 2;
      iVar14 = bVar9 + 1;
      uVar3 = 0xffffffff;
      bVar19 = true;
      uVar10 = uVar13;
    } while (uVar18 == uVar16);
    if (uVar18 == uVar16 + 1) break;
    if (((int)local_38 < (int)uVar18) || (!bVar1)) {
LAB_101743a6:
      FUN_10170e07();
      return 0;
    }
    if ((int)uVar12 < 0) {
      if (uVar18 == local_38) goto LAB_101743a6;
    }
    else {
      if (0x1fff < (int)local_38) goto LAB_101743a6;
      *(short *)(param_2 + 0x828 + local_38 * 4) = (short)uVar12;
      uVar4 = *(undefined1 *)(param_2 + 0x82a + uVar12 * 4);
      *(undefined1 *)(param_2 + 0x82a + local_38 * 4) = uVar4;
      if (uVar18 != local_38 + 1) {
        uVar4 = *(undefined1 *)(param_2 + 0x82a + uVar18 * 4);
      }
      *(undefined1 *)(param_2 + 0x82b + local_38 * 4) = uVar4;
      local_38 = local_38 + 1;
    }
    FUN_101743af();
    bVar19 = (uVar5 & local_38) == 0;
    iVar14 = local_3c;
    if (bVar19 && (int)local_38 < 0x1000) {
      iVar14 = local_3c + 1;
    }
    uVar10 = ~(-1 << ((byte)local_3c + 1 & 0x1f));
    if (!bVar19 || (int)local_38 >= 0x1000) {
      uVar10 = uVar5;
    }
    uVar2 = local_38;
    uVar3 = uVar18;
    bVar19 = true;
  } while( true );
  do {
    FUN_10171ace();
    pcVar8 = *(char **)(param_1 + 0xac);
    if (*(char **)(param_1 + 0xb0) <= pcVar8) {
      if (*(int *)(param_1 + 0x20) == 0) break;
      FUN_10170e8c();
      pcVar8 = *(char **)(param_1 + 0xac);
    }
    *(char **)(param_1 + 0xac) = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  return *(undefined4 *)(param_2 + 8);
}

