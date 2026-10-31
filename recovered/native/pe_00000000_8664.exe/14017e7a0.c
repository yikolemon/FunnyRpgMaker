/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017e7a0 */

void FUN_14017e7a0(byte *param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  
  uVar2 = -*(int *)(param_1 + 4);
  if (((param_3 == ((param_3 + *(int *)(param_1 + 4)) - 1 & uVar2)) &&
      (iVar1 = (int)param_3 >> (*param_1 & 0x1f), -1 < iVar1)) &&
     (iVar1 <= *(int *)(param_1 + 0xa0))) {
    pbVar3 = (byte *)(((longlong)(param_2 >> 3) + *(longlong *)(param_1 + 0xb0)) -
                     (longlong)iVar1 * (longlong)*(int *)(param_1 + 0xa8));
    *pbVar3 = *pbVar3 | (byte)(0x80 >> ((byte)param_2 & 7));
  }
  if (((param_4 == (uVar2 & param_4)) && (iVar1 = (int)param_4 >> (*param_1 & 0x1f), -1 < iVar1)) &&
     (iVar1 <= *(int *)(param_1 + 0xa0))) {
    pbVar3 = (byte *)(((longlong)(param_2 >> 3) + *(longlong *)(param_1 + 0xb0)) -
                     (longlong)iVar1 * (longlong)*(int *)(param_1 + 0xa8));
    *pbVar3 = *pbVar3 | (byte)(0x80 >> ((byte)param_2 & 7));
  }
  return;
}

