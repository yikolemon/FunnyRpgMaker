/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021d40c */

void FUN_18021d40c(char *param_1,undefined4 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    iVar1 = strcmp("Delta" + *(int *)((longlong)&DAT_18034c470 + lVar2),param_1);
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

