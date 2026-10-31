/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c7eba */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_101c7eba(double param_1,double param_2,double param_3)

{
  double dVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 uStack_44;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  double dStack_20;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  if (param_3 < 0.0) {
    fVar5 = (float10)FUN_10270500(param_3);
    dVar11 = (double)fVar5;
  }
  else {
    dVar11 = SQRT(param_3);
  }
  dVar11 = dVar11 * DAT_10303838;
  fVar5 = (float10)FUN_1026d4b0(DAT_10303890 + param_1);
  dVar1 = ((double)fVar5 + _DAT_10303898) * DAT_102b8f88 * _DAT_103038a0 * _DAT_103038a8;
  fVar5 = (float10)FUN_102704b0(param_1);
  fVar6 = (float10)FUN_1026d4b0(param_1);
  iVar3 = 4;
  dVar1 = dVar1 * _DAT_103038c8;
  while( true ) {
    dVar12 = dVar11 / DAT_103037f0;
    if (((param_2 != 0.0) || (dVar10 = 0.0, NAN(param_2))) &&
       ((dVar11 != 0.0 || (dVar10 = 0.0, NAN(dVar11))))) {
      if (dVar12 < 0.0) {
        fVar7 = (float10)FUN_10270500(dVar12);
        dVar10 = (double)fVar7;
      }
      else {
        dVar10 = SQRT(dVar12);
      }
      dVar10 = (param_2 / dVar10) * _DAT_103038b0;
    }
    fVar7 = (float10)FUN_1026fab0(dVar10,0x71c71c72,0x3ff1c71c);
    dVar10 = (double)fVar7;
    fVar7 = (float10)FUN_1026fab0(dVar12,0x4737f42c,0x3fe84aa7);
    dVar12 = ((double)fVar7 * _DAT_103038b8) / _DAT_103038a8;
    dVar13 = ((dVar12 + _DAT_103038c0) * _DAT_103038c8 * dVar10) /
             (dVar10 * _DAT_103038d0 * (double)fVar5 + dVar10 * DAT_10303838 * (double)fVar6 + dVar1
             );
    dVar10 = (double)fVar6 * dVar13;
    dVar13 = dVar13 * (double)fVar5;
    dVar12 = dVar12 * _DAT_103038e0;
    dVar15 = (dVar13 * _DAT_10303900 + dVar10 * _DAT_103038f8 + dVar12) / DAT_103038f0;
    dVar14 = (dVar13 * _DAT_10303910 + dVar10 * _DAT_10303908 + dVar12) / DAT_103038f0;
    fVar7 = (float10)FUN_101c7e21((dVar13 * _DAT_103038e8 + dVar10 * _DAT_103038d8 + dVar12) /
                                  DAT_103038f0);
    fVar8 = (float10)FUN_101c7e21(dVar15);
    fVar9 = (float10)FUN_101c7e21(dVar14);
    uStack_44 = (undefined4)((ulonglong)(double)fVar7 >> 0x20);
    FUN_101c90ad(&uStack_30,SUB84((double)fVar7,0),uStack_44,(double)fVar8,(double)fVar9,
                 &DAT_103037a0);
    dVar12 = (double)CONCAT44(uStack_2c,uStack_30);
    uVar2 = 0;
    if ((((dVar12 < 0.0) || (dVar10 = (double)CONCAT44(uStack_24,uStack_28), dVar10 < 0.0)) ||
        (dStack_20 < 0.0)) ||
       (dVar13 = dStack_20 * DAT_10303860 + dVar12 * DAT_10303878 + dVar10 * DAT_10303870,
       dVar13 <= 0.0)) goto LAB_101c8302;
    bVar4 = iVar3 == 0;
    iVar3 = iVar3 + -1;
    if ((bVar4) || ((double)((ulonglong)(dVar13 - param_3) & _DAT_1028b420) < DAT_10303918)) break;
    dVar11 = dVar11 - ((dVar13 - param_3) * dVar11) / (dVar13 + dVar13);
  }
  if ((dVar12 <= _DAT_10303920) && ((dVar10 <= _DAT_10303920 && (dStack_20 <= _DAT_10303920)))) {
    uVar2 = FUN_101c8cc8(uStack_30,uStack_2c,uStack_28,uStack_24,SUB84(dStack_20,0),
                         (int)((ulonglong)dStack_20 >> 0x20));
  }
LAB_101c8302:
  if (DAT_10388d00 == (local_14 ^ (uint)&stack0xfffffffc)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

