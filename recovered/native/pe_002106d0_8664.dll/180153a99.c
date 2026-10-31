/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180153a99 */

void FUN_180153a99(longlong param_1,longlong param_2,float param_3)

{
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    fVar10 = 0.0;
    if ((*(uint *)(param_2 + 4) & 0xc0) == 0) {
      fVar10 = *(float *)(param_1 + 0x60);
    }
    fVar10 = *(float *)(param_1 + 0x38) - fVar10;
    fVar11 = *(float *)(param_2 + 0x18) + fVar10;
    lVar1 = *(longlong *)(param_1 + 0x10);
    iVar8 = (int)((ulonglong)(param_2 - lVar1) >> 3);
    uVar9 = iVar8 * -0x49249249;
    if (-1 < (int)uVar9) {
      if ((int)uVar9 < *(int *)(param_1 + 8)) {
        iVar7 = (uint)(fVar11 <= param_3) * 2 + -1;
        uVar2 = uVar9;
        do {
          uVar4 = uVar9;
          uVar5 = *(uint *)(lVar1 + 4 + (ulonglong)uVar4 * 0x38);
          uVar9 = uVar2;
          if (((uVar5 & 0x20) != 0) || (((uVar5 ^ *(uint *)(param_2 + 4)) & 0xc0) != 0))
          goto LAB_180153b91;
          lVar6 = (ulonglong)uVar4 * 0x38 + lVar1;
          fVar12 = *(float *)(lVar6 + 0x18) + fVar10;
          bVar3 = *(float *)(lVar6 + 0x1c) + fVar12 + *(float *)(DAT_180419160 + 0xe0c) <= param_3;
          if (param_3 < fVar11) {
            bVar3 = param_3 <= fVar12 - *(float *)(DAT_180419160 + 0xe0c);
          }
          uVar9 = uVar4;
          if ((!bVar3) || (uVar5 = uVar4 + iVar7, (int)uVar5 < 0)) goto LAB_180153b91;
          uVar9 = uVar5;
          uVar2 = uVar4;
        } while ((int)uVar5 < *(int *)(param_1 + 8));
        uVar9 = uVar5 - iVar7;
      }
LAB_180153b91:
      if (uVar9 + iVar8 * 0x49249249 != 0) {
        FUN_180153a8b();
        return;
      }
    }
  }
  return;
}

