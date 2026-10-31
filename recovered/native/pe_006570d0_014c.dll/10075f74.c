/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10075f74 */

int __thiscall FUN_10075f74(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (*(int **)(param_1 + 4) != *(int **)(param_2 + 4)) {
    puVar2 = (undefined4 *)(**(code **)(**(int **)(param_1 + 4) + 8))();
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
    piVar1 = *(int **)(param_2 + 4);
    *(int **)(param_1 + 4) = piVar1;
    (**(code **)(*piVar1 + 4))();
  }
  return param_1;
}

