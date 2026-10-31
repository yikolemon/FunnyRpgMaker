/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100614e8 */

void __thiscall FUN_100614e8(int param_1,int *param_2,int *param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  param_4 = *(uint *)(param_1 + 0x18) & param_4;
  piVar2 = *(int **)(param_1 + 4);
  piVar1 = *(int **)(*(int *)(param_1 + 0xc) + 4 + param_4 * 8);
  piVar3 = (int *)0x0;
  if (piVar1 != piVar2) {
    if (*param_3 != piVar1[2]) {
      do {
        piVar2 = piVar1;
        if (piVar1 == *(int **)(*(int *)(param_1 + 0xc) + param_4 * 8)) goto LAB_10061528;
        piVar1 = (int *)piVar1[1];
      } while (*param_3 != piVar1[2]);
    }
    piVar2 = (int *)*piVar1;
    piVar3 = piVar1;
  }
LAB_10061528:
  *param_2 = (int)piVar2;
  param_2[1] = (int)piVar3;
  return;
}

