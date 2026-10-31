/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d1e6b */

undefined8 FUN_1801d1e6b(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined1 auStack_188 [32];
  int local_168;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_180402640 ^ (ulonglong)auStack_188;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_158 = param_1;
  FUN_1801d1b9e(param_2,param_3,&local_f8);
  local_108 = local_e8;
  local_118 = (undefined4)local_f8;
  uStack_114 = local_f8._4_4_;
  uStack_110 = (undefined4)uStack_f0;
  uStack_10c = uStack_f0._4_4_;
  uVar10 = FUN_1801d17f9(&local_f8);
  dVar2 = DAT_1802df1c8;
  local_138 = (undefined4)uStack_e0;
  uStack_134 = uStack_e0._4_4_;
  uStack_130 = (undefined4)local_d8;
  uStack_12c = local_d8._4_4_;
  local_128 = uStack_d0;
  iVar7 = 0;
  do {
    dVar13 = (double)FUN_1801d198a(&local_118,iVar7);
    dVar14 = (double)FUN_1801d198a(&local_138,iVar7);
    if ((dVar13 != dVar14) || (NAN(dVar13) || NAN(dVar14))) {
      dVar13 = (double)FUN_1801d198a(&local_118,iVar7);
      dVar14 = (double)FUN_1801d198a(&local_138,iVar7);
      FUN_1801d198a(&local_118,iVar7);
      uVar11 = FUN_1801d1745();
      FUN_1801d198a(&local_138,iVar7);
      uVar12 = FUN_1801d1745();
      if (dVar14 <= dVar13) {
        iVar4 = FUN_1801d1e51(uVar11);
        iVar5 = FUN_1801d1e37(uVar12);
      }
      else {
        iVar4 = FUN_1801d1e37();
        iVar5 = FUN_1801d1e51(uVar12);
      }
      iVar8 = 8;
      do {
        uVar1 = iVar4 - iVar5;
        if (iVar4 < iVar5) {
          uVar1 = iVar5 - iVar4;
        }
        if (uVar1 < 2) break;
        dVar13 = (double)FUN_180285130(SUB84((double)(iVar5 + iVar4) * dVar2,0));
        iVar9 = (int)dVar13;
        local_168 = iVar7;
        FUN_1801d19b2(&local_150,&local_118,*(undefined8 *)(&DAT_1803298a0 + (longlong)iVar9 * 8),
                      &local_138);
        uVar15 = FUN_1801d17f9(&local_150);
        cVar3 = FUN_1801d18e0(uVar10,param_3,uVar15);
        puVar6 = &local_138;
        if (cVar3 == '\0') {
          puVar6 = &local_118;
          uVar10 = (int)uVar15;
          iVar4 = iVar9;
          iVar9 = iVar5;
        }
        iVar5 = iVar9;
        *puVar6 = local_150;
        puVar6[1] = uStack_14c;
        puVar6[2] = uStack_148;
        puVar6[3] = uStack_144;
        *(undefined8 *)(puVar6 + 4) = local_140;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    uVar15 = local_158;
    iVar7 = iVar7 + 1;
    if (iVar7 == 3) {
      FUN_1801d1e02(local_158,&local_118,&local_138);
      if (DAT_180402640 != (local_c0 ^ (ulonglong)auStack_188)) {
                    /* WARNING: Subroutine does not return */
        FUN_1802396d0(local_c0 ^ (ulonglong)auStack_188);
      }
      return uVar15;
    }
  } while( true );
}

