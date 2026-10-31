/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012f051 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18012f051(void)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar3 = DAT_180419160;
  lVar4 = *(longlong *)(DAT_180419160 + 0x2200);
  lVar5 = (longlong)*(int *)(DAT_180419160 + 0x220c) * 0x10;
  iVar1 = *(int *)(DAT_180419160 + 0x22b0);
  uVar2 = *(uint *)(DAT_180419160 + 0x22a4);
  if ((longlong)*(int *)(DAT_180419160 + 0x220c) == 1) {
    uVar9 = *(ulonglong *)(lVar4 + 0x68);
  }
  else {
    uVar9 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar4 + 0x90) >> 0x20) +
                     (float)((ulonglong)*(undefined8 *)(lVar4 + 0x78) >> 0x20),
                     (float)*(undefined8 *)(lVar4 + 0x90) + (float)*(undefined8 *)(lVar4 + 0x78));
  }
  fVar11 = *(float *)(lVar4 + 0x45c + lVar5);
  fVar10 = *(float *)(lVar4 + 0x464 + lVar5);
  if ((uVar2 & 5) == 0 || iVar1 != 0) {
    if (iVar1 != 1 || (uVar2 & 5) == 0) {
      fVar12 = *(float *)(lVar4 + 0x458 + lVar5);
      fVar8 = *(float *)(lVar4 + 0x460 + lVar5);
      if ((uVar2 & 10) == 0 || iVar1 != 2) {
        if (iVar1 != 3 || (uVar2 & 10) == 0) {
          return;
        }
        fVar11 = (float)(*(uint *)(lVar4 + 0x94) ^ _DAT_1802b0ce0);
        uVar6 = 3;
        fVar10 = fVar11;
        if ((uVar2 & 8) != 0) {
          fVar7 = fVar8 - fVar12;
          fVar12 = fVar12 + fVar7;
          fVar8 = fVar7 + fVar8;
          uVar6 = 1;
        }
      }
      else {
        fVar11 = (float)(uVar9 >> 0x20);
        uVar6 = 2;
        fVar10 = fVar11;
        if ((uVar2 & 8) != 0) {
          fVar7 = fVar8 - fVar12;
          fVar12 = fVar12 - fVar7;
          fVar8 = fVar8 - fVar7;
          uVar6 = 0;
        }
      }
      goto LAB_18012f16e;
    }
    uVar9 = (ulonglong)(*(uint *)(lVar4 + 0x90) ^ _DAT_1802b0ce0);
    uVar6 = 1;
    if ((uVar2 & 4) != 0) {
      fVar12 = fVar10 - fVar11;
      fVar11 = fVar11 + fVar12;
      fVar10 = fVar10 + fVar12;
      uVar6 = 3;
    }
  }
  else {
    uVar6 = 0;
    if ((uVar2 & 4) != 0) {
      fVar12 = fVar10 - fVar11;
      fVar11 = fVar11 - fVar12;
      fVar10 = fVar10 - fVar12;
      uVar6 = 2;
    }
  }
  fVar12 = (float)uVar9;
  fVar8 = fVar12;
LAB_18012f16e:
  lVar4 = lVar4 + lVar5;
  *(float *)(lVar4 + 0x458) = fVar12;
  *(float *)(lVar4 + 0x45c) = fVar11;
  *(float *)(lVar4 + 0x460) = fVar8;
  *(float *)(lVar4 + 0x464) = fVar10;
  FUN_18011bfc0(0);
  FUN_18011bfc0(1);
  FUN_18011c1f6(*(undefined4 *)(lVar3 + 0x22b0),uVar6,uVar2,*(undefined4 *)(lVar3 + 0x22a8));
  return;
}

