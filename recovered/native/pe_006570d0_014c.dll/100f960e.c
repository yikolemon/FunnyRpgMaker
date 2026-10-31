/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f960e */

void __thiscall FUN_100f960e(int param_1,float param_2,float param_3)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  if (*(char *)(param_1 + 0xbad) == '\x01') {
    if (DAT_102b89b0 < param_3) {
      param_3 = (float)(int)((int)param_3 - (uint)((float)(int)param_3 != param_3 && param_3 < 0.0))
      ;
    }
    iVar1 = *(int *)(param_1 + 0xb0);
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
    if (DAT_102b89b0 < param_2) {
      param_2 = (float)(int)((int)param_2 - (uint)((float)(int)param_2 != param_2 && param_2 < 0.0))
      ;
    }
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0;
    iVar3 = FUN_100f9526(0xffffffff);
    pfVar5 = (float *)(iVar3 + 0x10);
    pfVar2 = (float *)(iVar3 + 0xc);
    if (iVar3 == 0) {
      pfVar5 = (float *)(iVar1 + 0xe8);
      pfVar2 = (float *)(iVar1 + 0xe4);
    }
    if ((*pfVar2 == param_2) && (!NAN(*pfVar2) && !NAN(param_2))) {
      if ((*pfVar5 == param_3) && (!NAN(*pfVar5) && !NAN(param_3))) {
        return;
      }
    }
    iVar3 = *(int *)(iVar1 + 0x1480);
    *(int *)(iVar1 + 0x1480) = iVar3 + 1;
    iVar4 = *(int *)(iVar1 + 0x1464);
    uVar7 = *(undefined4 *)(iVar1 + 0x147c);
    if (iVar4 == *(int *)(iVar1 + 0x1468)) {
      if (iVar4 == 0) {
        iVar6 = 8;
      }
      else {
        iVar6 = iVar4 / 2 + iVar4;
      }
      iVar8 = iVar4 + 1;
      if (iVar4 + 1 < iVar6) {
        iVar8 = iVar6;
      }
      iVar6 = FUN_100fa1fa(iVar8 * 0x1c,uVar7,param_2,uVar9,uVar10,uVar11,param_3,uVar12,uVar13,
                           uVar14);
      if (*(int *)(iVar1 + 0x146c) != 0) {
        FUN_1025b2d0(iVar6,*(int *)(iVar1 + 0x146c),*(int *)(iVar1 + 0x1464) * 0x1c);
        FUN_100fa2cb(*(undefined4 *)(iVar1 + 0x146c));
      }
      *(int *)(iVar1 + 0x146c) = iVar6;
      *(int *)(iVar1 + 0x1468) = iVar8;
      iVar4 = *(int *)(iVar1 + 0x1464);
    }
    else {
      iVar6 = *(int *)(iVar1 + 0x146c);
    }
    iVar4 = iVar4 * 0x1c;
    *(undefined4 *)(iVar6 + iVar4) = 1;
    *(undefined4 *)(iVar6 + 4 + iVar4) = 1;
    *(int *)(iVar6 + 8 + iVar4) = iVar3;
    *(float *)(iVar6 + 0xc + iVar4) = param_2;
    *(float *)(iVar6 + 0x10 + iVar4) = param_3;
    *(undefined4 *)(iVar6 + 0x14 + iVar4) = uVar7;
    *(undefined4 *)(iVar6 + 0x18 + iVar4) = 0;
    *(int *)(iVar1 + 0x1464) = *(int *)(iVar1 + 0x1464) + 1;
  }
  return;
}

