/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a5ef0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400a5ef0(longlong param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  byte bVar3;
  ushort *puVar4;
  int *piVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  undefined8 uVar28;
  undefined **ppuVar29;
  undefined4 *puVar30;
  byte *pbVar31;
  undefined **ppuVar32;
  byte *pbVar33;
  longlong local_38 [2];
  
  puVar30 = (undefined4 *)0x0;
  local_38[1] = 0;
  local_38[0] = param_1;
  if ((*(longlong *)(param_1 + 0x140) == 0) && (*(longlong *)(param_1 + 0x148) == 0)) {
    ppuVar29 = (undefined **)0x0;
    ppuVar32 = &PTR_DAT_14013bb30;
LAB_1400a639f:
    piVar5 = *(int **)(param_1 + 0xf0);
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      UNLOCK();
    }
    piVar5 = *(int **)(param_1 + 0xe0);
    if (piVar5 != (int *)0x0) {
      LOCK();
      iVar7 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        FUN_1400a1290(*(LPVOID *)(param_1 + 0xf8));
        FUN_1400a1290(*(LPVOID *)(param_1 + 0xe0));
      }
    }
    *(undefined4 **)(param_1 + 0xf0) = puVar30;
    uVar28 = 0;
    *(undefined ***)(param_1 + 0xe0) = ppuVar29;
    *(undefined ***)(param_1 + 0xf8) = ppuVar32;
  }
  else {
    ppuVar32 = _calloc_base(1,0x98);
    FUN_1400a1290((LPVOID)0x0);
    if (ppuVar32 != (undefined **)0x0) {
      ppuVar29 = _calloc_base(1,4);
      FUN_1400a1290((LPVOID)0x0);
      puVar6 = PTR_DAT_14013bb38;
      if (ppuVar29 != (undefined **)0x0) {
        if (*(longlong *)(param_1 + 0x140) == 0) {
          *ppuVar32 = PTR_DAT_14013bb30;
          ppuVar32[1] = puVar6;
          puVar6 = PTR_DAT_14013bb48;
          ppuVar32[2] = PTR_DAT_14013bb40;
          ppuVar32[3] = puVar6;
          puVar6 = PTR_DAT_14013bb58;
          ppuVar32[4] = PTR_DAT_14013bb50;
          ppuVar32[5] = puVar6;
          puVar6 = PTR_DAT_14013bb68;
          ppuVar32[6] = PTR_DAT_14013bb60;
          ppuVar32[7] = puVar6;
          puVar6 = PTR_DAT_14013bb78;
          ppuVar32[8] = PTR_DAT_14013bb70;
          ppuVar32[9] = puVar6;
          puVar6 = PTR_DAT_14013bb88;
          ppuVar32[10] = _DAT_14013bb80;
          ppuVar32[0xb] = puVar6;
          puVar6 = PTR_DAT_14013bb98;
          ppuVar32[0xc] = PTR_DAT_14013bb90;
          ppuVar32[0xd] = puVar6;
          puVar6 = PTR_DAT_14013bba8;
          ppuVar32[0xe] = PTR_DAT_14013bba0;
          ppuVar32[0xf] = puVar6;
          puVar6 = PTR_DAT_14013bbb8;
          ppuVar32[0x10] = PTR_DAT_14013bbb0;
          ppuVar32[0x11] = puVar6;
          ppuVar32[0x12] = PTR_DAT_14013bbc0;
        }
        else {
          puVar30 = _calloc_base(1,4);
          FUN_1400a1290((LPVOID)0x0);
          if (puVar30 == (undefined4 *)0x0) {
            FUN_1400a1290(ppuVar32);
            ppuVar32 = ppuVar29;
            goto LAB_1400a5f90;
          }
          puVar4 = *(ushort **)(param_1 + 0x140);
          iVar7 = FUN_1400a27d8((__crt_locale_pointers *)local_38,1,puVar4,0x15,
                                (longlong *)(ppuVar32 + 3));
          iVar8 = FUN_1400a27d8((__crt_locale_pointers *)local_38,1,puVar4,0x14,
                                (longlong *)(ppuVar32 + 4));
          iVar9 = FUN_1400a27d8((__crt_locale_pointers *)local_38,1,puVar4,0x16,
                                (longlong *)(ppuVar32 + 5));
          iVar10 = FUN_1400a27d8((__crt_locale_pointers *)local_38,1,puVar4,0x17,
                                 (longlong *)(ppuVar32 + 6));
          iVar11 = FUN_1400a27d8((__crt_locale_pointers *)local_38,1,puVar4,0x18,
                                 (longlong *)(ppuVar32 + 7));
          iVar12 = FUN_1400a27d8((__crt_locale_pointers *)local_38,1,puVar4,0x50,
                                 (longlong *)(ppuVar32 + 8));
          iVar13 = FUN_1400a27d8((__crt_locale_pointers *)local_38,1,puVar4,0x51,
                                 (longlong *)(ppuVar32 + 9));
          iVar14 = FUN_1400a27d8((__crt_locale_pointers *)local_38,0,puVar4,0x1a,
                                 (longlong *)(ppuVar32 + 10));
          iVar15 = FUN_1400a27d8((__crt_locale_pointers *)local_38,0,puVar4,0x19,
                                 (longlong *)((longlong)ppuVar32 + 0x51));
          iVar16 = FUN_1400a27d8((__crt_locale_pointers *)local_38,0,puVar4,0x54,
                                 (longlong *)((longlong)ppuVar32 + 0x52));
          iVar17 = FUN_1400a27d8((__crt_locale_pointers *)local_38,0,puVar4,0x55,
                                 (longlong *)((longlong)ppuVar32 + 0x53));
          iVar18 = FUN_1400a27d8((__crt_locale_pointers *)local_38,0,puVar4,0x56,
                                 (longlong *)((longlong)ppuVar32 + 0x54));
          iVar19 = FUN_1400a27d8((__crt_locale_pointers *)local_38,0,puVar4,0x57,
                                 (longlong *)((longlong)ppuVar32 + 0x55));
          iVar20 = FUN_1400a27d8((__crt_locale_pointers *)local_38,0,puVar4,0x52,
                                 (longlong *)((longlong)ppuVar32 + 0x56));
          iVar21 = FUN_1400a27d8((__crt_locale_pointers *)local_38,0,puVar4,0x53,
                                 (longlong *)((longlong)ppuVar32 + 0x57));
          iVar22 = FUN_1400a27d8((__crt_locale_pointers *)local_38,2,puVar4,0x15,
                                 (longlong *)(ppuVar32 + 0xd));
          iVar23 = FUN_1400a27d8((__crt_locale_pointers *)local_38,2,puVar4,0x14,
                                 (longlong *)(ppuVar32 + 0xe));
          iVar24 = FUN_1400a27d8((__crt_locale_pointers *)local_38,2,puVar4,0x16,
                                 (longlong *)(ppuVar32 + 0xf));
          iVar25 = FUN_1400a27d8((__crt_locale_pointers *)local_38,2,puVar4,0x17,
                                 (longlong *)(ppuVar32 + 0x10));
          iVar26 = FUN_1400a27d8((__crt_locale_pointers *)local_38,2,puVar4,0x50,
                                 (longlong *)(ppuVar32 + 0x11));
          iVar27 = FUN_1400a27d8((__crt_locale_pointers *)local_38,2,puVar4,0x51,
                                 (longlong *)(ppuVar32 + 0x12));
          if (iVar27 != 0 ||
              (((((((((((((((((((iVar7 != 0 || iVar8 != 0) || iVar9 != 0) || iVar10 != 0) ||
                             iVar11 != 0) || iVar12 != 0) || iVar13 != 0) || iVar14 != 0) ||
                         iVar15 != 0) || iVar16 != 0) || iVar17 != 0) || iVar18 != 0) || iVar19 != 0
                     ) || iVar20 != 0) || iVar21 != 0) || iVar22 != 0) || iVar23 != 0) ||
                iVar24 != 0) || iVar25 != 0) || iVar26 != 0)) {
            __acrt_locale_free_monetary((longlong)ppuVar32);
            FUN_1400a1290(ppuVar32);
            FUN_1400a1290(ppuVar29);
            FUN_1400a1290(puVar30);
            return 1;
          }
          pbVar31 = ppuVar32[7];
          bVar3 = *pbVar31;
          while (bVar3 != 0) {
            if ((byte)(bVar3 - 0x30) < 10) {
              *pbVar31 = bVar3 - 0x30;
LAB_1400a62c0:
              pbVar31 = pbVar31 + 1;
            }
            else {
              pbVar33 = pbVar31;
              if (bVar3 != 0x3b) goto LAB_1400a62c0;
              do {
                pbVar1 = pbVar33 + 1;
                *pbVar33 = *pbVar1;
                pbVar33 = pbVar33 + 1;
              } while (*pbVar1 != 0);
            }
            bVar3 = *pbVar31;
          }
        }
        plVar2 = (longlong *)(param_1 + 0xf8);
        *ppuVar32 = *(undefined **)*plVar2;
        ppuVar32[1] = *(undefined **)(*plVar2 + 8);
        ppuVar32[2] = *(undefined **)(*plVar2 + 0x10);
        ppuVar32[0xb] = *(undefined **)(*plVar2 + 0x58);
        ppuVar32[0xc] = *(undefined **)(*plVar2 + 0x60);
        *(undefined4 *)ppuVar29 = 1;
        if (puVar30 != (undefined4 *)0x0) {
          *puVar30 = 1;
        }
        goto LAB_1400a639f;
      }
LAB_1400a5f90:
      FUN_1400a1290(ppuVar32);
    }
    uVar28 = 1;
  }
  return uVar28;
}

