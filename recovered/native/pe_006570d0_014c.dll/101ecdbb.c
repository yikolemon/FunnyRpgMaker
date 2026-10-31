/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ecdbb */

void __fastcall FUN_101ecdbb(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  byte *pbVar2;
  
  if (*(short *)(param_1 + 0xfc) != 0) {
    if (*(int *)(param_1 + 0x204) == 0) {
      piVar1 = (int *)(*(int *)(param_1 + 0x68) + param_2 * 8);
      *piVar1 = *piVar1 + param_3;
    }
    pbVar2 = (byte *)(*(int *)(param_1 + 0x70) + param_2);
    *pbVar2 = *pbVar2 | 8;
  }
  if (*(short *)(param_1 + 0xfe) != 0) {
    if (*(int *)(param_1 + 0x204) != 7) {
      piVar1 = (int *)(*(int *)(param_1 + 0x68) + 4 + param_2 * 8);
      *piVar1 = *piVar1 + param_4;
    }
    pbVar2 = (byte *)(*(int *)(param_1 + 0x70) + param_2);
    *pbVar2 = *pbVar2 | 0x10;
  }
  return;
}

