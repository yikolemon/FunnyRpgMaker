/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010de26 */

void FUN_1010de26(int param_1,byte param_2,uint param_3)

{
  byte bVar1;
  
  if ((param_3 == 0) || (((int)*(uint *)(param_1 + 0x120) >> 0x18 & param_3) != 0)) {
    *(uint *)(param_1 + 0x120) = *(uint *)(param_1 + 0x120) & 0xf1ffffff;
    bVar1 = *(byte *)(param_1 + 0xfc);
    if (*(char *)(param_1 + 0xfd) == '\x01') {
      bVar1 = bVar1 ^ 1;
      *(byte *)(param_1 + 0xfc) = bVar1;
    }
    *(bool *)(param_1 + 0xfd) = bVar1 != param_2;
  }
  return;
}

