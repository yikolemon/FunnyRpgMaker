/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400464dc */

void FUN_1400464dc(longlong param_1,uint param_2,int param_3,int param_4)

{
  byte *pbVar1;
  int *piVar2;
  
  if (*(short *)(param_1 + 0x1a0) != 0) {
    if (*(int *)(param_1 + 0x324) == 0) {
      piVar2 = (int *)(*(longlong *)(param_1 + 0xc0) + (ulonglong)param_2 * 8);
      *piVar2 = *piVar2 + param_3;
    }
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0xd0) + (ulonglong)param_2);
    *pbVar1 = *pbVar1 | 8;
  }
  if (*(short *)(param_1 + 0x1a2) != 0) {
    if (*(int *)(param_1 + 0x324) != 7) {
      piVar2 = (int *)(*(longlong *)(param_1 + 0xc0) + 4 + (ulonglong)param_2 * 8);
      *piVar2 = *piVar2 + param_4;
    }
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0xd0) + (ulonglong)param_2);
    *pbVar1 = *pbVar1 | 0x10;
  }
  return;
}

