/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10033d76 */

void __thiscall FUN_10033d76(int param_1,uint param_2,int param_3,int *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = *(undefined4 **)(param_3 + 4);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  *param_4 = param_3;
  param_4[1] = (int)puVar1;
  *puVar1 = param_4;
  *(int **)(param_3 + 4) = param_4;
  param_2 = *(uint *)(param_1 + 0x18) & param_2;
  iVar2 = *(int *)(param_1 + 0xc);
  iVar3 = *(int *)(iVar2 + param_2 * 8);
  if (iVar3 == *(int *)(param_1 + 4)) {
    *(int **)(iVar2 + param_2 * 8) = param_4;
  }
  else {
    if (iVar3 == param_3) {
      *(int **)(iVar2 + param_2 * 8) = param_4;
      return;
    }
    if (*(undefined4 **)(iVar2 + 4 + param_2 * 8) != puVar1) {
      return;
    }
  }
  *(int **)(iVar2 + 4 + param_2 * 8) = param_4;
  return;
}

