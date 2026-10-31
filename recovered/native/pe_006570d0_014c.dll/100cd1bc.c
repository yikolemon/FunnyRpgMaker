/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cd1bc */

void FUN_100cd1bc(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)param_2[1] = 0;
  puVar2 = (undefined4 *)*param_2;
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_100431d4();
    FUN_102283a0(puVar2,0x10);
    puVar2 = puVar1;
  }
  return;
}

