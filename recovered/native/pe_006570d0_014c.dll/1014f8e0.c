/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014f8e0 */

void FUN_1014f8e0(int param_1,int param_2,float param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    fVar9 = 0.0;
    if ((*(uint *)(param_2 + 4) & 0xc0) == 0) {
      fVar9 = *(float *)(param_1 + 0x58);
    }
    fVar9 = *(float *)(param_1 + 0x30) - fVar9;
    fVar10 = *(float *)(param_2 + 0x14) + fVar9;
    iVar7 = param_2 - *(int *)(param_1 + 0xc);
    if (-0x30 < iVar7) {
      iVar7 = iVar7 >> 4;
      iVar8 = iVar7 * -0x55555555;
      if (iVar8 < *(int *)(param_1 + 4)) {
        iVar1 = (uint)(fVar10 <= param_3) * 2 + -1;
        pfVar6 = (float *)(iVar7 * 0x10 + *(int *)(param_1 + 0xc) + 0x18);
        iVar5 = iVar8;
        do {
          iVar3 = iVar8;
          iVar8 = iVar5;
          if ((((uint)pfVar6[-5] & 0x20) != 0) ||
             ((((uint)pfVar6[-5] ^ *(uint *)(param_2 + 4)) & 0xc0) != 0)) goto LAB_1014f9e6;
          fVar11 = pfVar6[-1] + fVar9;
          bVar2 = *pfVar6 + fVar11 + *(float *)(DAT_1039d74c + 0xd24) <= param_3;
          if (param_3 < fVar10) {
            bVar2 = param_3 <= fVar11 - *(float *)(DAT_1039d74c + 0xd24);
          }
          iVar8 = iVar3;
          if ((!bVar2) || (iVar4 = iVar3 + iVar1, iVar4 < 0)) goto LAB_1014f9e6;
          pfVar6 = pfVar6 + iVar1 * 0xc;
          iVar8 = iVar4;
          iVar5 = iVar3;
        } while (iVar4 < *(int *)(param_1 + 4));
        iVar8 = iVar4 - iVar1;
      }
LAB_1014f9e6:
      iVar8 = iVar8 + iVar7 * 0x55555555;
      if (iVar8 != 0) {
        FUN_1014f8c9(param_1,param_2,iVar8);
      }
    }
  }
  return;
}

