/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408b31a0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffffc : 0x0001408b36d0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_1408b31a0(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 *puVar21;
  uint uVar22;
  ulonglong uVar23;
  uint uVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  undefined1 (*pauVar27) [16];
  undefined4 *puVar28;
  uint uVar29;
  ulonglong unaff_RDI;
  undefined1 (*pauVar30) [16];
  undefined8 *puVar31;
  undefined4 *puVar32;
  undefined1 auVar33 [16];
  uint unaff_retaddr;
  uint unaff_retaddr_00;
  uint in_stack_fffffffffffffffc;
  
  puVar25 = (undefined8 *)(ulonglong)unaff_retaddr;
  uVar23 = (ulonglong)unaff_retaddr_00;
  uVar29 = (uint)(unaff_RDI >> 0x20);
  pauVar30 = (undefined1 (*) [16])(ulonglong)uVar29;
  if ((unaff_retaddr < uVar29) && (uVar29 < unaff_retaddr_00 + unaff_retaddr)) {
    puVar25 = (undefined8 *)(ulonglong)(unaff_retaddr + unaff_retaddr_00);
    uVar22 = uVar29 + unaff_retaddr_00;
    puVar31 = (undefined8 *)(ulonglong)uVar22;
    if (0x1f < unaff_retaddr_00) {
      if ((_DAT_150c3d263 >> 1 & 1) == 0) {
        if ((uVar22 & 3) != 0) {
          *(undefined1 *)((longlong)puVar31 + -1) = *(undefined1 *)((longlong)puVar25 + -1);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (0x1f < unaff_retaddr_00) {
          puVar28 = (undefined4 *)(ulonglong)((unaff_retaddr + unaff_retaddr_00) - 4);
          puVar32 = (undefined4 *)(ulonglong)(uVar22 - 4);
          for (uVar23 = (ulonglong)(unaff_retaddr_00 >> 2); uVar23 != 0; uVar23 = uVar23 - 1) {
            *puVar32 = *puVar28;
            puVar28 = puVar28 + -1;
            puVar32 = puVar32 + -1;
          }
                    /* WARNING: Could not emulate address calculation at 0x0001408b34a8 */
                    /* WARNING: Treating indirect jump as call */
          uVar23 = (**(code **)((ulonglong)(unaff_retaddr_00 & 3) * 4 + 0x1025b5e0))();
          return uVar23;
        }
      }
      else {
        if ((uVar22 & 0xf) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        do {
          if ((uint)uVar23 < 0x80) break;
          puVar25 = (undefined8 *)(ulonglong)((int)puVar25 - 0x80);
          puVar31 = (undefined8 *)(ulonglong)((int)puVar31 - 0x80);
          uVar1 = puVar25[1];
          uVar7 = puVar25[2];
          uVar8 = puVar25[3];
          uVar9 = puVar25[4];
          uVar10 = puVar25[5];
          uVar11 = puVar25[6];
          uVar12 = puVar25[7];
          uVar13 = puVar25[8];
          uVar14 = puVar25[9];
          uVar15 = puVar25[10];
          uVar16 = puVar25[0xb];
          uVar17 = puVar25[0xc];
          uVar18 = puVar25[0xd];
          uVar19 = puVar25[0xe];
          uVar20 = puVar25[0xf];
          *puVar31 = *puVar25;
          puVar31[1] = uVar1;
          puVar31[2] = uVar7;
          puVar31[3] = uVar8;
          puVar31[4] = uVar9;
          puVar31[5] = uVar10;
          puVar31[6] = uVar11;
          puVar31[7] = uVar12;
          puVar31[8] = uVar13;
          puVar31[9] = uVar14;
          puVar31[10] = uVar15;
          puVar31[0xb] = uVar16;
          puVar31[0xc] = uVar17;
          puVar31[0xd] = uVar18;
          puVar31[0xe] = uVar19;
          puVar31[0xf] = uVar20;
          uVar22 = (uint)uVar23 - 0x80;
          uVar23 = (ulonglong)uVar22;
        } while ((uVar22 & 0xffffff80) != 0);
        if (0x1f < (uint)uVar23) {
          do {
            puVar25 = (undefined8 *)(ulonglong)((int)puVar25 - 0x20);
            puVar31 = (undefined8 *)(ulonglong)((int)puVar31 - 0x20);
            uVar1 = puVar25[1];
            uVar7 = puVar25[2];
            uVar8 = puVar25[3];
            *puVar31 = *puVar25;
            puVar31[1] = uVar1;
            puVar31[2] = uVar7;
            puVar31[3] = uVar8;
            uVar22 = (int)uVar23 - 0x20;
            uVar23 = (ulonglong)uVar22;
          } while ((uVar22 & 0xffffffe0) != 0);
        }
      }
    }
    if ((uVar23 & 0xfffffffc) != 0) {
      do {
        puVar31 = (undefined8 *)(ulonglong)((int)puVar31 - 4);
        puVar25 = (undefined8 *)(ulonglong)((int)puVar25 - 4);
        *(undefined4 *)puVar31 = *(undefined4 *)puVar25;
        uVar22 = (int)uVar23 - 4;
        uVar23 = (ulonglong)uVar22;
      } while ((uVar22 & 0xfffffffc) != 0);
    }
    uVar22 = (uint)uVar23;
    while (uVar22 != 0) {
      puVar31 = (undefined8 *)(ulonglong)((int)puVar31 - 1);
      puVar25 = (undefined8 *)(ulonglong)((int)puVar25 - 1);
      *(undefined1 *)puVar31 = *(undefined1 *)puVar25;
      uVar22 = (int)uVar23 - 1;
      uVar23 = (ulonglong)uVar22;
    }
    return (ulonglong)uVar29;
  }
  if (0x1f < unaff_retaddr_00) {
    if (unaff_retaddr_00 < 0x80) {
      if ((_DAT_150c3cfd1 >> 1 & 1) != 0) {
LAB_1408b366d:
        if ((int)uVar23 == 0) goto LAB_1408b36d0;
        if (uVar23 >> 5 != 0) {
          do {
            uVar1 = puVar25[1];
            uVar7 = puVar25[2];
            uVar8 = puVar25[3];
            *(undefined8 *)*pauVar30 = *puVar25;
            *(undefined8 *)(*pauVar30 + 8) = uVar1;
            *(undefined8 *)pauVar30[1] = uVar7;
            *(undefined8 *)(pauVar30[1] + 8) = uVar8;
            puVar25 = (undefined8 *)(ulonglong)((int)puVar25 + 0x20);
            pauVar30 = (undefined1 (*) [16])(ulonglong)((int)pauVar30 + 0x20);
          } while( true );
        }
        goto LAB_1408b369b;
      }
LAB_1408b33c7:
      if ((unaff_RDI & 0x300000000) != 0) {
        do {
          (*pauVar30)[0] = *(undefined1 *)puVar25;
          uVar29 = (int)pauVar30 + 1;
          pauVar30 = (undefined1 (*) [16])(ulonglong)uVar29;
        } while ((uVar29 & 3) != 0);
      }
    }
    else {
      if ((_DAT_150c509a4 >> 1 & 1) != 0) {
        for (; uVar23 != 0; uVar23 = uVar23 - 1) {
          (*pauVar30)[0] = *(undefined1 *)puVar25;
          puVar25 = (undefined8 *)((longlong)puVar25 + 1);
          pauVar30 = (undefined1 (*) [16])(*pauVar30 + 1);
        }
        return (ulonglong)uVar29;
      }
      if ((((uVar29 ^ unaff_retaddr) & 0xf) == 0) && ((_DAT_150c3d002 >> 1 & 1) != 0)) {
        if ((unaff_retaddr & 0xf) != 0) {
          uVar29 = 0x10 - (unaff_retaddr & 0xf);
          unaff_retaddr_00 = unaff_retaddr_00 - uVar29;
          if ((uVar29 & 3) != 0) {
            (*pauVar30)[0] = *(undefined1 *)puVar25;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (uVar29 >> 2 != 0) {
            do {
              *(undefined4 *)*pauVar30 = *(undefined4 *)puVar25;
              puVar25 = (undefined8 *)(ulonglong)((int)puVar25 + 4);
              pauVar30 = (undefined1 (*) [16])(ulonglong)((int)pauVar30 + 4);
            } while( true );
          }
        }
        uVar23 = (ulonglong)(unaff_retaddr_00 & 0x7f);
        if (unaff_retaddr_00 >> 7 != 0) {
          do {
            uVar1 = puVar25[1];
            uVar7 = puVar25[2];
            uVar8 = puVar25[3];
            uVar9 = puVar25[4];
            uVar10 = puVar25[5];
            uVar11 = puVar25[6];
            uVar12 = puVar25[7];
            *(undefined8 *)*pauVar30 = *puVar25;
            *(undefined8 *)(*pauVar30 + 8) = uVar1;
            *(undefined8 *)pauVar30[1] = uVar7;
            *(undefined8 *)(pauVar30[1] + 8) = uVar8;
            *(undefined8 *)pauVar30[2] = uVar9;
            *(undefined8 *)(pauVar30[2] + 8) = uVar10;
            *(undefined8 *)pauVar30[3] = uVar11;
            *(undefined8 *)(pauVar30[3] + 8) = uVar12;
            uVar1 = puVar25[9];
            uVar7 = puVar25[10];
            uVar8 = puVar25[0xb];
            uVar9 = puVar25[0xc];
            uVar10 = puVar25[0xd];
            uVar11 = puVar25[0xe];
            uVar12 = puVar25[0xf];
            *(undefined8 *)pauVar30[4] = puVar25[8];
            *(undefined8 *)(pauVar30[4] + 8) = uVar1;
            *(undefined8 *)pauVar30[5] = uVar7;
            *(undefined8 *)(pauVar30[5] + 8) = uVar8;
            *(undefined8 *)pauVar30[6] = uVar9;
            *(undefined8 *)(pauVar30[6] + 8) = uVar10;
            *(undefined8 *)pauVar30[7] = uVar11;
            *(undefined8 *)(pauVar30[7] + 8) = uVar12;
            puVar25 = (undefined8 *)(ulonglong)((int)puVar25 + 0x80);
            pauVar30 = (undefined1 (*) [16])(ulonglong)((int)pauVar30 + 0x80);
          } while( true );
        }
        goto LAB_1408b366d;
      }
      if (((_DAT_150c509d0 & 1) == 0) || ((unaff_RDI & 0x300000000) != 0)) goto LAB_1408b33c7;
      if ((unaff_retaddr & 3) == 0) {
        if ((uVar29 >> 2 & 1) != 0) {
          uVar3 = *(undefined4 *)puVar25;
          uVar23 = (ulonglong)(unaff_retaddr_00 - 4);
          puVar25 = (undefined8 *)(ulonglong)(unaff_retaddr + 4);
          *(undefined4 *)*pauVar30 = uVar3;
          pauVar30 = (undefined1 (*) [16])(ulonglong)(uVar29 + 4);
        }
        if (((uint)pauVar30 >> 3 & 1) != 0) {
          uVar1 = *puVar25;
          uVar23 = (ulonglong)((int)uVar23 - 8);
          puVar25 = (undefined8 *)(ulonglong)((int)puVar25 + 8);
          *(undefined8 *)*pauVar30 = uVar1;
          pauVar30 = (undefined1 (*) [16])(ulonglong)((uint)pauVar30 + 8);
        }
        uVar29 = (uint)puVar25;
        if (((ulonglong)puVar25 & 7) == 0) {
          auVar33 = *(undefined1 (*) [16])(puVar25 + -1);
          uVar29 = uVar29 - 8;
          do {
            uVar24 = uVar29;
            uVar26 = (ulonglong)uVar24;
            uVar22 = (int)uVar23 - 0x30;
            uVar23 = (ulonglong)uVar22;
            auVar6 = *(undefined1 (*) [32])(uVar26 + 0x10);
            auVar2 = *(undefined1 (*) [16])(uVar26 + 0x30);
            uVar1 = *(undefined8 *)(uVar26 + 0x28);
            uVar7 = *(undefined8 *)(uVar26 + 0x30);
            auVar5._16_16_ = *(undefined1 (*) [16])*(undefined1 (*) [32])(uVar26 + 0x10);
            auVar5._0_16_ = auVar33;
            *pauVar30 = auVar5._8_16_;
            pauVar30[1] = auVar6._8_16_;
            *(undefined8 *)pauVar30[2] = uVar1;
            *(undefined8 *)(pauVar30[2] + 8) = uVar7;
            pauVar30 = (undefined1 (*) [16])(ulonglong)((int)pauVar30 + 0x30);
            auVar33 = auVar2;
            uVar29 = uVar24 + 0x30;
          } while (0x2f < uVar22);
          pauVar27 = (undefined1 (*) [16])(ulonglong)(uVar24 + 0x38);
        }
        else if ((uVar29 >> 3 & 1) == 0) {
          auVar33 = *(undefined1 (*) [16])((longlong)puVar25 + -4);
          uVar29 = uVar29 - 4;
          do {
            uVar24 = uVar29;
            uVar26 = (ulonglong)uVar24;
            uVar22 = (int)uVar23 - 0x30;
            uVar23 = (ulonglong)uVar22;
            auVar5 = *(undefined1 (*) [32])(uVar26 + 0x10);
            auVar2 = *(undefined1 (*) [16])(uVar26 + 0x30);
            auVar4 = *(undefined1 (*) [32])(uVar26 + 0x20);
            auVar6._16_16_ = *(undefined1 (*) [16])*(undefined1 (*) [32])(uVar26 + 0x10);
            auVar6._0_16_ = auVar33;
            *pauVar30 = auVar6._4_16_;
            pauVar30[1] = auVar5._4_16_;
            pauVar30[2] = auVar4._4_16_;
            pauVar30 = (undefined1 (*) [16])(ulonglong)((int)pauVar30 + 0x30);
            auVar33 = auVar2;
            uVar29 = uVar24 + 0x30;
          } while (0x2f < uVar22);
          pauVar27 = (undefined1 (*) [16])(ulonglong)(uVar24 + 0x34);
        }
        else {
          auVar33 = *(undefined1 (*) [16])((longlong)puVar25 + -0xc);
          uVar29 = uVar29 - 0xc;
          do {
            uVar24 = uVar29;
            uVar26 = (ulonglong)uVar24;
            uVar22 = (int)uVar23 - 0x30;
            uVar23 = (ulonglong)uVar22;
            auVar5 = *(undefined1 (*) [32])(uVar26 + 0x10);
            auVar2 = *(undefined1 (*) [16])(uVar26 + 0x30);
            auVar6 = *(undefined1 (*) [32])(uVar26 + 0x20);
            auVar4._16_16_ = *(undefined1 (*) [16])*(undefined1 (*) [32])(uVar26 + 0x10);
            auVar4._0_16_ = auVar33;
            *pauVar30 = auVar4._12_16_;
            pauVar30[1] = auVar5._12_16_;
            pauVar30[2] = auVar6._12_16_;
            pauVar30 = (undefined1 (*) [16])(ulonglong)((int)pauVar30 + 0x30);
            auVar33 = auVar2;
            uVar29 = uVar24 + 0x30;
          } while (0x2f < uVar22);
          pauVar27 = (undefined1 (*) [16])(ulonglong)(uVar24 + 0x3c);
        }
        while( true ) {
          uVar29 = (uint)uVar23;
          if (uVar29 < 0x10) break;
          auVar33 = *pauVar27;
          uVar23 = (ulonglong)(uVar29 - 0x10);
          pauVar27 = (undefined1 (*) [16])(ulonglong)((int)pauVar27 + 0x10);
          *pauVar30 = auVar33;
          pauVar30 = (undefined1 (*) [16])(ulonglong)((int)pauVar30 + 0x10);
        }
        if ((uVar29 >> 2 & 1) != 0) {
          puVar21 = *pauVar27;
          uVar23 = (ulonglong)(uVar29 - 4);
          pauVar27 = (undefined1 (*) [16])(ulonglong)((int)pauVar27 + 4);
          *(undefined4 *)*pauVar30 = *(undefined4 *)puVar21;
          pauVar30 = (undefined1 (*) [16])(ulonglong)((int)pauVar30 + 4);
        }
        if (((uint)uVar23 >> 3 & 1) != 0) {
          uVar23 = (ulonglong)((uint)uVar23 - 8);
          *(undefined8 *)*pauVar30 = *(undefined8 *)*pauVar27;
        }
                    /* WARNING: Could not recover jumptable at 0x0001408b33c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar23 = (*(code *)(ulonglong)*(uint *)(uVar23 * 4 + 0x1025b534))(uVar23,unaff_retaddr_00);
        return uVar23;
      }
    }
    if (0x1f < unaff_retaddr_00) {
      for (uVar23 = (ulonglong)(unaff_retaddr_00 >> 2); uVar23 != 0; uVar23 = uVar23 - 1) {
        *(undefined4 *)*pauVar30 = *(undefined4 *)puVar25;
        puVar25 = (undefined8 *)((longlong)puVar25 + 4);
        pauVar30 = (undefined1 (*) [16])(*pauVar30 + 4);
      }
                    /* WARNING: Could not emulate address calculation at 0x0001408b33f5 */
                    /* WARNING: Treating indirect jump as call */
      uVar23 = (**(code **)((ulonglong)(unaff_retaddr_00 & 3) * 4 + 0x1025b534))();
      return uVar23;
    }
  }
LAB_1408b369b:
  if ((uVar23 & 0x1f) != 0) {
    for (uVar29 = ((uint)uVar23 & 0x1f) >> 2; uVar29 != 0; uVar29 = uVar29 - 1) {
      *(undefined4 *)*pauVar30 = *(undefined4 *)puVar25;
      pauVar30 = (undefined1 (*) [16])(ulonglong)((int)pauVar30 + 4);
      puVar25 = (undefined8 *)(ulonglong)((int)puVar25 + 4);
    }
    if ((uVar23 & 3) != 0) {
      (*pauVar30)[0] = *(undefined1 *)puVar25;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
LAB_1408b36d0:
  return (ulonglong)in_stack_fffffffffffffffc;
}

