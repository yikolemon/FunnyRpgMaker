/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005dc32 */

void Unwind_18005dc32(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = (byte)*(undefined4 *)(param_2 + 0x4c0) & 1;
  *(byte *)(param_2 + 0x4db) = bVar1;
  if (*(char *)(param_2 + 0x4d0) == '\x01') {
    FUN_18006db58(param_2 + 0xa0);
  }
  *(byte *)(param_2 + 0x4db) = bVar1;
  return;
}

