/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008da90 */

undefined8 FUN_14008da90(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  PVOID pvVar4;
  
  piVar2 = (int *)*param_1;
  iVar1 = *piVar2;
  if ((iVar1 == -0x1fbcbcae) || (iVar1 == -0x1fbcb0b3)) {
    pvVar4 = FUN_14009d690();
    if (0 < *(int *)((longlong)pvVar4 + 0x30)) {
      pvVar4 = FUN_14009d690();
      *(int *)((longlong)pvVar4 + 0x30) = *(int *)((longlong)pvVar4 + 0x30) + -1;
    }
  }
  else if (iVar1 == -0x1f928c9d) {
    pvVar4 = FUN_14009d690();
    *(int **)((longlong)pvVar4 + 0x20) = piVar2;
    uVar3 = param_1[1];
    pvVar4 = FUN_14009d690();
    *(undefined8 *)((longlong)pvVar4 + 0x28) = uVar3;
                    /* WARNING: Subroutine does not return */
    FUN_14009ca6c();
  }
  return 0;
}

