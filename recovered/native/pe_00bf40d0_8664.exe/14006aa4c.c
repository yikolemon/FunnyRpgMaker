/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006aa4c */

void FUN_14006aa4c(char *param_1,undefined4 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    iVar1 = strcmp("Delta" + *(int *)((longlong)&DAT_1401095a0 + lVar2),param_1);
    if (iVar1 == 0) {
      if (*(int *)(param_4 + lVar2) != 0) {
        return;
      }
      *(undefined4 *)(param_4 + lVar2) = 1;
      *(undefined4 *)(param_3 + lVar2) = param_2;
      return;
    }
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x28);
  return;
}

