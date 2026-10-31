/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00466cb5 */

void __fastcall FUN_00466cb5(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_1 + 4 + param_2 * 0xcc);
  if (iVar9 != 0) {
    iVar1 = param_1 + param_2 * 0xcc;
    iVar2 = *(int *)(iVar1 + 200);
    lVar3 = (longlong)iVar2 * (longlong)*(int *)(iVar1 + 8);
    iVar5 = (int)(lVar3 >> 0x3f);
    lVar3 = lVar3 + CONCAT44(iVar5,iVar5) + 0x8000;
    uVar6 = (int)((ulonglong)lVar3 >> 0x20) << 0x10 | (uint)lVar3 >> 0x10;
    *(uint *)(iVar1 + 0xc) = uVar6;
    *(uint *)(iVar1 + 0x10) = uVar6 + 0x20 & 0xffffffc0;
    iVar9 = iVar9 + -1;
    if (iVar9 != 0) {
      piVar7 = (int *)(iVar1 + 0x14);
      do {
        lVar3 = (longlong)iVar2 * (longlong)*piVar7;
        iVar5 = (int)(lVar3 >> 0x3f);
        lVar3 = lVar3 + CONCAT44(iVar5,iVar5) + 0x8000;
        uVar8 = (int)((ulonglong)lVar3 >> 0x20) << 0x10 | (uint)lVar3 >> 0x10;
        uVar6 = *(uint *)(iVar1 + 0xc);
        uVar4 = uVar6 - uVar8;
        if ((int)uVar6 < (int)uVar8) {
          uVar4 = uVar8 - uVar6;
        }
        if (0x7f < uVar4) {
          uVar6 = uVar8;
        }
        piVar7[1] = uVar6;
        piVar7[2] = uVar6 + 0x20 & 0xffffffc0;
        piVar7 = piVar7 + 3;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  return;
}

