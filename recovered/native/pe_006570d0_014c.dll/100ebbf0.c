/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ebbf0 */

void __thiscall FUN_100ebbf0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (*(char *)(param_1 + 0xb) == '\x01') {
    if (param_1 == param_2) {
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    }
    else {
      puVar1 = param_2;
      if (0xf < (uint)param_2[5]) {
        puVar1 = (undefined4 *)*param_2;
      }
      FUN_100180a6(puVar1,param_2[4]);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
      FUN_100ebc5a(param_2[8],(int)(param_2[9] - param_2[8]) >> 5);
    }
  }
  else {
    FUN_100ebeca(param_1,param_2);
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
  return;
}

