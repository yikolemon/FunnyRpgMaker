/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016e645 */

void FUN_14016e645(longlong param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  lVar3 = (param_2 & 0xffffffff) * 0xcc;
  iVar2 = *(int *)(param_1 + 8 + lVar3);
  if (iVar2 != 0) {
    param_1 = param_1 + lVar3;
    iVar1 = *(int *)(param_1 + 0xcc);
    lVar3 = (longlong)*(int *)(param_1 + 0xc) * (longlong)iVar1;
    iVar5 = (int)((ulonglong)(lVar3 + (lVar3 >> 0x3f) + 0x8000) >> 0x10);
    *(int *)(param_1 + 0x10) = iVar5;
    *(uint *)(param_1 + 0x14) = iVar5 + 0x20U & 0xffffffc0;
    iVar2 = iVar2 + -1;
    if (iVar2 != 0) {
      piVar6 = (int *)(param_1 + 0x18);
      do {
        lVar3 = (longlong)*piVar6 * (longlong)iVar1;
        iVar5 = *(int *)(param_1 + 0x10);
        iVar7 = (int)((ulonglong)((lVar3 >> 0x3f) + lVar3 + 0x8000) >> 0x10);
        uVar4 = iVar5 - iVar7;
        if (iVar5 < iVar7) {
          uVar4 = iVar7 - iVar5;
        }
        if (0x7f < uVar4) {
          iVar5 = iVar7;
        }
        piVar6[1] = iVar5;
        piVar6[2] = iVar5 + 0x20U & 0xffffffc0;
        piVar6 = piVar6 + 3;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

