/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10015308 */

void __fastcall FUN_10015308(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  piVar1 = *(int **)(*(int *)(param_1 + 4) +
                    (*(int *)(param_1 + 8) - 1U & (*(int *)(param_1 + 0xc) + iVar3) - 1U) * 4);
  piVar2 = (int *)piVar1[9];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x10))(piVar2 != piVar1);
    piVar1[9] = 0;
    iVar3 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar3 + -1;
  if (iVar3 + -1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

