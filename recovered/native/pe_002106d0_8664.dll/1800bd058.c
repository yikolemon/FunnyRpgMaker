/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bd058 */

undefined8 FUN_1800bd058(undefined8 param_1,undefined8 *param_2)

{
  if (DAT_180417a10 < 0x30257) {
    if (DAT_180417a10 < 0x30000) {
      FUN_1800bebf6(param_1,*(undefined4 *)*param_2,*(undefined8 *)param_2[1],param_2[2]);
    }
    else {
      FUN_1800be51d();
    }
  }
  else {
    FUN_1800bd0b6(param_1,*(undefined4 *)*param_2,*(undefined8 *)param_2[1],param_2[2]);
  }
  return param_1;
}

