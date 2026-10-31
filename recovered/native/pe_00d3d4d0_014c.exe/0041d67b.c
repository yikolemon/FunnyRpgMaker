/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041d67b */

void __fastcall FUN_0041d67b(int param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 0x60);
  iVar3 = piVar2[2];
  iVar4 = piVar2[3];
  if ((*(byte *)(*(int *)(param_1 + 4) + 10) & 1) != 0) {
    if ((*(int *)(param_1 + 0x9c) != 0) && ((*(byte *)(*(int *)(param_1 + 0x9c) + 4) & 2) != 0)) {
      piVar5 = *(int **)(param_1 + 0x98);
      FUN_0041c607(iVar3,*piVar5);
      *piVar5 = 0;
      puVar1 = (uint *)(*(int *)(param_1 + 0x9c) + 4);
      *puVar1 = *puVar1 & 0xfffffffd;
    }
    FUN_0041c607(iVar3,*(int *)(param_1 + 0x98));
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  if (*(code **)(iVar4 + 0x44) != (code *)0x0) {
    (**(code **)(iVar4 + 0x44))(param_1);
  }
  FUN_0041d082(param_1);
  puVar6 = *(undefined4 **)(param_1 + 0x9c);
  if (puVar6 != (undefined4 *)0x0) {
    if ((*(byte *)(*piVar2 + 1) & 2) == 0) {
      FUN_0041c616((int *)*puVar6);
      **(undefined4 **)(param_1 + 0x9c) = 0;
      puVar6 = *(undefined4 **)(param_1 + 0x9c);
    }
    FUN_0041c607(iVar3,(int)puVar6);
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  return;
}

