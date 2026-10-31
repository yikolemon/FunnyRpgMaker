/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c108b */

void __fastcall FUN_101c108b(int param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 0x60);
  iVar3 = piVar2[2];
  iVar4 = piVar2[3];
  if ((*(byte *)(*(int *)(param_1 + 4) + 10) & 1) != 0) {
    if ((*(int *)(param_1 + 0x9c) != 0) && ((*(byte *)(*(int *)(param_1 + 0x9c) + 4) & 2) != 0)) {
      puVar5 = *(undefined4 **)(param_1 + 0x98);
      FUN_101c0017(iVar3,*puVar5);
      *puVar5 = 0;
      puVar1 = (uint *)(*(int *)(param_1 + 0x9c) + 4);
      *puVar1 = *puVar1 & 0xfffffffd;
    }
    FUN_101c0017(iVar3,*(undefined4 *)(param_1 + 0x98));
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  if (*(code **)(iVar4 + 0x44) != (code *)0x0) {
    (**(code **)(iVar4 + 0x44))(param_1);
  }
  FUN_101c0a92(param_1);
  puVar5 = *(undefined4 **)(param_1 + 0x9c);
  if (puVar5 != (undefined4 *)0x0) {
    if ((*(byte *)(*piVar2 + 1) & 2) == 0) {
      FUN_101c0026(*puVar5);
      **(undefined4 **)(param_1 + 0x9c) = 0;
      puVar5 = *(undefined4 **)(param_1 + 0x9c);
    }
    FUN_101c0017(iVar3,puVar5);
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  return;
}

