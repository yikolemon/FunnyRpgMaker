/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00420d5c */

uint __cdecl FUN_00420d5c(int param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(param_1 + 0x20);
  uVar1 = 0;
  if ((int)puVar2 + 3U < *(uint *)(param_1 + 0x24)) {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    uVar1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  }
  *(uint **)(param_1 + 0x20) = puVar2;
  return uVar1;
}

