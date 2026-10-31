/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18028e5a0 */

int FUN_18028e5a0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_18028d620(param_3);
  if (*(int *)(param_2 + 0x48) == 0) {
    lVar2 = FUN_18028cfc0();
    if (*(int *)(lVar2 + 0x78) != -2) {
      lVar2 = FUN_18028cfc0();
      iVar1 = *(int *)(lVar2 + 0x78);
      lVar2 = FUN_18028cfc0();
      *(undefined4 *)(lVar2 + 0x78) = 0xfffffffe;
    }
    return iVar1;
  }
  lVar2 = FUN_18028cfc0();
  if (*(int *)(lVar2 + 0x78) == -2) {
    return *(int *)(param_2 + 0x48) + -2;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

