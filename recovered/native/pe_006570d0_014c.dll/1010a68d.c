/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010a68d */

uint __fastcall FUN_1010a68d(int param_1)

{
  undefined4 in_EAX;
  
  if (*(char *)(param_1 + 0xf9) == '\x01') {
    return CONCAT31((int3)((uint)in_EAX >> 8),*(undefined1 *)(param_1 + 0x101)) ^ 1;
  }
  return 0;
}

