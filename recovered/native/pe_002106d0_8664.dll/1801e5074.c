/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e5074 */

void FUN_1801e5074(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  byte *pbVar12;
  
  iVar2 = *(int *)(param_2 + 8 + (ulonglong)(param_3 != 0) * 4);
  iVar3 = *(int *)(param_2 + 0x10 + (ulonglong)(param_3 != 0) * 4);
  lVar1 = param_1 + (ulonglong)param_3 * 0x1c4;
  if ((*(int *)(lVar1 + 0x200) != iVar2) || (*(int *)(lVar1 + 0x204) != iVar3)) {
    *(int *)(lVar1 + 0x200) = iVar2;
    *(int *)(lVar1 + 0x204) = iVar3;
    *(int *)(lVar1 + 0x44) = iVar2;
    *(int *)(lVar1 + 0x48) = iVar3;
    uVar5 = *(uint *)(lVar1 + 0x11c);
    if (uVar5 != 0) {
      lVar11 = (longlong)iVar2;
      pbVar12 = (byte *)((ulonglong)param_3 * 0x1c4 + param_1 + 0x138);
      uVar10 = 0;
      do {
        lVar6 = *(int *)(pbVar12 + -0x18) * lVar11;
        iVar4 = (int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10) + iVar3;
        *(int *)(pbVar12 + -0x14) = iVar4;
        *(int *)(pbVar12 + -0x10) = iVar4;
        lVar6 = *(int *)(pbVar12 + -0xc) * lVar11;
        iVar9 = (int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10) + iVar3;
        *(int *)(pbVar12 + -8) = iVar9;
        *(int *)(pbVar12 + -4) = iVar9;
        *pbVar12 = *pbVar12 & 0xfe;
        lVar6 = ((longlong)*(int *)(pbVar12 + -0x18) - (longlong)*(int *)(pbVar12 + -0xc)) * lVar11;
        if ((int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10) + 0x30U < 0x61) {
          uVar5 = iVar4 + 0x20U & 0xffffffc0;
          *(uint *)(pbVar12 + -0x10) = uVar5;
          iVar9 = FUN_1801cc3a4(uVar5,iVar2);
          iVar4 = *(int *)(pbVar12 + -0xc);
          uVar5 = iVar4 - iVar9;
          if (iVar4 < iVar9) {
            uVar5 = iVar9 - iVar4;
          }
          uVar8 = 0;
          iVar7 = (int)(((longlong)((ulonglong)uVar5 * lVar11) >> 0x3f) + (ulonglong)uVar5 * lVar11
                        + 0x8000 >> 0x10);
          if (0x1f < iVar7) {
            uVar8 = iVar7 + 0x20U & 0x7fffffc0;
          }
          uVar5 = -uVar8;
          if (iVar9 - iVar4 < 0) {
            uVar5 = uVar8;
          }
          *(uint *)(pbVar12 + -4) = uVar5 + *(int *)(pbVar12 + -0x10);
          *pbVar12 = *pbVar12 | 1;
          uVar5 = *(uint *)(lVar1 + 0x11c);
        }
        uVar10 = uVar10 + 1;
        pbVar12 = pbVar12 + 0x1c;
      } while (uVar10 < uVar5);
    }
  }
  return;
}

