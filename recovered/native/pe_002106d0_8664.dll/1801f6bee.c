/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f6bee */

void FUN_1801f6bee(longlong param_1,longlong param_2,ushort param_3,int param_4)

{
  byte *pbVar1;
  int *piVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x2d0) != 0) {
    if (*(int *)(param_1 + 0x324) == 0) {
      lVar3 = (longlong)*(int *)(param_1 + 0x2d0) * (longlong)param_4;
      piVar2 = (int *)(*(longlong *)(param_2 + 0x10) + (ulonglong)param_3 * 8);
      *piVar2 = *piVar2 + (int)((ulonglong)(lVar3 + (lVar3 >> 0x3f) + 0x8000) >> 0x10);
    }
    pbVar1 = (byte *)(*(longlong *)(param_2 + 0x20) + (ulonglong)param_3);
    *pbVar1 = *pbVar1 | 8;
  }
  if ((longlong)*(int *)(param_1 + 0x2d4) != 0) {
    if (*(int *)(param_1 + 0x324) != 7) {
      lVar3 = (longlong)*(int *)(param_1 + 0x2d4) * (longlong)param_4;
      piVar2 = (int *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)param_3 * 8);
      *piVar2 = *piVar2 + (int)((ulonglong)((lVar3 >> 0x3f) + lVar3 + 0x8000) >> 0x10);
    }
    pbVar1 = (byte *)(*(longlong *)(param_2 + 0x20) + (ulonglong)param_3);
    *pbVar1 = *pbVar1 | 0x10;
  }
  return;
}

