/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019128c */

void __fastcall FUN_1019128c(undefined4 *param_1)

{
  param_1[3] = 0;
  if (param_1[0xb] != 0) {
    param_1[10] = 0;
    param_1[9] = 0;
    FUN_100fa2cb(param_1[0xb]);
    param_1[0xb] = 0;
  }
  if (param_1[2] != 0) {
    param_1[1] = 0;
    *param_1 = 0;
    FUN_100fa2cb(param_1[2]);
    param_1[2] = 0;
  }
  if (param_1[8] != 0) {
    param_1[7] = 0;
    param_1[6] = 0;
    FUN_100fa2cb(param_1[8]);
    param_1[8] = 0;
  }
  param_1[0xc] = 0xffffffff;
  *(undefined8 *)(param_1 + 0xd) = 0;
  param_1[0xf] = param_1[0xf] & 0xfc000000;
  return;
}

