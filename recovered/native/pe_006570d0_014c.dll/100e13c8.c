/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e13c8 */

void __fastcall FUN_100e13c8(int param_1)

{
  int *piVar1;
  
  FUN_100e1468(*(undefined4 *)
                (*(int *)(param_1 + 4) +
                (*(int *)(param_1 + 8) - 1U &
                (*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10)) - 1U) * 4));
  piVar1 = (int *)(param_1 + 0x10);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

