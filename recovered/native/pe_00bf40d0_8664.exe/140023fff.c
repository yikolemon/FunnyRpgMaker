/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140023fff */

double * FUN_140023fff(double *param_1,double param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  double *pdVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStackY_188 [32];
  double local_150;
  double dStack_148;
  double local_140;
  double local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  double local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  double dStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14012ea80 ^ (ulonglong)auStackY_188;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  dStack_e0 = 0.0;
  local_f8 = 0.0;
  uStack_f0 = 0;
  FUN_140023d32(param_2,param_3,&local_f8);
  local_108 = local_e8;
  local_118 = local_f8;
  uStack_110 = uStack_f0;
  dVar1 = FUN_14002398d(&local_f8);
  uVar12 = SUB84(dVar1,0);
  uVar13 = (undefined4)((ulonglong)dVar1 >> 0x20);
  local_138 = dStack_e0;
  uStack_130 = local_d8;
  local_128 = uStack_d0;
  iVar9 = 0;
  do {
    dVar1 = (double)FUN_140023b1e(&local_118,iVar9);
    dVar2 = (double)FUN_140023b1e(&local_138,iVar9);
    if ((dVar1 != dVar2) || (NAN(dVar1) || NAN(dVar2))) {
      dVar1 = (double)FUN_140023b1e(&local_118,iVar9);
      dVar2 = (double)FUN_140023b1e(&local_138,iVar9);
      dVar3 = (double)FUN_140023b1e(&local_118,iVar9);
      FUN_1400238d9(dVar3);
      dVar3 = (double)FUN_140023b1e(&local_138,iVar9);
      FUN_1400238d9(dVar3);
      if (dVar2 <= dVar1) {
        iVar5 = FUN_140023fe5();
        iVar6 = FUN_140023fcb();
      }
      else {
        iVar5 = FUN_140023fcb();
        iVar6 = FUN_140023fe5();
      }
      iVar10 = 8;
      do {
        uVar8 = iVar5 - iVar6;
        if (iVar5 < iVar6) {
          uVar8 = iVar6 - iVar5;
        }
        if (uVar8 < 2) break;
        dVar1 = FUN_1400983b0();
        iVar11 = (int)dVar1;
        FUN_140023b46(&local_150,&local_118,*(double *)(&DAT_1400e69f0 + (longlong)iVar11 * 8),
                      &local_138,iVar9);
        dVar1 = FUN_14002398d(&local_150);
        bVar4 = FUN_140023a74((double)CONCAT44(uVar13,uVar12),param_3,dVar1);
        pdVar7 = &local_138;
        if (!bVar4) {
          pdVar7 = &local_118;
          uVar12 = SUB84(dVar1,0);
          uVar13 = (int)((ulonglong)dVar1 >> 0x20);
          iVar5 = iVar11;
          iVar11 = iVar6;
        }
        iVar6 = iVar11;
        *pdVar7 = local_150;
        pdVar7[1] = dStack_148;
        pdVar7[2] = local_140;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    iVar9 = iVar9 + 1;
    if (iVar9 == 3) {
      FUN_140023f96(param_1,&local_118,&local_138);
      if (DAT_14012ea80 != (local_c0 ^ (ulonglong)auStackY_188)) {
                    /* WARNING: Subroutine does not return */
        FUN_140086440(local_c0 ^ (ulonglong)auStackY_188);
      }
      return param_1;
    }
  } while( true );
}

