/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140049c72 */

void FUN_140049c72(longlong param_1,int param_2,uint param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  
  if ((ulonglong)*(uint *)(param_1 + 0x38) != 0) {
    uVar5 = param_2 << 0x10 | param_3;
    piVar3 = *(int **)(param_1 + 0x30);
    piVar4 = piVar3 + (ulonglong)*(uint *)(param_1 + 0x38) * 4 + -4;
    do {
      piVar1 = piVar3 + (((longlong)piVar4 - (longlong)piVar3 >> 4) -
                         ((longlong)piVar4 - (longlong)piVar3 >> 0x3f) & 0xfffffffffffffffeU) * 2;
      uVar6 = *piVar1 << 0x10 | piVar1[1];
      if (uVar6 == uVar5) {
        *param_4 = piVar1[2];
        iVar2 = piVar1[3];
        goto LAB_140049cea;
      }
      if (uVar6 < uVar5) {
        piVar3 = piVar1 + 4;
      }
      else {
        piVar4 = piVar1 + -4;
      }
    } while (piVar3 <= piVar4);
  }
  *param_4 = 0;
  iVar2 = 0;
LAB_140049cea:
  param_4[1] = iVar2;
  return;
}

