/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003b49d */

void FUN_14003b49d(longlong param_1,ushort *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  
  if (*param_2 < *(ushort *)(param_1 + 0x40)) {
    bVar2 = -(*(short *)(param_1 + 0x1a0) == 0) | 0xf7;
    bVar3 = bVar2 & 0xef;
    if (*(short *)(param_1 + 0x1a2) == 0) {
      bVar3 = bVar2;
    }
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x60) + (ulonglong)*param_2);
    *pbVar1 = *pbVar1 & bVar3;
  }
  else if (*(char *)(param_1 + 0x2c6) != '\0') {
    *(undefined4 *)(param_1 + 0x20) = 0x86;
    return;
  }
  return;
}

