/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14011aa65 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_14011aa65(undefined8 param_1,double param_2,double param_3,char param_4)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_140f17b40 ^ (ulonglong)auStack_118;
  FUN_14010beec(&local_d8,param_1,param_2,param_3);
  dVar5 = (double)FUN_14010bfae(&local_d8);
  if (dVar5 < param_2) {
    dVar5 = (double)FUN_14010bfae(&local_d8);
    dVar6 = (double)FUN_14010bfae(&local_d8);
    dVar4 = DAT_140e94b80;
    uVar3 = _UNK_1401ced58;
    uVar2 = _DAT_1401ced50;
    if (dVar6 < param_2) {
      if (param_4 == '\0') {
        uVar11 = (undefined4)DAT_1401ced60;
        uVar12 = (undefined4)((ulonglong)DAT_1401ced60 >> 0x20);
      }
      else {
        uVar11 = (undefined4)DAT_140e8e150;
        uVar12 = (undefined4)((ulonglong)DAT_140e8e150 >> 0x20);
      }
      uVar8 = extraout_XMM0_Dc;
      uVar9 = extraout_XMM0_Dd;
      do {
        param_3 = param_3 + (double)CONCAT44(uVar12,uVar11);
        FUN_14010beec(&local_f8,param_1,param_2,param_3);
        dVar6 = (double)FUN_14010bfae(&local_f8);
        if (dVar6 < dVar5) break;
        dVar6 = (double)FUN_14010bfae(&local_f8);
        if ((double)((ulonglong)(dVar6 - param_2) & uVar2) < dVar4) break;
        dVar6 = (double)FUN_14010bfae(&local_f8);
        dVar7 = (double)FUN_14010bfae(&local_d8);
        if ((double)((ulonglong)(dVar6 - param_2) & uVar2) <
            (double)((ulonglong)(dVar7 - param_2) & uVar3)) {
          local_c8 = local_e8;
          uStack_c0 = uStack_e0;
          local_d8 = local_f8;
          uStack_d4 = uStack_f4;
          uStack_d0 = uStack_f0;
          uStack_cc = uStack_ec;
        }
        dVar7 = (double)FUN_14010bfae(&local_f8);
        dVar6 = dVar7;
        if (dVar7 <= dVar5) {
          dVar6 = dVar5;
        }
        auVar10._0_8_ = ~-(ulonglong)NAN(dVar5) & (ulonglong)dVar6;
        auVar10._8_8_ = ~CONCAT44(uVar9,uVar8) & CONCAT44(extraout_XMM0_Dd_00,extraout_XMM0_Dc_00);
        auVar1._8_8_ = CONCAT44(uVar9,uVar8) & CONCAT44(extraout_XMM0_Dd_00,extraout_XMM0_Dc_00);
        auVar1._0_8_ = -(ulonglong)NAN(dVar5) & (ulonglong)dVar7;
        auVar10 = auVar10 | auVar1;
        dVar6 = (double)FUN_14010bfae(&local_d8);
        dVar5 = auVar10._0_8_;
        uVar8 = auVar10._8_4_;
        uVar9 = auVar10._12_4_;
      } while (dVar6 < param_2);
    }
  }
  if (DAT_140f17b40 == (local_b0 ^ (ulonglong)auStack_118)) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_b0 ^ (ulonglong)auStack_118);
}

