/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c4ce4 */

uint FUN_101c4ce4(int param_1)

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

