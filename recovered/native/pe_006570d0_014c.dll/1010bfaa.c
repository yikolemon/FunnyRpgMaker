/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010bfaa */

undefined4 FUN_1010bfaa(void)

{
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)DAT_1039d74c >> 8),*(undefined1 *)(DAT_1039d74c + 0x1e88)) &
          0xffffff08;
  return CONCAT31((int3)(uVar1 >> 8),(byte)uVar1 >> 3);
}

