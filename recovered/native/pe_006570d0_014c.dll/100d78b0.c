/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d78b0 */

void __thiscall FUN_100d78b0(int param_1,int *param_2,int *param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  param_4 = *(uint *)(param_1 + 0x18) & param_4;
  piVar2 = *(int **)(param_1 + 4);
  piVar1 = *(int **)(*(int *)(param_1 + 0xc) + 4 + param_4 * 8);
  piVar3 = (int *)0x0;
  if (piVar1 != piVar2) {
    if (piVar1[2] != *param_3 || piVar1[3] != param_3[1]) {
      do {
        if (piVar1 == *(int **)(*(int *)(param_1 + 0xc) + param_4 * 8)) {
          piVar3 = (int *)0x0;
          piVar2 = piVar1;
          goto LAB_100d7913;
        }
        piVar1 = (int *)piVar1[1];
      } while (piVar1[2] != *param_3 || piVar1[3] != param_3[1]);
    }
    piVar2 = (int *)*piVar1;
    piVar3 = piVar1;
  }
LAB_100d7913:
  *param_2 = (int)piVar2;
  param_2[1] = (int)piVar3;
  return;
}

