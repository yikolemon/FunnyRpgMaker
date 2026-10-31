/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b4be8 */

undefined8 FUN_1401b4be8(longlong param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  byte *pbVar16;
  undefined **ppuVar17;
  byte *pbVar18;
  undefined8 uVar19;
  longlong local_38 [2];
  
  ppuVar15 = (undefined **)0x0;
  local_38[1] = 0;
  local_38[0] = param_1;
  if ((*(longlong *)(param_1 + 0x148) == 0) && (*(longlong *)(param_1 + 0x140) == 0)) {
    ppuVar17 = &PTR_DAT_140f29570;
    ppuVar14 = ppuVar15;
LAB_1401b4e61:
    piVar4 = *(int **)(param_1 + 0xe8);
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      UNLOCK();
    }
    piVar4 = *(int **)(param_1 + 0xe0);
    if (piVar4 != (int *)0x0) {
      LOCK();
      iVar9 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        FUN_1401aea30(*(undefined8 *)(param_1 + 0xe0));
        FUN_1401aea30(*(undefined8 *)(param_1 + 0xf8));
      }
    }
    *(undefined ***)(param_1 + 0xe8) = ppuVar15;
    *(undefined ***)(param_1 + 0xe0) = ppuVar14;
    *(undefined8 *)(param_1 + 0xf8) = ppuVar17;
    return 0;
  }
  uVar19 = 1;
  ppuVar17 = (undefined **)_calloc_base(1,0x98);
  if (ppuVar17 == (undefined **)0x0) {
    return 1;
  }
  puVar3 = *(undefined8 **)(param_1 + 0xf8);
  puVar8 = (undefined *)puVar3[1];
  *ppuVar17 = (undefined *)*puVar3;
  ppuVar17[1] = puVar8;
  puVar8 = (undefined *)puVar3[3];
  ppuVar17[2] = (undefined *)puVar3[2];
  ppuVar17[3] = puVar8;
  puVar8 = (undefined *)puVar3[5];
  ppuVar17[4] = (undefined *)puVar3[4];
  ppuVar17[5] = puVar8;
  puVar8 = (undefined *)puVar3[7];
  ppuVar17[6] = (undefined *)puVar3[6];
  ppuVar17[7] = puVar8;
  puVar8 = (undefined *)puVar3[9];
  ppuVar17[8] = (undefined *)puVar3[8];
  ppuVar17[9] = puVar8;
  puVar8 = (undefined *)puVar3[0xb];
  ppuVar17[10] = (undefined *)puVar3[10];
  ppuVar17[0xb] = puVar8;
  puVar8 = (undefined *)puVar3[0xd];
  ppuVar17[0xc] = (undefined *)puVar3[0xc];
  ppuVar17[0xd] = puVar8;
  uVar5 = *(undefined4 *)((longlong)puVar3 + 0x74);
  uVar6 = *(undefined4 *)(puVar3 + 0xf);
  uVar7 = *(undefined4 *)((longlong)puVar3 + 0x7c);
  *(undefined4 *)(ppuVar17 + 0xe) = *(undefined4 *)(puVar3 + 0xe);
  *(undefined4 *)((longlong)ppuVar17 + 0x74) = uVar5;
  *(undefined4 *)(ppuVar17 + 0xf) = uVar6;
  *(undefined4 *)((longlong)ppuVar17 + 0x7c) = uVar7;
  uVar5 = *(undefined4 *)((longlong)puVar3 + 0x84);
  uVar6 = *(undefined4 *)(puVar3 + 0x11);
  uVar7 = *(undefined4 *)((longlong)puVar3 + 0x8c);
  *(undefined4 *)(ppuVar17 + 0x10) = *(undefined4 *)(puVar3 + 0x10);
  *(undefined4 *)((longlong)ppuVar17 + 0x84) = uVar5;
  *(undefined4 *)(ppuVar17 + 0x11) = uVar6;
  *(undefined4 *)((longlong)ppuVar17 + 0x8c) = uVar7;
  ppuVar17[0x12] = (undefined *)puVar3[0x12];
  ppuVar14 = (undefined **)_malloc_base(4);
  FUN_1401aea30(0);
  if (ppuVar14 != (undefined **)0x0) {
    *(undefined4 *)ppuVar14 = 0;
    if (*(longlong *)(param_1 + 0x148) == 0) {
      *ppuVar17 = PTR_DAT_140f29570;
      ppuVar17[1] = PTR_DAT_140f29578;
      ppuVar17[2] = PTR_DAT_140f29580;
      ppuVar17[0xb] = PTR_DAT_140f295c8;
      ppuVar17[0xc] = PTR_DAT_140f295d0;
      *(undefined4 *)ppuVar14 = 1;
      goto LAB_1401b4e61;
    }
    ppuVar15 = (undefined **)_malloc_base(4);
    FUN_1401aea30(0);
    if (ppuVar15 == (undefined **)0x0) {
      FUN_1401aea30(ppuVar17);
      ppuVar17 = ppuVar14;
    }
    else {
      *(undefined4 *)ppuVar15 = 0;
      uVar19 = *(undefined8 *)(param_1 + 0x148);
      iVar9 = FUN_1401b0de8(local_38,1,uVar19,0xe,ppuVar17);
      iVar10 = FUN_1401b0de8(local_38,1,uVar19,0xf,ppuVar17 + 1);
      iVar11 = FUN_1401b0de8(local_38,1,uVar19,0x10,ppuVar17 + 2);
      iVar12 = FUN_1401b0de8(local_38,2,uVar19,0xe,ppuVar17 + 0xb);
      iVar13 = FUN_1401b0de8(local_38,2,uVar19,0xf,ppuVar17 + 0xc);
      if (iVar13 == 0 && (((iVar9 == 0 && iVar10 == 0) && iVar11 == 0) && iVar12 == 0)) {
        pbVar16 = ppuVar17[2];
        while (bVar2 = *pbVar16, bVar2 != 0) {
          if ((byte)(bVar2 - 0x30) < 10) {
            *pbVar16 = bVar2 - 0x30;
LAB_1401b4dfb:
            pbVar16 = pbVar16 + 1;
          }
          else {
            pbVar18 = pbVar16;
            if (bVar2 != 0x3b) goto LAB_1401b4dfb;
            do {
              pbVar1 = pbVar18 + 1;
              *pbVar18 = *pbVar1;
              pbVar18 = pbVar18 + 1;
            } while (*pbVar1 != 0);
          }
        }
        *(undefined4 *)ppuVar14 = 1;
        *(undefined4 *)ppuVar15 = 1;
        goto LAB_1401b4e61;
      }
      __acrt_locale_free_numeric(ppuVar17);
      FUN_1401aea30(ppuVar17);
      FUN_1401aea30(ppuVar15);
      uVar19 = 0xffffffff;
      ppuVar17 = ppuVar14;
    }
  }
  FUN_1401aea30(ppuVar17);
  return uVar19;
}

