/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003a6c0 */

int FUN_14003a6c0(uint *param_1,undefined8 *param_2)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  short sVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ushort uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint *puVar17;
  uint *puVar18;
  
  uVar16 = *(ulonglong *)(param_1 + 4);
  if (7 < *(ulonglong *)(param_1 + 6)) {
    param_1 = *(uint **)param_1;
  }
  puVar1 = (uint *)((longlong)param_1 + uVar16 * 2);
  puVar11 = param_1;
  if (1 < (longlong)uVar16) {
    uVar15 = *param_1;
    if ((uVar15 & 0xffffffdf) - 0x3a0041 < 0x1a) {
      puVar11 = param_1 + 1;
    }
    else if (((short)uVar15 == 0x5c) || ((uVar15 & 0xffff) == 0x2f)) {
      uVar7 = uVar15 >> 0x10;
      sVar6 = (short)(uVar15 >> 0x10);
      if (uVar16 < 4) {
        if (uVar16 != 2) goto LAB_14003a78a;
      }
      else if (((*(ushort *)((longlong)param_1 + 6) == 0x5c) ||
               (*(ushort *)((longlong)param_1 + 6) == 0x2f)) &&
              ((uVar16 == 4 || (((ushort)param_1[2] != 0x2f && ((ushort)param_1[2] != 0x5c)))))) {
        puVar10 = (uint *)((longlong)param_1 + 6);
        puVar11 = puVar10;
        if ((sVar6 == 0x2f) || (uVar7 == 0x5c)) {
          uVar14 = (ushort)param_1[1];
          if ((uVar14 != 0x2e) && (uVar14 != 0x3f)) {
            if (uVar7 != 0x3f) goto LAB_14003a78a;
            goto LAB_14003a7f2;
          }
        }
        else {
          puVar11 = param_1;
          if (uVar7 == 0x3f) {
            uVar14 = (ushort)param_1[1];
LAB_14003a7f2:
            puVar11 = puVar10;
            if (uVar14 != 0x3f) {
              puVar11 = param_1;
            }
          }
        }
      }
      else {
LAB_14003a78a:
        if ((((sVar6 == 0x5c) || (puVar11 = param_1, uVar7 == 0x2f)) &&
            (puVar11 = param_1, (ushort)param_1[1] != 0x2f)) &&
           (((ushort)param_1[1] != 0x5c &&
            (puVar10 = (uint *)((longlong)param_1 + 6), puVar11 = puVar10, uVar16 != 3)))) {
          lVar4 = uVar16 * 2 + -6;
          do {
            puVar11 = puVar10;
            if (((ushort)*puVar10 == 0x2f) || ((ushort)*puVar10 == 0x5c)) break;
            puVar10 = (uint *)((longlong)puVar10 + 2);
            lVar4 = lVar4 + -2;
            puVar11 = puVar1;
          } while (lVar4 != 0);
        }
      }
    }
  }
  puVar8 = (uint *)*param_2;
  uVar16 = param_2[1];
  puVar10 = (uint *)((longlong)puVar8 + uVar16 * 2);
  puVar18 = puVar8;
  if ((longlong)uVar16 < 2) goto LAB_14003a91d;
  uVar15 = *puVar8;
  if ((uVar15 & 0xffffffdf) - 0x3a0041 < 0x1a) {
    puVar18 = puVar8 + 1;
    goto LAB_14003a91d;
  }
  if (((short)uVar15 != 0x5c) && ((uVar15 & 0xffff) != 0x2f)) goto LAB_14003a91d;
  uVar7 = uVar15 >> 0x10;
  sVar6 = (short)(uVar15 >> 0x10);
  if (uVar16 < 4) {
    if (uVar16 == 2) goto LAB_14003a91d;
  }
  else if (((*(ushort *)((longlong)puVar8 + 6) == 0x5c) ||
           (*(ushort *)((longlong)puVar8 + 6) == 0x2f)) &&
          ((uVar16 == 4 || (((ushort)puVar8[2] != 0x2f && ((ushort)puVar8[2] != 0x5c)))))) {
    puVar17 = (uint *)((longlong)puVar8 + 6);
    if ((sVar6 == 0x2f) || (uVar7 == 0x5c)) {
      uVar14 = (ushort)puVar8[1];
      puVar18 = puVar17;
      if ((uVar14 == 0x2e) || (uVar14 == 0x3f)) goto LAB_14003a91d;
      if (uVar7 != 0x3f) goto LAB_14003a8a7;
    }
    else {
      if (uVar7 != 0x3f) goto LAB_14003a91d;
      uVar14 = (ushort)puVar8[1];
    }
    puVar18 = puVar17;
    if (uVar14 != 0x3f) {
      puVar18 = puVar8;
    }
    goto LAB_14003a91d;
  }
LAB_14003a8a7:
  if ((((sVar6 == 0x5c) || (puVar18 = puVar8, uVar7 == 0x2f)) &&
      (puVar18 = puVar8, (ushort)puVar8[1] != 0x2f)) &&
     (((ushort)puVar8[1] != 0x5c &&
      (puVar17 = (uint *)((longlong)puVar8 + 6), puVar18 = puVar17, uVar16 != 3)))) {
    lVar4 = uVar16 * 2 + -6;
    do {
      puVar18 = puVar17;
      if (((ushort)*puVar17 == 0x2f) || ((ushort)*puVar17 == 0x5c)) break;
      puVar17 = (uint *)((longlong)puVar17 + 2);
      lVar4 = lVar4 + -2;
      puVar18 = puVar10;
    } while (lVar4 != 0);
  }
LAB_14003a91d:
  uVar13 = (longlong)puVar18 - (longlong)puVar8 >> 1;
  uVar12 = (longlong)puVar11 - (longlong)param_1 >> 1;
  uVar16 = uVar12;
  if (uVar13 < uVar12) {
    uVar16 = uVar13;
  }
  uVar5 = thunk_FUN_14018b6d0(param_1,puVar8,uVar16);
  if (uVar5 == uVar16) {
    puVar8 = puVar11;
    if (uVar12 == uVar13) {
      for (; (puVar17 = puVar18, puVar8 != puVar1 &&
             (((ushort)*puVar8 == 0x5c || ((ushort)*puVar8 == 0x2f))));
          puVar8 = (uint *)((longlong)puVar8 + 2)) {
      }
      for (; (puVar9 = puVar10, puVar17 != puVar10 &&
             (((ushort)*puVar17 == 0x5c || (puVar9 = puVar17, (ushort)*puVar17 == 0x2f))));
          puVar17 = (uint *)((longlong)puVar17 + 2)) {
      }
      iVar3 = (uint)(puVar11 != puVar8) - (uint)(puVar18 != puVar9);
      if (iVar3 == 0) {
        do {
          while( true ) {
            if ((puVar8 == puVar1) || (puVar9 == puVar10)) {
              return (uint)(puVar9 == puVar10) - (uint)(puVar8 == puVar1);
            }
            uVar14 = (ushort)*puVar8;
            uVar2 = (ushort)*puVar9;
            iVar3 = (uint)(uVar2 == 0x5c || uVar2 == 0x2f) -
                    (uint)(uVar14 == 0x5c || uVar14 == 0x2f);
            if (iVar3 != 0) {
              return iVar3;
            }
            uVar15 = (uint)uVar14;
            if ((uVar15 == 0x5c) || (uVar15 == 0x2f)) break;
            if (uVar15 - uVar2 != 0) {
              return uVar15 - uVar2;
            }
            puVar8 = (uint *)((longlong)puVar8 + 2);
            puVar9 = (uint *)((longlong)puVar9 + 2);
          }
          do {
            puVar8 = (uint *)((longlong)puVar8 + 2);
            if (puVar8 == puVar1) break;
          } while ((*(ushort *)puVar8 == 0x5c) || (*(ushort *)puVar8 == 0x2f));
          do {
            puVar9 = (uint *)((longlong)puVar9 + 2);
            if (puVar9 == puVar10) break;
          } while ((*(ushort *)puVar9 == 0x5c) || (*(ushort *)puVar9 == 0x2f));
        } while( true );
      }
    }
    else {
      iVar3 = (int)(char)((uVar13 < uVar12) - (uVar12 < uVar13));
    }
  }
  else {
    iVar3 = (uint)(*(ushort *)((longlong)puVar8 + uVar5 * 2) <=
                  *(ushort *)((longlong)param_1 + uVar5 * 2)) * 2 + -1;
  }
  return iVar3;
}

