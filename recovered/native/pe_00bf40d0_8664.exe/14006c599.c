/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006c599 */

void FUN_14006c599(longlong param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  int iVar8;
  
  lVar3 = (param_2 & 0xffffffff) * 0xcc;
  iVar2 = *(int *)(param_1 + 8 + lVar3);
  if (iVar2 != 0) {
    lVar3 = param_1 + lVar3;
    iVar1 = *(int *)(lVar3 + 0xcc);
    lVar6 = (longlong)*(int *)(lVar3 + 0xc) * (longlong)iVar1;
    iVar5 = (int)((ulonglong)(lVar6 + (lVar6 >> 0x3f) + 0x8000) >> 0x10);
    *(int *)(lVar3 + 0x10) = iVar5;
    *(uint *)(lVar3 + 0x14) = iVar5 + 0x20U & 0xffffffc0;
    iVar2 = iVar2 + -1;
    if (iVar2 != 0) {
      piVar7 = (int *)(lVar3 + 0x18);
      do {
        lVar6 = (longlong)*piVar7 * (longlong)iVar1;
        iVar5 = *(int *)(lVar3 + 0x10);
        iVar8 = (int)((ulonglong)((lVar6 >> 0x3f) + lVar6 + 0x8000) >> 0x10);
        uVar4 = iVar5 - iVar8;
        if (iVar5 < iVar8) {
          uVar4 = iVar8 - iVar5;
        }
        if (0x7f < uVar4) {
          iVar5 = iVar8;
        }
        piVar7[1] = iVar5;
        piVar7[2] = iVar5 + 0x20U & 0xffffffc0;
        piVar7 = piVar7 + 3;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

