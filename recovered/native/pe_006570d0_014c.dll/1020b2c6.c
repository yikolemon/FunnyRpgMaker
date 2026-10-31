/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020b2c6 */

void __fastcall FUN_1020b2c6(int param_1)

{
  char cVar1;
  
  if ((*(uint *)(param_1 + 0xc) < 0x11) && (cVar1 = FUN_1020c51f(), cVar1 == '\0')) {
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 0x11;
  return;
}

