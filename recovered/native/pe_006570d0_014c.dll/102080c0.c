/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102080c0 */

int __fastcall FUN_102080c0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(char *)(param_1 + 0x2c) == '\0') {
    *(undefined1 *)(param_1 + 0x2c) = 1;
    iVar1 = FUN_10208116();
    if (iVar1 == 0) {
      iVar1 = FUN_102080e9();
      return iVar1;
    }
  }
  return iVar1;
}

