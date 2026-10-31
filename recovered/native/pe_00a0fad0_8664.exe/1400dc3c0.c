/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400dc3c0 */

void FUN_1400dc3c0(undefined1 (*param_1) [16],ulonglong param_2,undefined1 (*param_3) [16],
                  ulonglong param_4)

{
  int iVar1;
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  uint uVar4;
  undefined1 (*pauVar5) [16];
  uint uVar6;
  undefined1 (*pauVar7) [16];
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar14;
  undefined1 auVar13 [16];
  uint uVar15;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = DAT_1401c9640 ^ (ulonglong)auStack_88;
  pauVar7 = (undefined1 (*) [16])(*param_1 + (param_2 & 0xfffffffffffffff0));
  uVar4 = (uint)param_4;
  if (param_4 < 0x11) {
    uVar8 = FUN_140135ff0(local_68,param_3,param_4);
    auVar12 = local_68;
    for (; param_1 != pauVar7; param_1 = param_1 + 1) {
      uVar8 = SUB168(*param_1,0);
      pcmpestri(local_68,*param_1,0x30,uVar4,0x10);
      if (param_1 < pauVar7) goto LAB_1400dc5b2;
    }
    uVar6 = (uint)param_2 & 0xf;
    if ((param_2 & 0xf) != 0) {
      FUN_140135ff0(local_68,param_1,uVar6);
      uVar8 = local_68._0_8_;
      pcmpestri(auVar12,local_68,0x30,uVar4,uVar6);
    }
  }
  else {
    uVar4 = uVar4 & 0xf;
    pauVar3 = (undefined1 (*) [16])(*param_3 + (param_4 & 0xfffffffffffffff0));
    uVar8 = FUN_140135ff0(local_68,pauVar3,uVar4);
    auVar12 = local_68;
    pauVar5 = param_3 + 1;
    if (param_1 != pauVar7) {
      do {
        auVar11 = *param_1;
        auVar9 = pcmpestrm(*param_3,auVar11,0x30,0x10,0x10);
        uVar8 = auVar9._0_8_;
        pauVar2 = pauVar5;
        while( true ) {
          uVar6 = auVar9._8_4_;
          uVar14 = auVar9._12_4_;
          if (pauVar2 == pauVar3) break;
          auVar10 = *pauVar2;
          pauVar2 = pauVar2 + 1;
          auVar10 = pcmpestrm(auVar10,auVar11,0x30,0x10,0x10);
          uVar8 = auVar10._0_8_;
          auVar13._0_4_ = auVar9._0_4_ & auVar10._0_4_;
          auVar13._4_4_ = auVar9._4_4_ & auVar10._4_4_;
          auVar13._8_4_ = uVar6 & auVar10._8_4_;
          auVar13._12_4_ = uVar14 & auVar10._12_4_;
          auVar9 = auVar13;
        }
        if ((param_4 & 0xf) != 0) {
          auVar11 = pcmpestrm(local_68,auVar11,0x30,uVar4,0x10);
          uVar8 = auVar11._0_8_;
          auVar9._0_4_ = auVar9._0_4_ & auVar11._0_4_;
          auVar9._4_4_ = 0;
          auVar9._8_4_ = uVar6 & auVar11._8_4_;
          auVar9._12_4_ = uVar14 & auVar11._12_4_;
        }
        uVar6 = auVar9._0_4_;
        if (uVar6 != 0) {
          iVar1 = 0;
          if (uVar6 != 0) {
            for (; (uVar6 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
            }
          }
          if ((iVar1 < 0x10) && (iVar1 != 0x10)) goto LAB_1400dc5b2;
        }
        param_1 = param_1 + 1;
      } while (param_1 != pauVar7);
    }
    uVar6 = (uint)param_2 & 0xf;
    if ((param_2 & 0xf) != 0) {
      FUN_140135ff0(local_68,param_1,uVar6);
      auVar11 = pcmpestrm(*param_3,local_68,0x30,0x10,uVar6);
      uVar8 = auVar11._0_8_;
      while( true ) {
        uVar14 = auVar11._8_4_;
        uVar15 = auVar11._12_4_;
        if (pauVar5 == pauVar3) break;
        auVar9 = *pauVar5;
        pauVar5 = pauVar5 + 1;
        auVar9 = pcmpestrm(auVar9,local_68,0x30,0x10,uVar6);
        uVar8 = auVar9._0_8_;
        auVar10._0_4_ = auVar11._0_4_ & auVar9._0_4_;
        auVar10._4_4_ = auVar11._4_4_ & auVar9._4_4_;
        auVar10._8_4_ = uVar14 & auVar9._8_4_;
        auVar10._12_4_ = uVar15 & auVar9._12_4_;
        auVar11 = auVar10;
      }
      if ((param_4 & 0xf) != 0) {
        auVar12 = pcmpestrm(auVar12,local_68,0x30,uVar4,uVar6);
        uVar8 = auVar12._0_8_;
        auVar11._0_4_ = auVar11._0_4_ & auVar12._0_4_;
        auVar11._4_4_ = 0;
        auVar11._8_4_ = uVar14 & auVar12._8_4_;
        auVar11._12_4_ = uVar15 & auVar12._12_4_;
      }
      uVar4 = auVar11._0_4_;
      if ((uVar4 != 0) && (iVar1 = 0, uVar4 != 0)) {
        for (; (uVar4 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
        }
      }
    }
  }
LAB_1400dc5b2:
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(uVar8);
}

