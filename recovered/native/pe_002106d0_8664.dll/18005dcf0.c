/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005dcf0 */

void Unwind_18005dcf0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  
  bVar1 = (byte)*(undefined4 *)(param_2 + 0x4c0) & 1;
  *(byte *)(param_2 + 0x4df) = bVar1;
  if (*(char *)(param_2 + 0x4db) == '\x01') {
    lVar2 = 0x40;
    do {
      FUN_1800010ec(lVar2 + param_2 + 0xc0);
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != -0x20);
  }
  *(byte *)(param_2 + 0x4df) = bVar1;
  return;
}

