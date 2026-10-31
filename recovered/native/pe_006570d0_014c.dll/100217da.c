/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100217da */

void __fastcall FUN_100217da(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(uint *)(param_1 + 0xc);
  piVar1 = *(int **)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 8) - 1U & uVar3) * 4);
  piVar2 = (int *)piVar1[9];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x10))(piVar2 != piVar1);
    piVar1[9] = 0;
    uVar3 = *(uint *)(param_1 + 0xc);
  }
  piVar1 = (int *)(param_1 + 0x10);
  *piVar1 = *piVar1 + -1;
  iVar4 = 0;
  if (*piVar1 != 0) {
    iVar4 = uVar3 + 1;
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return;
}

