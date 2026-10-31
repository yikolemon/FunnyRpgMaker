/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006cafe */

void __fastcall FUN_1006cafe(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)*param_1;
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)*puVar1;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    FUN_1006cb34(param_1,puVar1);
    puVar1 = puVar2;
  }
  FUN_102283a0(*param_1,0x30);
  return;
}

