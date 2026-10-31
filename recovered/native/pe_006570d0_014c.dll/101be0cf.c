/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101be0cf */

void FUN_101be0cf(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 0x40);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)*piVar1;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    piVar1[0xb] = 0;
    piVar1[0xc] = 0;
    piVar1[0xd] = 0;
    piVar1[0xe] = 0;
    piVar1[8] = 0;
    piVar1[9] = 0;
    piVar1[10] = 0;
    piVar1[0xb] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    piVar1[6] = 0;
    piVar1[7] = 0;
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    piVar1[3] = 0;
    FUN_10141def(piVar1);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}

