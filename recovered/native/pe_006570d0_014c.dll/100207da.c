/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100207da */

void __fastcall FUN_100207da(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[3];
    puVar2[3] = 0;
    (**(code **)*puVar2)(1);
    puVar2 = puVar1;
  }
  *param_1 = 0;
  return;
}

