/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10101ce6 */

void __fastcall FUN_10101ce6(undefined4 *param_1)

{
  if (param_1[5] != 0) {
    param_1[4] = 0;
    param_1[3] = 0;
    FUN_100fa2cb(param_1[5]);
    param_1[5] = 0;
  }
  if (param_1[2] != 0) {
    param_1[1] = 0;
    *param_1 = 0;
    FUN_100fa2cb(param_1[2]);
    param_1[2] = 0;
  }
  param_1[7] = 0;
  param_1[6] = 0;
  return;
}

