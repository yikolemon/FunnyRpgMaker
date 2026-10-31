/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10022af8 */

void FUN_10022af8(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)param_2[1] = 0;
  puVar2 = (undefined4 *)*param_2;
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_10022b2f(puVar2 + 2);
    FUN_102283a0(puVar2,0x28);
    puVar2 = puVar1;
  }
  return;
}

