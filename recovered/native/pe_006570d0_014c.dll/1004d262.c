/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004d262 */

void __thiscall FUN_1004d262(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)param_2[9];
  if (piVar1 != (int *)0x0) {
    if (piVar1 == param_2) {
      uVar2 = (**(code **)(*piVar1 + 4))(param_1);
      *(undefined4 *)(param_1 + 0x24) = uVar2;
      piVar1 = (int *)param_2[9];
      if (piVar1 == (int *)0x0) {
        return;
      }
      (**(code **)(*piVar1 + 0x10))(piVar1 != param_2);
    }
    else {
      *(int **)(param_1 + 0x24) = piVar1;
    }
    param_2[9] = 0;
  }
  return;
}

