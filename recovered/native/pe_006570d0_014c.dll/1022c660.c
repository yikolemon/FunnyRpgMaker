/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022c660 */

undefined4 FUN_1022c660(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ___scrt_is_ucrt_dll_in_use();
  if (iVar1 != 0) {
    FUN_10234920();
    return 1;
  }
  uVar2 = FUN_10234cd0();
  iVar1 = FUN_10268967(uVar2);
  if (iVar1 != 0) {
    return 0;
  }
  thunk_FUN_10269900();
  return 1;
}

