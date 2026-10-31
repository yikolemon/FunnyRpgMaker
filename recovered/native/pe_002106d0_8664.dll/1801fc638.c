/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801fc638 */

void FUN_1801fc638(longlong param_1,int param_2,uint param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  
  if ((ulonglong)*(uint *)(param_1 + 0x38) != 0) {
    param_3 = param_2 << 0x10 | param_3;
    piVar3 = *(int **)(param_1 + 0x30);
    piVar4 = piVar3 + (ulonglong)*(uint *)(param_1 + 0x38) * 4 + -4;
    do {
      piVar1 = piVar3 + (((longlong)piVar4 - (longlong)piVar3 >> 4) -
                         ((longlong)piVar4 - (longlong)piVar3 >> 0x3f) & 0xfffffffffffffffeU) * 2;
      uVar5 = *piVar1 << 0x10 | piVar1[1];
      if (uVar5 == param_3) {
        *param_4 = piVar1[2];
        iVar2 = piVar1[3];
        goto LAB_1801fc6b0;
      }
      if (uVar5 < param_3) {
        piVar3 = piVar1 + 4;
      }
      else {
        piVar4 = piVar1 + -4;
      }
    } while (piVar3 <= piVar4);
  }
  *param_4 = 0;
  iVar2 = 0;
LAB_1801fc6b0:
  param_4[1] = iVar2;
  return;
}

