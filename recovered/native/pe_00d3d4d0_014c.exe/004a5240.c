/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a5240 */

void __cdecl FUN_004a5240(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 >> 0x18;
  if (0 < DAT_0051bfb0) {
    MXCSR = MXCSR & 0xffffffc0 |
            -(uint)((uVar1 & 1) != 0) & 0x20 | -(uint)((uVar1 & 2) != 0) & 0x10 |
            -(uint)((uVar1 & 4) != 0) & 8 | -(uint)((uVar1 & 8) != 0) & 4 |
            (uint)((uVar1 & 0x10) != 0) | -(uint)((uVar1 & 0x20) != 0) & 2;
  }
  return;
}

