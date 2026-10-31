/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10206611 */

uint __fastcall FUN_10206611(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1[3] < 2) {
    FUN_10206972();
  }
  do {
    piVar1[3] = 0;
    uVar2 = FUN_102069bc();
    if (uVar2 != 0) {
      if (param_2 == (int *)0x0) {
        return uVar2;
      }
      iVar3 = ~uVar2 + *piVar1;
      goto LAB_10206651;
    }
  } while (piVar1[3] == 2);
  iVar3 = 0;
  if (param_2 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
LAB_10206651:
    *param_2 = iVar3;
  }
  return uVar2;
}

