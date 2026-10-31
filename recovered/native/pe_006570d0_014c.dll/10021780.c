/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10021780 */

void __fastcall FUN_10021780(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1[1] != 0) {
    iVar1 = FUN_1022d070(*param_1,param_1[1]);
    if (iVar1 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1022d330(1);
}

