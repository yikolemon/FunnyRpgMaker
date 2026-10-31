/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140141f8f */

void FUN_140141f8f(longlong param_1,uint param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ushort *puVar12;
  
  puVar4 = *(uint **)(param_1 + 0x408);
  uVar1 = *puVar4;
  uVar8 = uVar1;
  if (param_2 < uVar1) {
    uVar8 = param_2;
  }
  uVar9 = (ulonglong)uVar8;
  if (uVar8 != 0) {
    uVar6 = 0;
    do {
      *(undefined4 *)(param_4 + uVar6 * 4) = *(undefined4 *)(param_3 + uVar6 * 4);
      uVar6 = uVar6 + 1;
    } while (uVar9 != uVar6);
  }
  if (uVar1 < param_2) {
    FUN_1401c5830(param_4 + uVar9 * 4,0,(ulonglong)(param_2 + ~uVar8) * 4 + 4);
  }
  if ((*(undefined8 **)(puVar4 + 0xe) != (undefined8 *)0x0) &&
     (puVar12 = (ushort *)**(undefined8 **)(puVar4 + 0xe), uVar8 != 0 && puVar12 != (ushort *)0x0))
  {
    uVar6 = 0;
    do {
      if (1 < (ulonglong)*puVar12) {
        iVar7 = *(int *)(param_4 + uVar6 * 4);
        lVar5 = *(longlong *)(puVar12 + 4);
        lVar11 = 0;
        do {
          iVar2 = *(int *)(lVar5 + 0xc + lVar11 * 8);
          if (iVar7 < iVar2) {
            iVar3 = *(int *)(lVar5 + 4 + lVar11 * 8);
            iVar7 = FUN_14012a478(iVar7 - iVar3,
                                  *(int *)(lVar5 + 8 + lVar11 * 8) - *(int *)(lVar5 + lVar11 * 8),
                                  iVar2 - iVar3);
            *(int *)(param_4 + uVar6 * 4) =
                 iVar7 + *(int *)(*(longlong *)(puVar12 + 4) + lVar11 * 8);
            break;
          }
          lVar11 = lVar11 + 1;
        } while ((ulonglong)*puVar12 - 1 != lVar11);
      }
      uVar6 = uVar6 + 1;
      puVar12 = puVar12 + 8;
    } while (uVar6 != uVar9);
  }
  if (uVar8 != 0) {
    lVar5 = *(longlong *)(*(longlong *)(puVar4 + 6) + 0x10);
    lVar11 = 0;
    do {
      lVar10 = (longlong)*(int *)(param_4 + lVar11);
      if (lVar10 < 0) {
        iVar7 = *(int *)(lVar5 + 0xc + lVar11 * 8);
        lVar10 = ((longlong)iVar7 - (longlong)*(int *)(lVar5 + 8 + lVar11 * 8)) * lVar10;
        iVar7 = (int)((ulonglong)(lVar10 + (lVar10 >> 0x3f) + 0x8000) >> 0x10) + iVar7;
      }
      else {
        iVar7 = *(int *)(lVar5 + 0xc + lVar11 * 8);
        if (*(int *)(param_4 + lVar11) != 0) {
          lVar10 = ((longlong)*(int *)(lVar5 + 0x10 + lVar11 * 8) - (longlong)iVar7) * lVar10;
          iVar7 = iVar7 + (int)((ulonglong)((lVar10 >> 0x3f) + lVar10 + 0x8000) >> 0x10);
        }
      }
      *(int *)(param_4 + lVar11) = iVar7;
      lVar11 = lVar11 + 4;
    } while (uVar9 << 2 != lVar11);
  }
  return;
}

