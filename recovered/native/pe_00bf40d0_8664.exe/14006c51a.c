/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006c51a */

void FUN_14006c51a(int *param_1)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    pbVar2 = (byte *)(*(longlong *)(param_1 + 2) + 0x10);
    do {
      *pbVar2 = *pbVar2 & 0xfb;
      pbVar2[0x10] = 0xff;
      pbVar2[0x11] = 0xff;
      pbVar2[0x12] = 0xff;
      pbVar2[0x13] = 0xff;
      pbVar2 = pbVar2 + 0x28;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

