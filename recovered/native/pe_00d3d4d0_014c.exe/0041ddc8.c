/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041ddc8 */

void __cdecl FUN_0041ddc8(int param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  
  if (((param_2 != (uint *)0x0 && param_1 != 0) &&
      (puVar2 = *(uint **)(param_1 + 4), puVar2 != (uint *)0x0)) && (*(ushort *)(param_1 + 2) != 0))
  {
    puVar1 = puVar2 + (uint)*(ushort *)(param_1 + 2) * 2;
    do {
      FUN_0041de37(puVar2,param_2);
      puVar2 = puVar2 + 2;
    } while (puVar2 < puVar1);
  }
  return;
}

