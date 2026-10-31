/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18007c1ce */

void FUN_18007c1ce(longlong param_1,ulonglong *param_2,longlong *param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar2 = *(uint *)(param_1 + 0x70);
  uVar11 = 0xffffffffffffffff;
  if (((param_4 & (uVar2 & 4) >> 2) == 0) &&
     ((byte)((byte)((uVar2 & 2) >> 1) & (byte)param_4 >> 1) == 0)) {
    uVar10 = param_3[1] + *param_3;
    lVar5 = **(longlong **)(param_1 + 0x38);
    if (((uVar2 & 2) == 0) && (uVar6 = **(ulonglong **)(param_1 + 0x40), uVar6 != 0)) {
      bVar9 = true;
      if (*(ulonglong *)(param_1 + 0x68) < uVar6) {
        *(ulonglong *)(param_1 + 0x68) = uVar6;
      }
    }
    else {
      bVar9 = false;
    }
    lVar7 = *(longlong *)(param_1 + 0x68);
    lVar8 = **(longlong **)(param_1 + 0x18);
    if ((uVar10 <= (ulonglong)(lVar7 - lVar8)) &&
       ((uVar10 == 0 || ((((byte)param_4 & lVar5 == 0) == 0 && ((param_4 & 2) == 0 || bVar9)))))) {
      lVar1 = lVar8 + uVar10;
      if (lVar5 != 0 && (param_4 & 1) != 0) {
        **(longlong **)(param_1 + 0x38) = lVar1;
        **(int **)(param_1 + 0x50) = (int)lVar7 - (int)lVar1;
      }
      uVar11 = uVar10;
      if (bVar9 && (param_4 & 2) != 0) {
        iVar3 = **(int **)(param_1 + 0x40);
        iVar4 = **(int **)(param_1 + 0x58);
        **(longlong **)(param_1 + 0x20) = lVar8;
        **(longlong **)(param_1 + 0x40) = lVar1;
        **(int **)(param_1 + 0x58) = (iVar3 + iVar4) - (int)lVar1;
      }
    }
  }
  *param_2 = uVar11;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}

