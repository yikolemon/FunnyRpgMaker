/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b49f0 */

undefined4 FUN_1400b49f0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  PVOID pvVar2;
  
  *(undefined8 *)(param_2 + 0x30) = param_1;
  if ((((*(char *)(param_2 + 0x58) != '\0') &&
       (*(undefined8 *)(param_2 + 0x28) = **(undefined8 **)(param_2 + 0x30),
       **(int **)(param_2 + 0x28) == -0x1f928c9d)) &&
      (*(int *)(*(longlong *)(param_2 + 0x28) + 0x18) == 4)) &&
     (((*(int *)(*(longlong *)(param_2 + 0x28) + 0x20) == 0x19930520 ||
       (*(int *)(*(longlong *)(param_2 + 0x28) + 0x20) == 0x19930521)) ||
      (*(int *)(*(longlong *)(param_2 + 0x28) + 0x20) == 0x19930522)))) {
    pvVar2 = FUN_14009d690();
    *(undefined8 *)((longlong)pvVar2 + 0x20) = *(undefined8 *)(param_2 + 0x28);
    uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 8);
    pvVar2 = FUN_14009d690();
    *(undefined8 *)((longlong)pvVar2 + 0x28) = uVar1;
                    /* WARNING: Subroutine does not return */
    FUN_14009ca6c();
  }
  *(undefined4 *)(param_2 + 0x20) = 0;
  return *(undefined4 *)(param_2 + 0x20);
}

