/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b5aef */

undefined4 * FUN_100b5aef(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined4 *)(param_1 + 0x18);
    do {
      puVar1 = puVar2 + -6;
      if (param_3 != puVar1) {
        if (0xf < (uint)puVar2[-1]) {
          puVar1 = (undefined4 *)puVar2[-6];
        }
        FUN_100180a6(puVar1,puVar2[-2]);
        puVar1 = puVar2;
        if (0xf < (uint)puVar2[5]) {
          puVar1 = (undefined4 *)*puVar2;
        }
        FUN_100180a6(puVar1,puVar2[4]);
      }
      param_3 = param_3 + 0xc;
      puVar2 = puVar2 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return param_3;
}

