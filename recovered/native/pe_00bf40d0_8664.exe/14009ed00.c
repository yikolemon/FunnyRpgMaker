/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009ed00 */

undefined8 FUN_14009ed00(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  PVOID pvVar2;
  
  piVar1 = (int *)*param_1;
  *param_3 = 0;
  if (*piVar1 == -0x1f928c9d) {
    if (((piVar1[6] == 4) && (piVar1[8] + 0xe66cfae0U < 3)) &&
       (*(longlong *)(piVar1 + 10) == *(longlong *)(param_2 + 0x28))) {
      *param_3 = 1;
    }
    if (((*piVar1 == -0x1f928c9d) && (piVar1[6] == 4)) &&
       ((piVar1[8] + 0xe66cfae0U < 3 && (*(longlong *)(piVar1 + 0xc) == 0)))) {
      pvVar2 = FUN_14009d690();
      *(undefined4 *)((longlong)pvVar2 + 0x40) = 1;
      *param_3 = 1;
      return 1;
    }
  }
  return 0;
}

