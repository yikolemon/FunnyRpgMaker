/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10117072 */

int __fastcall FUN_10117072(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x3c0);
  if ((((iVar2 == 0) || (*(char *)(iVar2 + 0xfa) == '\0')) &&
      (iVar2 = param_1, *(int *)(param_1 + 0x434) != 0)) &&
     ((iVar1 = *(int *)(*(int *)(param_1 + 0x434) + 0x30), iVar1 != 0 &&
      (iVar1 = FUN_1014f66e(iVar1), iVar1 != 0)))) {
    iVar2 = *(int *)(iVar1 + 8);
  }
  return iVar2;
}

