/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006d5d1 */

int FUN_14006d5d1(uint *param_1,uint param_2,longlong param_3)

{
  byte *pbVar1;
  int iVar2;
  
  if (*param_1 <= param_2) {
    iVar2 = FUN_14006d2f7((longlong)param_1,param_2 + 1,param_3);
    if (iVar2 != 0) {
      return iVar2;
    }
    *param_1 = param_2 + 1;
  }
  pbVar1 = (byte *)(*(longlong *)(param_1 + 2) + (ulonglong)(param_2 >> 3));
  *pbVar1 = *pbVar1 | (byte)(0x80 >> ((byte)param_2 & 7));
  return 0;
}

