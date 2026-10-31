/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004442e6 */

void __fastcall FUN_004442e6(int *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_2c;
  int local_24;
  int local_20;
  
  if ((param_2 <= param_3) && (param_5 < (uint)param_1[3] && param_4 < (uint)param_1[3])) {
    iVar10 = *(int *)(param_1[2] + param_4 * 8);
    iVar8 = *(int *)(param_1[2] + param_5 * 8);
    uVar7 = param_5;
    local_24 = iVar8;
    local_20 = iVar10;
    if (iVar8 < iVar10) {
      uVar7 = param_4;
      param_4 = param_5;
      local_24 = iVar10;
      local_20 = iVar8;
    }
    iVar1 = *(int *)(*param_1 + param_4 * 8);
    iVar2 = *(int *)(*param_1 + uVar7 * 8);
    iVar3 = *(int *)(param_1[1] + param_4 * 8);
    iVar4 = *(int *)(param_1[1] + uVar7 * 8);
    iVar9 = iVar4 - iVar2;
    if ((iVar8 == iVar10) || (uVar7 = iVar4 - iVar3, uVar7 == 0)) {
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
      bVar6 = false;
      do {
        iVar10 = *(int *)(*param_1 + param_2 * 8);
        if (iVar1 < iVar10) {
          if (iVar10 < iVar2) {
            if (!bVar6) {
              local_2c = FUN_0041eaa0(uVar7,local_24 - local_20);
            }
            lVar5 = (longlong)(*(int *)(param_1[2] + param_2 * 8) - local_20) * (longlong)local_2c;
            iVar10 = (int)(lVar5 >> 0x3f);
            lVar5 = lVar5 + CONCAT44(iVar10,iVar10) + 0x8000;
            iVar10 = ((int)((ulonglong)lVar5 >> 0x20) << 0x10 | (uint)lVar5 >> 0x10) + iVar3;
            bVar6 = true;
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

