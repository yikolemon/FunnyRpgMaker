/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b45c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1401b45c0(longlong param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  byte bVar3;
  int *piVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
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
  int iVar28;
  int iVar29;
  undefined8 uVar30;
  undefined **ppuVar31;
  undefined4 *puVar32;
  byte *pbVar33;
  undefined **ppuVar34;
  byte *pbVar35;
  longlong local_38 [2];
  
  puVar32 = (undefined4 *)0x0;
  local_38[1] = 0;
  local_38[0] = param_1;
  if ((*(longlong *)(param_1 + 0x140) == 0) && (*(longlong *)(param_1 + 0x148) == 0)) {
    ppuVar31 = (undefined **)0x0;
    ppuVar34 = &PTR_DAT_140f29570;
LAB_1401b4a6f:
    piVar4 = *(int **)(param_1 + 0xf0);
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
        FUN_1401aea30(*(undefined8 *)(param_1 + 0xf8));
        FUN_1401aea30(*(undefined8 *)(param_1 + 0xe0));
      }
    }
    *(undefined4 **)(param_1 + 0xf0) = puVar32;
    uVar30 = 0;
    *(undefined ***)(param_1 + 0xe0) = ppuVar31;
    *(undefined8 *)(param_1 + 0xf8) = ppuVar34;
  }
  else {
    ppuVar34 = (undefined **)_calloc_base(1,0x98);
    FUN_1401aea30(0);
    if (ppuVar34 != (undefined **)0x0) {
      ppuVar31 = (undefined **)_calloc_base(1,4);
      FUN_1401aea30(0);
      puVar5 = PTR_DAT_140f29578;
      if (ppuVar31 != (undefined **)0x0) {
        if (*(longlong *)(param_1 + 0x140) == 0) {
          *ppuVar34 = PTR_DAT_140f29570;
          ppuVar34[1] = puVar5;
          puVar5 = PTR_DAT_140f29588;
          ppuVar34[2] = PTR_DAT_140f29580;
          ppuVar34[3] = puVar5;
          puVar5 = PTR_DAT_140f29598;
          ppuVar34[4] = PTR_DAT_140f29590;
          ppuVar34[5] = puVar5;
          puVar5 = PTR_DAT_140f295a8;
          ppuVar34[6] = PTR_DAT_140f295a0;
          ppuVar34[7] = puVar5;
          puVar5 = PTR_DAT_140f295b8;
          ppuVar34[8] = PTR_DAT_140f295b0;
          ppuVar34[9] = puVar5;
          puVar5 = PTR_DAT_140f295c8;
          ppuVar34[10] = _DAT_140f295c0;
          ppuVar34[0xb] = puVar5;
          puVar5 = PTR_DAT_140f295d8;
          ppuVar34[0xc] = PTR_DAT_140f295d0;
          ppuVar34[0xd] = puVar5;
          uVar8 = PTR_DAT_140f295e8._4_4_;
          uVar7 = PTR_DAT_140f295e8._0_4_;
          uVar6 = PTR_DAT_140f295e0._4_4_;
          *(undefined4 *)(ppuVar34 + 0xe) = PTR_DAT_140f295e0._0_4_;
          *(undefined4 *)((longlong)ppuVar34 + 0x74) = uVar6;
          *(undefined4 *)(ppuVar34 + 0xf) = uVar7;
          *(undefined4 *)((longlong)ppuVar34 + 0x7c) = uVar8;
          puVar5 = PTR_DAT_140f295f8;
          ppuVar34[0x10] = PTR_DAT_140f295f0;
          ppuVar34[0x11] = puVar5;
          ppuVar34[0x12] = PTR_DAT_140f29600;
        }
        else {
          puVar32 = (undefined4 *)_calloc_base(1,4);
          FUN_1401aea30(0);
          if (puVar32 == (undefined4 *)0x0) {
            FUN_1401aea30(ppuVar34);
            ppuVar34 = ppuVar31;
            goto LAB_1401b4660;
          }
          uVar30 = *(undefined8 *)(param_1 + 0x140);
          iVar9 = FUN_1401b0de8(local_38,1,uVar30,0x15,ppuVar34 + 3);
          iVar10 = FUN_1401b0de8(local_38,1,uVar30,0x14,ppuVar34 + 4);
          iVar11 = FUN_1401b0de8(local_38,1,uVar30,0x16,ppuVar34 + 5);
          iVar12 = FUN_1401b0de8(local_38,1,uVar30,0x17,ppuVar34 + 6);
          iVar13 = FUN_1401b0de8(local_38,1,uVar30,0x18,ppuVar34 + 7);
          iVar14 = FUN_1401b0de8(local_38,1,uVar30,0x50,ppuVar34 + 8);
          iVar15 = FUN_1401b0de8(local_38,1,uVar30,0x51,ppuVar34 + 9);
          iVar16 = FUN_1401b0de8(local_38,0,uVar30,0x1a,ppuVar34 + 10);
          iVar17 = FUN_1401b0de8(local_38,0,uVar30,0x19,(longlong)ppuVar34 + 0x51);
          iVar18 = FUN_1401b0de8(local_38,0,uVar30,0x54,(longlong)ppuVar34 + 0x52);
          iVar19 = FUN_1401b0de8(local_38,0,uVar30,0x55,(longlong)ppuVar34 + 0x53);
          iVar20 = FUN_1401b0de8(local_38,0,uVar30,0x56,(undefined4 *)((longlong)ppuVar34 + 0x54));
          iVar21 = FUN_1401b0de8(local_38,0,uVar30,0x57,(longlong)ppuVar34 + 0x55);
          iVar22 = FUN_1401b0de8(local_38,0,uVar30,0x52,(longlong)ppuVar34 + 0x56);
          iVar23 = FUN_1401b0de8(local_38,0,uVar30,0x53,(longlong)ppuVar34 + 0x57);
          iVar24 = FUN_1401b0de8(local_38,2,uVar30,0x15,ppuVar34 + 0xd);
          iVar25 = FUN_1401b0de8(local_38,2,uVar30,0x14,ppuVar34 + 0xe);
          iVar26 = FUN_1401b0de8(local_38,2,uVar30,0x16,ppuVar34 + 0xf);
          iVar27 = FUN_1401b0de8(local_38,2,uVar30,0x17,ppuVar34 + 0x10);
          iVar28 = FUN_1401b0de8(local_38,2,uVar30,0x50,ppuVar34 + 0x11);
          iVar29 = FUN_1401b0de8(local_38,2,uVar30,0x51,ppuVar34 + 0x12);
          if (iVar29 != 0 ||
              (((((((((((((((((((iVar9 != 0 || iVar10 != 0) || iVar11 != 0) || iVar12 != 0) ||
                             iVar13 != 0) || iVar14 != 0) || iVar15 != 0) || iVar16 != 0) ||
                         iVar17 != 0) || iVar18 != 0) || iVar19 != 0) || iVar20 != 0) || iVar21 != 0
                     ) || iVar22 != 0) || iVar23 != 0) || iVar24 != 0) || iVar25 != 0) ||
                iVar26 != 0) || iVar27 != 0) || iVar28 != 0)) {
            __acrt_locale_free_monetary(ppuVar34);
            FUN_1401aea30(ppuVar34);
            FUN_1401aea30(ppuVar31);
            FUN_1401aea30(puVar32);
            return 1;
          }
          pbVar33 = ppuVar34[7];
          bVar3 = *pbVar33;
          while (bVar3 != 0) {
            if ((byte)(bVar3 - 0x30) < 10) {
              *pbVar33 = bVar3 - 0x30;
LAB_1401b4990:
              pbVar33 = pbVar33 + 1;
            }
            else {
              pbVar35 = pbVar33;
              if (bVar3 != 0x3b) goto LAB_1401b4990;
              do {
                pbVar1 = pbVar35 + 1;
                *pbVar35 = *pbVar1;
                pbVar35 = pbVar35 + 1;
              } while (*pbVar1 != 0);
            }
            bVar3 = *pbVar33;
          }
        }
        plVar2 = (longlong *)(param_1 + 0xf8);
        *ppuVar34 = *(undefined **)*plVar2;
        ppuVar34[1] = *(undefined **)(*plVar2 + 8);
        ppuVar34[2] = *(undefined **)(*plVar2 + 0x10);
        ppuVar34[0xb] = *(undefined **)(*plVar2 + 0x58);
        ppuVar34[0xc] = *(undefined **)(*plVar2 + 0x60);
        *(undefined4 *)ppuVar31 = 1;
        if (puVar32 != (undefined4 *)0x0) {
          *puVar32 = 1;
        }
        goto LAB_1401b4a6f;
      }
LAB_1401b4660:
      FUN_1401aea30(ppuVar34);
    }
    uVar30 = 1;
  }
  return uVar30;
}

