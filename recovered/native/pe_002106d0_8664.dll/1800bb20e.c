/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bb20e */

undefined8 * FUN_1800bb20e(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined8 *)(param_1 + 0x20);
    do {
      puVar1 = puVar2 + -4;
      if (param_3 != puVar1) {
        if (0xf < (ulonglong)puVar2[-1]) {
          puVar1 = (undefined8 *)puVar2[-4];
        }
        FUN_180017ca0(param_3,puVar1,puVar2[-2]);
        puVar1 = puVar2;
        if (0xf < (ulonglong)puVar2[3]) {
          puVar1 = (undefined8 *)*puVar2;
        }
        FUN_180017ca0(param_3 + 4,puVar1,puVar2[2]);
      }
      param_3 = param_3 + 8;
      puVar2 = puVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return param_3;
}

