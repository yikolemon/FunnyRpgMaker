/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010d9e3 */

undefined4 FUN_1010d9e3(int param_1)

{
  undefined4 uVar1;
  
  if ((((*(char *)(DAT_1039d74c + 0x6f) == '\0') && (*(char *)(param_1 + 0x34) != '\x01')) ||
      ((*(uint *)(param_1 + 0xc) & 0x1080001) != 0)) ||
     (uVar1 = CONCAT31((int3)((uint)DAT_1039d74c >> 8),1), *(char *)(param_1 + 0x102) == '\x01')) {
    uVar1 = 0;
  }
  return uVar1;
}

