/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10235000 */

void __fastcall FUN_10235000(int *param_1)

{
  int *piVar1;
  
  if ((*param_1 != 0) && (piVar1 = (int *)(*param_1 + -8), *piVar1 == 0xdddd)) {
    thunk_FUN_10274120(piVar1);
  }
  return;
}

