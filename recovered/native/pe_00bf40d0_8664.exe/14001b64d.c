/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001b64d */

void FUN_14001b64d(int *param_1,int param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  
  lVar2 = (longlong)(short)param_1[2];
  if (param_1[lVar2 * 2 + 3] != param_2) {
    iVar1 = ((short)param_1[2] + 1) % 6;
    *(short *)(param_1 + 2) = (short)iVar1;
    lVar2 = (longlong)iVar1;
    param_1[lVar2 * 2 + 3] = param_2;
    param_1[lVar2 * 2 + 4] = 0;
  }
  piVar3 = param_1 + lVar2 * 2 + 3;
  if (param_4 == -1) {
    *(short *)((longlong)piVar3 + 6) = *(short *)((longlong)piVar3 + 6) + 1;
    param_1[1] = param_1[1] + 1;
    return;
  }
  *(short *)(piVar3 + 1) = (short)piVar3[1] + 1;
  *param_1 = *param_1 + 1;
  return;
}

