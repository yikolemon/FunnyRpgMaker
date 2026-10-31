/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004336d3 */

void __fastcall FUN_004336d3(uint param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (param_1 <= param_2) {
    iVar6 = param_4;
    if (*(int *)(param_4 + 0x1c) < *(int *)(param_3 + 0x1c)) {
      iVar6 = param_3;
      param_3 = param_4;
    }
    iVar1 = *(int *)(param_3 + 0x18);
    iVar2 = *(int *)(param_3 + 0x1c);
    iVar3 = *(int *)(iVar6 + 0x1c);
    iVar8 = *(int *)(iVar6 + 0x18) - iVar3;
    uVar5 = *(int *)(iVar6 + 0x18) - iVar1;
    if ((uVar5 == 0) || (iVar3 - iVar2 == 0)) {
      do {
        iVar6 = *(int *)(param_1 + 0x1c);
        iVar7 = iVar8 + iVar6;
        if (iVar6 < iVar3) {
          iVar7 = iVar1;
        }
        if (iVar6 <= iVar2) {
          iVar7 = iVar6 + (iVar1 - iVar2);
        }
        *(int *)(param_1 + 0x18) = iVar7;
        param_1 = param_1 + 0x28;
      } while (param_1 <= param_2);
    }
    else {
      iVar6 = FUN_0041eaa0(uVar5,iVar3 - iVar2);
      do {
        iVar7 = *(int *)(param_1 + 0x1c);
        if (iVar7 - iVar2 == 0 || iVar7 < iVar2) {
          iVar7 = iVar7 + (iVar1 - iVar2);
        }
        else if (iVar7 < iVar3) {
          lVar4 = (longlong)(iVar7 - iVar2) * (longlong)iVar6;
          iVar7 = (int)(lVar4 >> 0x3f);
          lVar4 = lVar4 + CONCAT44(iVar7,iVar7) + 0x8000;
          iVar7 = ((int)((ulonglong)lVar4 >> 0x20) << 0x10 | (uint)lVar4 >> 0x10) + iVar1;
        }
        else {
          iVar7 = iVar7 + iVar8;
        }
        *(int *)(param_1 + 0x18) = iVar7;
        param_1 = param_1 + 0x28;
      } while (param_1 <= param_2);
    }
  }
  return;
}

