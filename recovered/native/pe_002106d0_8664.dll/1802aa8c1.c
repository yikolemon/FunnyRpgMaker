/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802aa8c1 */

void FUN_1802aa8c1(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  
  FUN_18026e640(*(undefined8 *)(param_2 + 0x30));
  if ((((*(int *)(param_2 + 0x20) == 0) &&
       (piVar1 = *(int **)(param_2 + 0xd8), *piVar1 == -0x1f928c9d)) && (piVar1[6] == 4)) &&
     (((piVar1[8] == 0x19930520 || (piVar1[8] == 0x19930521)) || (piVar1[8] == 0x19930522)))) {
    iVar3 = FUN_18026d6e0(*(undefined8 *)(piVar1 + 10));
    if (iVar3 != 0) {
      __DestructExceptionObject(piVar1,1);
    }
  }
  lVar2 = FUN_18028cfc0();
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_2 + 0x70);
  lVar2 = FUN_18028cfc0();
  *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_2 + 0x78);
  return;
}

