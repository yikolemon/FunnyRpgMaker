/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b4ca1 */

void FUN_1400b4ca1(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  PVOID pvVar3;
  
  FUN_14008d710(*(longlong *)(param_2 + 0x30));
  if ((((*(int *)(param_2 + 0x20) == 0) &&
       (piVar1 = *(int **)(param_2 + 0xd8), *piVar1 == -0x1f928c9d)) && (piVar1[6] == 4)) &&
     (((piVar1[8] == 0x19930520 || (piVar1[8] == 0x19930521)) || (piVar1[8] == 0x19930522)))) {
    uVar2 = FUN_14008d9e0(*(longlong *)(piVar1 + 10));
    if ((int)uVar2 != 0) {
      __DestructExceptionObject(piVar1);
    }
  }
  pvVar3 = FUN_14009d690();
  *(undefined8 *)((longlong)pvVar3 + 0x20) = *(undefined8 *)(param_2 + 0x70);
  pvVar3 = FUN_14009d690();
  *(undefined8 *)((longlong)pvVar3 + 0x28) = *(undefined8 *)(param_2 + 0x78);
  return;
}

