/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bc36f */

undefined8 FUN_1800bc36f(undefined8 param_1,undefined8 *param_2)

{
  if (DAT_180417a10 < 0x30257) {
    if (DAT_180417a10 < 0x30000) {
      FUN_1800bcc6f(param_1,*(undefined4 *)*param_2,*(undefined8 *)param_2[1]);
    }
    else {
      FUN_1800bcad1();
    }
  }
  else {
    FUN_1800bc3c5(param_1,*(undefined4 *)*param_2,*(undefined8 *)param_2[1]);
  }
  return param_1;
}

