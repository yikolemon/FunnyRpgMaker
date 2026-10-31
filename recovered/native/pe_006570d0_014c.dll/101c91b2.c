/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c91b2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_101c91b2(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  iVar6 = 0;
  iVar2 = 100;
  do {
    iVar7 = (iVar2 + iVar6) / 2;
    fVar8 = (float10)FUN_101c9662((double)iVar7);
    fVar9 = (float10)FUN_101c9662((double)(iVar7 + 1));
    fVar10 = (float10)FUN_101c9662((double)iVar7);
    iVar3 = iVar7;
    iVar1 = iVar6;
    if (*(double *)(param_1 + 0x10) + _DAT_10303b28 <= (double)fVar10) {
      uVar4 = -(iVar6 - 0x32U);
      if ((int)uVar4 < 0) {
        uVar4 = iVar6 - 0x32U;
      }
      uVar5 = -(iVar2 - 0x32U);
      if ((int)uVar5 < 0) {
        uVar5 = iVar2 - 0x32U;
      }
      if ((uVar5 <= uVar4) && (iVar3 = iVar2, iVar1 = iVar7, iVar6 == iVar7)) break;
    }
    else if ((double)fVar8 < (double)fVar9) {
      iVar3 = iVar2;
      iVar1 = iVar7 + 1;
    }
    iVar6 = iVar1;
    iVar2 = iVar3;
  } while (iVar6 < iVar3);
  FUN_101974ac(*(undefined8 *)(param_1 + 8),*(double *)(param_1 + 0x10),(double)iVar6);
  return param_2;
}

