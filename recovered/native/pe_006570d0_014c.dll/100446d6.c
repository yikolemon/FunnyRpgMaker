/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100446d6 */

void __fastcall FUN_100446d6(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_1022c1e0(param_1);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1022d330(5);
  }
  if (*(int *)(param_1 + 0x2c) != 0x7fffffff) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_1022d330(6);
}

