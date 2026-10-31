/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047f7c0 */

uint * __cdecl FUN_0047f7c0(uint *param_1)

{
  SIZE_T SVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = param_1;
  do {
    uVar2 = *puVar3;
    puVar3 = (uint *)((int)puVar3 + 2);
  } while ((short)uVar2 != 0);
  SVar1 = ((int)puVar3 - ((int)param_1 + 2) >> 1) * 2 + 2;
  puVar3 = (uint *)FUN_004924d0(SVar1);
  if (puVar3 != (uint *)0x0) {
    FUN_004878c0(puVar3,param_1,SVar1);
  }
  return puVar3;
}

