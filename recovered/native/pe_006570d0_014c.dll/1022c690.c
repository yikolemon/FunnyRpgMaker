/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022c690 */

void FUN_1022c690(void)

{
  int iVar1;
  
  iVar1 = ___scrt_is_ucrt_dll_in_use();
  if (iVar1 != 0) {
    FUN_10268ccc(&DAT_1039ce08);
    return;
  }
  iVar1 = FUN_10268647();
  if (iVar1 != 0) {
    return;
  }
  FUN_10268774(0,0,1);
  return;
}

