/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14011e9b0 */

int FUN_14011e9b0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_14011da30(param_3);
  if (*(int *)(param_2 + 0x48) == 0) {
    lVar2 = FUN_14011d6e0();
    if (*(int *)(lVar2 + 0x78) != -2) {
      lVar2 = FUN_14011d6e0();
      iVar1 = *(int *)(lVar2 + 0x78);
      lVar2 = FUN_14011d6e0();
      *(undefined4 *)(lVar2 + 0x78) = 0xfffffffe;
    }
    return iVar1;
  }
  lVar2 = FUN_14011d6e0();
  if (*(int *)(lVar2 + 0x78) == -2) {
    return *(int *)(param_2 + 0x48) + -2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140115938();
}

