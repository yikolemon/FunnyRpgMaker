/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016f67d */

undefined8 FUN_14016f67d(uint *param_1,uint param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  
  if (*param_1 <= param_2) {
    uVar2 = FUN_14016f3a3(param_1,param_2 + 1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    *param_1 = param_2 + 1;
  }
  pbVar1 = (byte *)(*(longlong *)(param_1 + 2) + (ulonglong)(param_2 >> 3));
  *pbVar1 = *pbVar1 | (byte)(0x80 >> ((byte)param_2 & 7));
  return 0;
}

