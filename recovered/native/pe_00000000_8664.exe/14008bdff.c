/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008bdff */

void FUN_14008bdff(longlong param_1,byte param_2,uint param_3)

{
  byte bVar1;
  
  if ((param_3 == 0) || (((int)*(uint *)(param_1 + 0x130) >> 0x18 & param_3) != 0)) {
    *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) & 0xf1ffffff;
    bVar1 = *(byte *)(param_1 + 0x10c);
    if (*(char *)(param_1 + 0x10d) == '\x01') {
      bVar1 = bVar1 ^ 1;
      *(byte *)(param_1 + 0x10c) = bVar1;
    }
    *(bool *)(param_1 + 0x10d) = bVar1 != param_2;
  }
  return;
}

