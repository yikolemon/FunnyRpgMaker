/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020f4d0 */

void __fastcall FUN_1020f4d0(int *param_1)

{
  int iVar1;
  byte *pbVar2;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    pbVar2 = (byte *)(param_1[2] + 0x10);
    do {
      *pbVar2 = *pbVar2 & 0xfb;
      pbVar2[8] = 0xff;
      pbVar2[9] = 0xff;
      pbVar2[10] = 0xff;
      pbVar2[0xb] = 0xff;
      pbVar2 = pbVar2 + 0x1c;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

