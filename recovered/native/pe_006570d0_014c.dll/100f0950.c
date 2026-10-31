/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f0950 */

void __fastcall FUN_100f0950(int param_1)

{
  int *piVar1;
  
  FUN_100f072e();
  piVar1 = (int *)(param_1 + 0x10);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

