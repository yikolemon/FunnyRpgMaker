/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ecb71 */

void __fastcall FUN_101ecb71(int *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_2c;
  int local_24;
  int local_20;
  
  if ((param_2 <= param_3) && (param_5 < (uint)param_1[3] && param_4 < (uint)param_1[3])) {
    iVar10 = *(int *)(param_1[2] + param_4 * 8);
    iVar8 = *(int *)(param_1[2] + param_5 * 8);
    uVar6 = param_5;
    local_24 = iVar8;
    local_20 = iVar10;
    if (iVar8 < iVar10) {
      uVar6 = param_4;
      param_4 = param_5;
      local_24 = iVar10;
      local_20 = iVar8;
    }
    iVar1 = *(int *)(*param_1 + param_4 * 8);
    iVar2 = *(int *)(*param_1 + uVar6 * 8);
    iVar3 = *(int *)(param_1[1] + param_4 * 8);
    iVar7 = *(int *)(param_1[1] + uVar6 * 8);
    iVar9 = iVar7 - iVar2;
    if ((iVar8 == iVar10) || (iVar7 = iVar7 - iVar3, iVar7 == 0)) {
      do {
        iVar10 = *(int *)(*param_1 + param_2 * 8);
        iVar8 = iVar9 + iVar10;
        if (iVar10 < iVar2) {
          iVar8 = iVar3;
        }
        if (iVar10 <= iVar1) {
          iVar8 = iVar10 + (iVar3 - iVar1);
        }
        *(int *)(param_1[1] + param_2 * 8) = iVar8;
        param_2 = param_2 + 1;
      } while (param_2 <= param_3);
    }
    else {
      local_2c = 0;
      bVar5 = false;
      do {
        iVar10 = *(int *)(*param_1 + param_2 * 8);
        if (iVar1 < iVar10) {
          if (iVar10 < iVar2) {
            if (!bVar5) {
              local_2c = FUN_101c2523(iVar7,local_24 - local_20);
            }
            lVar4 = (longlong)(*(int *)(param_1[2] + param_2 * 8) - local_20) * (longlong)local_2c;
            iVar10 = (int)(lVar4 >> 0x3f);
            lVar4 = lVar4 + CONCAT44(iVar10,iVar10) + 0x8000;
            iVar10 = ((int)((ulonglong)lVar4 >> 0x20) << 0x10 | (uint)lVar4 >> 0x10) + iVar3;
            bVar5 = true;
          }
          else {
            iVar10 = iVar10 + iVar9;
          }
        }
        else {
          iVar10 = iVar10 + (iVar3 - iVar1);
        }
        *(int *)(param_1[1] + param_2 * 8) = iVar10;
        param_2 = param_2 + 1;
      } while (param_2 <= param_3);
    }
  }
  return;
}

