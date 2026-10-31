/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022af00 */

/* WARNING: Removing unreachable block (ram,0x1022b093) */
/* WARNING: Removing unreachable block (ram,0x1022b095) */

void FUN_1022af00(undefined1 (*param_1) [16],uint param_2,undefined1 (*param_3) [16],uint param_4)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  undefined1 (*pauVar5) [16];
  int iVar6;
  undefined1 *puVar7;
  undefined1 (*pauVar8) [16];
  uint uVar9;
  int iVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 *puStack_7c;
  undefined1 (*pauStack_78) [16];
  uint uStack_74;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffff0;
  puVar7 = *param_1 + param_2;
  uVar4 = param_2 & 0xf;
  if (param_4 < 0x11) {
    uStack_74 = param_4;
    pauStack_78 = param_3;
    puStack_7c = local_40;
    FUN_1025b2d0();
    local_30 = local_40;
    if (puVar7 != *param_1 + uVar4) {
      do {
        pauVar5 = (undefined1 (*) [16])(puVar7 + -0x10);
        bVar11 = puVar7 < (undefined1 *)0x10;
        puVar7 = puVar7 + -0x10;
        pcmpestri(local_40,*pauVar5,0x40,param_4,0x10);
        if (bVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_102283e0();
        }
      } while (puVar7 != *param_1 + uVar4);
    }
    if (uVar4 != 0) {
      if (param_2 < 0x10) {
        uStack_74 = param_2;
        pauStack_78 = param_1;
        puStack_7c = local_40;
        FUN_1025b2d0();
        uVar12 = local_40._0_4_;
        uVar13 = local_40._4_4_;
        uVar14 = local_40._8_4_;
        uVar15 = local_40._12_4_;
        uVar16 = local_30._0_4_;
        uVar17 = local_30._4_4_;
        uVar18 = local_30._8_4_;
        uVar19 = local_30._12_4_;
      }
      else {
        uVar12 = *(undefined4 *)*param_1;
        uVar13 = *(undefined4 *)(*param_1 + 4);
        uVar14 = *(undefined4 *)(*param_1 + 8);
        uVar15 = *(undefined4 *)(*param_1 + 0xc);
        uVar16 = local_40._0_4_;
        uVar17 = local_40._4_4_;
        uVar18 = local_40._8_4_;
        uVar19 = local_40._12_4_;
      }
      auVar2._4_4_ = uVar13;
      auVar2._0_4_ = uVar12;
      auVar2._8_4_ = uVar14;
      auVar2._12_4_ = uVar15;
      auVar3._4_4_ = uVar17;
      auVar3._0_4_ = uVar16;
      auVar3._8_4_ = uVar18;
      auVar3._12_4_ = uVar19;
      pcmpestri(auVar3,auVar2,0x40,param_4,uVar4);
      if (param_2 < 0x10 && (undefined1 *)0xfffffff3 < &puStack_7c) {
                    /* WARNING: Subroutine does not return */
        FUN_102283e0();
      }
    }
  }
  else {
    uVar9 = param_4 & 0xf;
    pauVar5 = (undefined1 (*) [16])(*param_3 + (param_4 & 0xfffffff0));
    puStack_7c = local_30;
    pauStack_78 = pauVar5;
    uStack_74 = uVar9;
    FUN_1025b2d0();
    local_40 = local_30;
    if (puVar7 != *param_1 + uVar4) {
      do {
        pauVar1 = (undefined1 (*) [16])(puVar7 + -0x10);
        puVar7 = puVar7 + -0x10;
        bVar11 = false;
        iVar10 = -1;
        pauVar8 = param_3;
        do {
          iVar6 = pcmpestri(*pauVar8,*pauVar1,0x40,0x10,0x10);
          if ((bVar11) && (iVar10 < iVar6)) {
            iVar10 = iVar6;
          }
          pauVar8 = pauVar8 + 1;
          bVar11 = pauVar8 < pauVar5;
        } while (pauVar8 != pauVar5);
        if (uVar9 != 0) {
          pcmpestri(local_30,*pauVar1,0x40,uVar9,0x10);
        }
        if (iVar10 != -1) {
                    /* WARNING: Subroutine does not return */
          FUN_102283e0();
        }
      } while (puVar7 != *param_1 + uVar4);
    }
    if (uVar4 != 0) {
      if (0xf < param_2) {
        pauStack_78 = (undefined1 (*) [16])0x1022b0c7;
        uStack_74 = uVar4;
        FUN_1022b7a0();
                    /* WARNING: Subroutine does not return */
        FUN_102283e0();
      }
      uStack_74 = param_2;
      pauStack_78 = param_1;
      puStack_7c = local_30;
      FUN_1025b2d0();
      pauStack_78 = (undefined1 (*) [16])0x1022b110;
      uStack_74 = uVar4;
      FUN_1022b7a0();
                    /* WARNING: Subroutine does not return */
      FUN_102283e0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

