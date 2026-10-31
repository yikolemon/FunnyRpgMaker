/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10103257 */

void FUN_10103257(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (int)(short)param_1[2];
  if (param_1[iVar2 * 2 + 3] != param_2) {
    iVar2 = (iVar2 + 1) % 6;
    *(short *)(param_1 + 2) = (short)iVar2;
    param_1[iVar2 * 2 + 3] = param_2;
    param_1[iVar2 * 2 + 4] = 0;
  }
  piVar1 = param_1 + iVar2 * 2 + 3;
  if (param_4 == -1) {
    *(short *)((int)piVar1 + 6) = *(short *)((int)piVar1 + 6) + 1;
    param_1[1] = param_1[1] + 1;
  }
  else {
    *(short *)(piVar1 + 1) = (short)piVar1[1] + 1;
    *param_1 = *param_1 + 1;
  }
  return;
}

