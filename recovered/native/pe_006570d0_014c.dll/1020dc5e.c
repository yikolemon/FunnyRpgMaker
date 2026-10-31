/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020dc5e */

void __fastcall FUN_1020dc5e(char *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = _strcmp("Delta" + *(int *)((int)&DAT_10321bdc + iVar2),param_1);
    if (iVar1 == 0) {
      if (*(int *)(param_4 + iVar2) != 0) {
        return;
      }
      *(undefined4 *)(param_4 + iVar2) = 1;
      *(undefined4 *)(param_3 + iVar2) = param_2;
      return;
    }
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0x28);
  return;
}

