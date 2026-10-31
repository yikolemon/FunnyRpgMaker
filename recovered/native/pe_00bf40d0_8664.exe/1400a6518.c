/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a6518 */

undefined8 FUN_1400a6518(longlong param_1)

{
  byte *pbVar1;
  byte bVar2;
  longlong *plVar3;
  ushort *puVar4;
  int *piVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  byte *pbVar14;
  undefined **ppuVar15;
  byte *pbVar16;
  undefined8 uVar17;
  longlong local_38 [2];
  
  ppuVar13 = (undefined **)0x0;
  local_38[1] = 0;
  local_38[0] = param_1;
  if ((*(longlong *)(param_1 + 0x148) == 0) && (*(longlong *)(param_1 + 0x140) == 0)) {
    ppuVar15 = &PTR_DAT_14013bb30;
    ppuVar12 = ppuVar13;
LAB_1400a6791:
    piVar5 = *(int **)(param_1 + 0xe8);
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
        FUN_1400a1290(*(LPVOID *)(param_1 + 0xe0));
        FUN_1400a1290(*(LPVOID *)(param_1 + 0xf8));
      }
    }
    *(undefined ***)(param_1 + 0xe8) = ppuVar13;
    *(undefined ***)(param_1 + 0xe0) = ppuVar12;
    *(undefined ***)(param_1 + 0xf8) = ppuVar15;
    return 0;
  }
  uVar17 = 1;
  ppuVar15 = _calloc_base(1,0x98);
  if (ppuVar15 == (undefined **)0x0) {
    return 1;
  }
  plVar3 = *(longlong **)(param_1 + 0xf8);
  puVar6 = (undefined *)plVar3[1];
  *ppuVar15 = (undefined *)*plVar3;
  ppuVar15[1] = puVar6;
  puVar6 = (undefined *)plVar3[3];
  ppuVar15[2] = (undefined *)plVar3[2];
  ppuVar15[3] = puVar6;
  puVar6 = (undefined *)plVar3[5];
  ppuVar15[4] = (undefined *)plVar3[4];
  ppuVar15[5] = puVar6;
  puVar6 = (undefined *)plVar3[7];
  ppuVar15[6] = (undefined *)plVar3[6];
  ppuVar15[7] = puVar6;
  puVar6 = (undefined *)plVar3[9];
  ppuVar15[8] = (undefined *)plVar3[8];
  ppuVar15[9] = puVar6;
  puVar6 = (undefined *)plVar3[0xb];
  ppuVar15[10] = (undefined *)plVar3[10];
  ppuVar15[0xb] = puVar6;
  puVar6 = (undefined *)plVar3[0xd];
  ppuVar15[0xc] = (undefined *)plVar3[0xc];
  ppuVar15[0xd] = puVar6;
  puVar6 = (undefined *)plVar3[0xf];
  ppuVar15[0xe] = (undefined *)plVar3[0xe];
  ppuVar15[0xf] = puVar6;
  puVar6 = (undefined *)plVar3[0x11];
  ppuVar15[0x10] = (undefined *)plVar3[0x10];
  ppuVar15[0x11] = puVar6;
  ppuVar15[0x12] = (undefined *)plVar3[0x12];
  ppuVar12 = _malloc_base(4);
  FUN_1400a1290((LPVOID)0x0);
  if (ppuVar12 != (undefined **)0x0) {
    *(undefined4 *)ppuVar12 = 0;
    if (*(longlong *)(param_1 + 0x148) == 0) {
      *ppuVar15 = PTR_DAT_14013bb30;
      ppuVar15[1] = PTR_DAT_14013bb38;
      ppuVar15[2] = PTR_DAT_14013bb40;
      ppuVar15[0xb] = PTR_DAT_14013bb88;
      ppuVar15[0xc] = PTR_DAT_14013bb90;
      *(undefined4 *)ppuVar12 = 1;
      goto LAB_1400a6791;
    }
    ppuVar13 = _malloc_base(4);
    FUN_1400a1290((LPVOID)0x0);
    if (ppuVar13 == (undefined **)0x0) {
      FUN_1400a1290(ppuVar15);
      ppuVar15 = ppuVar12;
    }
    else {
      *(undefined4 *)ppuVar13 = 0;
      puVar4 = *(ushort **)(param_1 + 0x148);
      iVar7 = FUN_1400a27d8((__crt_locale_pointers *)local_38,1,puVar4,0xe,(longlong *)ppuVar15);
      iVar8 = FUN_1400a27d8((__crt_locale_pointers *)local_38,1,puVar4,0xf,
                            (longlong *)(ppuVar15 + 1));
      iVar9 = FUN_1400a27d8((__crt_locale_pointers *)local_38,1,puVar4,0x10,
                            (longlong *)(ppuVar15 + 2));
      iVar10 = FUN_1400a27d8((__crt_locale_pointers *)local_38,2,puVar4,0xe,
                             (longlong *)(ppuVar15 + 0xb));
      iVar11 = FUN_1400a27d8((__crt_locale_pointers *)local_38,2,puVar4,0xf,
                             (longlong *)(ppuVar15 + 0xc));
      if (iVar11 == 0 && (((iVar7 == 0 && iVar8 == 0) && iVar9 == 0) && iVar10 == 0)) {
        pbVar14 = ppuVar15[2];
        while (bVar2 = *pbVar14, bVar2 != 0) {
          if ((byte)(bVar2 - 0x30) < 10) {
            *pbVar14 = bVar2 - 0x30;
LAB_1400a672b:
            pbVar14 = pbVar14 + 1;
          }
          else {
            pbVar16 = pbVar14;
            if (bVar2 != 0x3b) goto LAB_1400a672b;
            do {
              pbVar1 = pbVar16 + 1;
              *pbVar16 = *pbVar1;
              pbVar16 = pbVar16 + 1;
            } while (*pbVar1 != 0);
          }
        }
        *(undefined4 *)ppuVar12 = 1;
        *(undefined4 *)ppuVar13 = 1;
        goto LAB_1400a6791;
      }
      __acrt_locale_free_numeric(ppuVar15);
      FUN_1400a1290(ppuVar15);
      FUN_1400a1290(ppuVar13);
      uVar17 = 0xffffffff;
      ppuVar15 = ppuVar12;
    }
  }
  FUN_1400a1290(ppuVar15);
  return uVar17;
}

