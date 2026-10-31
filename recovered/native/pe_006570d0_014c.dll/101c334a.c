/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c334a */

void __fastcall FUN_101c334a(int *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar1 = (uint *)*param_1;
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  puVar5 = puVar1;
  if ((iVar2 != 0) && (*(int **)(iVar2 + 0xa0) == param_1)) {
    *(undefined4 *)(iVar2 + 0xa0) = 0;
    puVar5 = (uint *)*param_1;
  }
  uVar4 = *puVar5;
  if ((uVar4 & 2) != 0) {
    FUN_101c69ef();
    uVar4 = *(uint *)*param_1;
  }
  if ((uVar4 & 1) != 0) {
    FUN_101c6a52();
  }
  if ((code *)puVar1[7] != (code *)0x0) {
    (*(code *)puVar1[7])(param_1);
  }
  FUN_101c0017(iVar3,param_1);
  return;
}

