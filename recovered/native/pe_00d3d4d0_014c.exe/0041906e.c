/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041906e */

void __cdecl FUN_0041906e(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)param_2[1] = 0;
  puVar2 = (undefined4 *)*param_2;
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_004190a2((int)(puVar2 + 2));
    FUN_0047f280(puVar2);
    puVar2 = puVar1;
  }
  return;
}

