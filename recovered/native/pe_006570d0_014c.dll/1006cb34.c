/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006cb34 */

void FUN_1006cb34(undefined4 param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x2c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(param_2 + 8));
    *(undefined4 *)(param_2 + 0x2c) = 0;
  }
  FUN_102283a0(param_2,0x30);
  return;
}

