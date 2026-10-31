/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407ed5a6 */

int FUN_1407ed5a6(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  piVar6 = (int *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x10);
  piVar6[2] = param_2;
  iVar5 = *param_1;
  iVar7 = 0;
  *piVar6 = 0;
  piVar6[3] = piVar6[9] + param_2;
  if (iVar5 < piVar6[9] + param_2) {
    *piVar6 = 0;
    iVar8 = 0;
    iVar7 = 0;
    do {
      iVar1 = param_1[1];
      if (iVar1 - iVar7 == 0 || iVar1 < iVar7) {
        uVar2 = param_1[2];
        piVar6[1] = uVar2;
        iVar3 = *(int *)(ulonglong)uVar2;
        iVar5 = iVar3 - iVar5;
        iVar9 = piVar6[9] - iVar8;
        if (iVar5 + iVar8 <= piVar6[9]) {
          iVar9 = iVar5;
        }
        iVar4 = (iVar7 - iVar1) * iVar9;
        iVar5 = iVar3;
      }
      else {
        iVar4 = (iVar1 - iVar7) * iVar8;
        uVar2 = param_1[2];
        piVar6[1] = uVar2;
        iVar3 = *(int *)(ulonglong)uVar2;
        iVar7 = iVar1;
        if (iVar5 < piVar6[2]) {
          iVar9 = iVar3 - piVar6[2];
          iVar5 = iVar3;
        }
        else {
          iVar9 = iVar3 - iVar5;
          iVar5 = iVar3;
        }
      }
      *piVar6 = *piVar6 + iVar4;
      iVar8 = iVar8 + iVar9;
      param_1 = (int *)(ulonglong)(uint)piVar6[1];
    } while (iVar5 < piVar6[3]);
  }
  *(int *)(ulonglong)(uint)piVar6[10] = *piVar6;
  return iVar7;
}

