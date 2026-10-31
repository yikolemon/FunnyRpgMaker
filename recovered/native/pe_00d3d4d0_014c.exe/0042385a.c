/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042385a */

double * __cdecl FUN_0042385a(double *param_1,double param_2,double param_3)

{
  undefined4 *puVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  double local_f8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  double local_80;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  double local_60;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint local_18;
  
  local_18 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  local_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  local_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  FUN_0042352c(param_2,param_3,(double *)&local_50);
  local_60 = (double)CONCAT44(uStack_3c,local_40);
  local_70 = local_50;
  uStack_6c = uStack_4c;
  uStack_68 = uStack_48;
  uStack_64 = uStack_44;
  fVar10 = (float10)FUN_004230b6(local_50,uStack_4c,uStack_48,uStack_44,
                                 (double)CONCAT44(uStack_3c,local_40));
  local_f8 = (double)fVar10;
  local_80 = (double)CONCAT44(uStack_24,uStack_28);
  local_90 = uStack_38;
  uStack_8c = uStack_34;
  uStack_88 = local_30;
  uStack_84 = uStack_2c;
  iVar7 = 0;
  do {
    fVar10 = FUN_0042328c((double)CONCAT44(uStack_6c,local_70),(double)CONCAT44(uStack_64,uStack_68)
                          ,local_60,iVar7);
    fVar11 = FUN_0042328c((double)CONCAT44(uStack_8c,local_90),(double)CONCAT44(uStack_84,uStack_88)
                          ,local_80,iVar7);
    if (((double)fVar10 != (double)fVar11) || (NAN((double)fVar10) || NAN((double)fVar11))) {
      fVar10 = FUN_0042328c((double)CONCAT44(uStack_6c,local_70),
                            (double)CONCAT44(uStack_64,uStack_68),local_60,iVar7);
      fVar11 = FUN_0042328c((double)CONCAT44(uStack_8c,local_90),
                            (double)CONCAT44(uStack_84,uStack_88),local_80,iVar7);
      fVar12 = FUN_0042328c((double)CONCAT44(uStack_6c,local_70),
                            (double)CONCAT44(uStack_64,uStack_68),local_60,iVar7);
      fVar12 = FUN_00422fbb(extraout_ECX,SUB84((double)fVar12,0),
                            (int)((ulonglong)(double)fVar12 >> 0x20));
      fVar13 = FUN_0042328c((double)CONCAT44(uStack_8c,local_90),
                            (double)CONCAT44(uStack_84,uStack_88),local_80,iVar7);
      fVar13 = FUN_00422fbb(extraout_ECX_00,SUB84((double)fVar13,0),
                            (int)((ulonglong)(double)fVar13 >> 0x20));
      if ((double)fVar11 <= (double)fVar10) {
        iVar4 = FUN_0042382c((double)fVar12);
        iVar5 = FUN_004237fe((double)fVar13);
      }
      else {
        iVar4 = FUN_004237fe((double)fVar12);
        iVar5 = FUN_0042382c((double)fVar13);
      }
      iVar8 = 8;
      do {
        uVar6 = iVar4 - iVar5;
        if (iVar4 < iVar5) {
          uVar6 = iVar5 - iVar4;
        }
        if (uVar6 < 2) break;
        fVar10 = FUN_00490ef0((double)(iVar5 + iVar4) * DAT_004cda70);
        iVar9 = (int)fVar10;
        FUN_004232d1((double *)&local_a8,local_70,uStack_6c,uStack_68,uStack_64,local_60,
                     *(double *)(&DAT_004d7558 + iVar9 * 8),local_90,uStack_8c,uStack_88,uStack_84,
                     local_80,iVar7);
        fVar10 = (float10)FUN_004230b6(local_a8,uStack_a4,uStack_a0,uStack_9c,local_98);
        bVar3 = FUN_004231c8(local_f8,param_3,(double)fVar10);
        puVar1 = &local_70;
        dVar2 = (double)fVar10;
        if (bVar3) {
          puVar1 = &local_90;
          iVar5 = iVar9;
          iVar9 = iVar4;
          dVar2 = local_f8;
        }
        local_f8 = dVar2;
        iVar4 = iVar9;
        *puVar1 = local_a8;
        puVar1[1] = uStack_a4;
        puVar1[2] = uStack_a0;
        puVar1[3] = uStack_9c;
        *(double *)(puVar1 + 4) = local_98;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    iVar7 = iVar7 + 1;
    if (iVar7 == 3) {
      FUN_004237c4(param_1,(double)CONCAT44(uStack_6c,local_70),
                   (double)CONCAT44(uStack_64,uStack_68),local_60,
                   (double)CONCAT44(uStack_8c,local_90),(double)CONCAT44(uStack_84,uStack_88),
                   local_80);
      if (DAT_0050e8c0 == (local_18 ^ (uint)&stack0xfffffffc)) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0047f2c0(local_18 ^ (uint)&stack0xfffffffc);
    }
  } while( true );
}

