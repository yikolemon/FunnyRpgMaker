/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140025271 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_140025271(double param_1,double param_2,double param_3,char param_4)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  ulonglong uVar6;
  double dVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_118 [32];
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14012ea80 ^ (ulonglong)auStack_118;
  FUN_14001b7c4(&local_d8,param_1,param_2,param_3);
  dVar1 = (double)FUN_14001b886((longlong)&local_d8);
  if (dVar1 < param_2) {
    uVar2 = FUN_14001b886((longlong)&local_d8);
    uVar11 = (undefined4)uVar2;
    uVar12 = (undefined4)((ulonglong)uVar2 >> 0x20);
    dVar1 = (double)FUN_14001b886((longlong)&local_d8);
    dVar7 = DAT_1400edce0;
    uVar6 = _UNK_1400b6b08;
    uVar5 = _DAT_1400b6b00;
    if (dVar1 < param_2) {
      if (param_4 == '\0') {
        uVar16 = (undefined4)DAT_1400b6b38;
        uVar17 = (undefined4)((ulonglong)DAT_1400b6b38 >> 0x20);
      }
      else {
        uVar16 = (undefined4)DAT_1400e72b0;
        uVar17 = (undefined4)((ulonglong)DAT_1400e72b0 >> 0x20);
      }
      uVar13 = extraout_XMM0_Dc;
      uVar14 = extraout_XMM0_Dd;
      do {
        param_3 = param_3 + (double)CONCAT44(uVar17,uVar16);
        FUN_14001b7c4(&local_f8,param_1,param_2,param_3);
        dVar1 = (double)FUN_14001b886((longlong)&local_f8);
        if (dVar1 <= (double)CONCAT44(uVar12,uVar11) && (double)CONCAT44(uVar12,uVar11) != dVar1)
        break;
        dVar1 = (double)FUN_14001b886((longlong)&local_f8);
        if ((double)((ulonglong)(dVar1 - param_2) & uVar5) < dVar7) break;
        dVar1 = (double)FUN_14001b886((longlong)&local_f8);
        dVar3 = (double)FUN_14001b886((longlong)&local_d8);
        if ((double)((ulonglong)(dVar1 - param_2) & uVar5) <
            (double)((ulonglong)(dVar3 - param_2) & uVar6)) {
          local_c8 = local_e8;
          uStack_c0 = uStack_e0;
          local_d8 = local_f8;
          uStack_d0 = uStack_f0;
        }
        dVar1 = (double)FUN_14001b886((longlong)&local_f8);
        uVar8 = -(ulonglong)
                 (NAN((double)CONCAT44(uVar12,uVar11)) || NAN((double)CONCAT44(uVar12,uVar11)));
        uVar9 = SUB84(dVar1,0);
        uVar10 = (int)((ulonglong)dVar1 >> 0x20);
        if (dVar1 <= (double)CONCAT44(uVar12,uVar11)) {
          uVar9 = uVar11;
          uVar10 = uVar12;
        }
        auVar15._0_8_ = ~uVar8 & CONCAT44(uVar10,uVar9);
        auVar15._8_8_ = ~CONCAT44(uVar14,uVar13) & CONCAT44(extraout_XMM0_Dd_00,extraout_XMM0_Dc_00)
        ;
        auVar4._8_8_ = CONCAT44(uVar14,uVar13) & CONCAT44(extraout_XMM0_Dd_00,extraout_XMM0_Dc_00);
        auVar4._0_8_ = uVar8 & (ulonglong)dVar1;
        auVar15 = auVar15 | auVar4;
        dVar1 = (double)FUN_14001b886((longlong)&local_d8);
        uVar11 = auVar15._0_4_;
        uVar12 = auVar15._4_4_;
        uVar13 = auVar15._8_4_;
        uVar14 = auVar15._12_4_;
      } while (dVar1 < param_2);
    }
  }
  if (DAT_14012ea80 == (local_b0 ^ (ulonglong)auStack_118)) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_b0 ^ (ulonglong)auStack_118);
}

