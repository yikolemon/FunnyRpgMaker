/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10043f64 */

void __fastcall FUN_10043f64(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    FUN_10016fee(*param_1,*(undefined4 *)(*piVar1 + 4));
    FUN_102283a0(*piVar1,0x38);
  }
  return;
}

