/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b781e */

int FUN_100b781e(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined4 *)(param_1 + 4);
    do {
      puVar1 = puVar2;
      if (0xf < (uint)puVar2[5]) {
        puVar1 = (undefined4 *)*puVar2;
      }
      FUN_100180a6(puVar1,puVar2[4]);
      param_3 = param_3 + 0x18;
      puVar2 = puVar2 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return param_3;
}

