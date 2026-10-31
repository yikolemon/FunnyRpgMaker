/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c0df9 */

void FUN_101c0df9(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  if (param_2 != (int *)0x0 && param_1 != 0) {
    uVar6 = (uint)*(ushort *)(param_1 + 2);
    if (uVar6 == 0) {
      iVar3 = 0;
      iVar4 = 0;
      iVar7 = 0;
      iVar8 = 0;
    }
    else {
      piVar1 = *(int **)(param_1 + 4);
      iVar4 = *piVar1;
      iVar3 = piVar1[1];
      iVar7 = iVar3;
      iVar8 = iVar4;
      if (uVar6 != 1) {
        piVar5 = piVar1 + 2;
        do {
          iVar2 = *piVar5;
          if (iVar2 < iVar4) {
            iVar4 = iVar2;
          }
          if (iVar8 < iVar2) {
            iVar8 = iVar2;
          }
          iVar2 = piVar5[1];
          if (iVar2 < iVar3) {
            iVar3 = iVar2;
          }
          if (iVar7 < iVar2) {
            iVar7 = iVar2;
          }
          piVar5 = piVar5 + 2;
        } while (piVar5 < piVar1 + uVar6 * 2);
      }
    }
    *param_2 = iVar4;
    param_2[2] = iVar8;
    param_2[1] = iVar3;
    param_2[3] = iVar7;
  }
  return;
}

