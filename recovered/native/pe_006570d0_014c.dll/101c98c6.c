/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c98c6 */

void __thiscall FUN_101c98c6(int param_1,int *param_2,double *param_3,uint param_4)

{
  double dVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  param_4 = *(uint *)(param_1 + 0x18) & param_4;
  piVar3 = *(int **)(param_1 + 4);
  piVar2 = *(int **)(*(int *)(param_1 + 0xc) + 4 + param_4 * 8);
  piVar4 = (int *)0x0;
  if (piVar2 != piVar3) {
    dVar1 = *param_3;
    if ((dVar1 != *(double *)(piVar2 + 2)) || (NAN(dVar1) || NAN(*(double *)(piVar2 + 2)))) {
      do {
        piVar3 = piVar2;
        if (piVar2 == *(int **)(*(int *)(param_1 + 0xc) + param_4 * 8)) goto LAB_101c9910;
        piVar2 = (int *)piVar2[1];
      } while ((dVar1 != *(double *)(piVar2 + 2)) || (NAN(dVar1) || NAN(*(double *)(piVar2 + 2))));
    }
    piVar3 = (int *)*piVar2;
    piVar4 = piVar2;
  }
LAB_101c9910:
  *param_2 = (int)piVar3;
  param_2[1] = (int)piVar4;
  return;
}

