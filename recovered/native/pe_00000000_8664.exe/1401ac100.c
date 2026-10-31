/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401ac100 */

int FUN_1401ac100(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_1401ab180(param_3);
  if (*(int *)(param_2 + 0x48) == 0) {
    lVar2 = FUN_1401aae30();
    if (*(int *)(lVar2 + 0x78) != -2) {
      lVar2 = FUN_1401aae30();
      iVar1 = *(int *)(lVar2 + 0x78);
      lVar2 = FUN_1401aae30();
      *(undefined4 *)(lVar2 + 0x78) = 0xfffffffe;
    }
    return iVar1;
  }
  lVar2 = FUN_1401aae30();
  if (*(int *)(lVar2 + 0x78) == -2) {
    return *(int *)(param_2 + 0x48) + -2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1401a0758();
}

