/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101794c6 */

void __fastcall FUN_101794c6(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}

