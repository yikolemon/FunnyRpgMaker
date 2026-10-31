/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10111c55 */

uint FUN_10111c55(void)

{
  return CONCAT31((int3)((uint)*(int *)(DAT_1039d74c + 0x14cc) >> 8),
                  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0x409)) & 0xffffff01;
}

