/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b6562 */

void __fastcall FUN_100b6562(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1[4] != 0) {
    param_1[3] = 0;
    param_1[4] = 0;
  }
  if (param_1[1] != 0) {
    FUN_100b6596();
  }
  uVar1 = *param_1;
  *param_1 = 0;
  FUN_102283a0(uVar1,8);
  return;
}

