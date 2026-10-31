/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00420d1e */

ushort __cdecl FUN_00420d1e(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)(param_1 + 0x20);
  if ((int)puVar2 + 1U < *(uint *)(param_1 + 0x24)) {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
    uVar1 = uVar1 << 8 | uVar1 >> 8;
  }
  else {
    uVar1 = 0;
  }
  *(ushort **)(param_1 + 0x20) = puVar2;
  return uVar1;
}

