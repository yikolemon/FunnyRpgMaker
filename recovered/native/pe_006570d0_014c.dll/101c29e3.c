/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c29e3 */

undefined4 FUN_101c29e3(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (param_1 == 0) {
    uVar2 = 0x23;
  }
  else {
    if (param_2 == 0x756e6963) {
      uVar2 = FUN_101c199b();
      return uVar2;
    }
    if ((param_2 == 0) && (*(int *)(param_1 + 0x24) == 0)) {
      uVar2 = 6;
    }
    else {
      piVar3 = *(int **)(param_1 + 0x28);
      if (piVar3 == (int *)0x0) {
        uVar2 = 0x26;
      }
      else {
        uVar2 = 6;
        if (0 < *(int *)(param_1 + 0x24)) {
          piVar1 = piVar3 + *(int *)(param_1 + 0x24);
          do {
            if (*(int *)(*piVar3 + 4) == param_2) {
              *(int *)(param_1 + 0x5c) = *piVar3;
              return 0;
            }
            piVar3 = piVar3 + 1;
          } while (piVar3 < piVar1);
        }
      }
    }
  }
  return uVar2;
}

