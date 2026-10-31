/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009e960 */

int FUN_14009e960(undefined8 param_1,ulonglong *param_2,longlong param_3)

{
  int iVar1;
  PVOID pvVar2;
  
  iVar1 = FUN_14009d9e0(param_3,param_2);
  if ((int)param_2[9] == 0) {
    pvVar2 = FUN_14009d690();
    if (*(int *)((longlong)pvVar2 + 0x78) != -2) {
      pvVar2 = FUN_14009d690();
      iVar1 = *(int *)((longlong)pvVar2 + 0x78);
      pvVar2 = FUN_14009d690();
      *(undefined4 *)((longlong)pvVar2 + 0x78) = 0xfffffffe;
    }
    return iVar1;
  }
  pvVar2 = FUN_14009d690();
  if (*(int *)((longlong)pvVar2 + 0x78) == -2) {
    return (int)param_2[9] + -2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140096cf8();
}

