/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021ff91 */

undefined8 FUN_18021ff91(uint *param_1,uint param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  
  if (*param_1 <= param_2) {
    uVar2 = FUN_18021fcb7(param_1,param_2 + 1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    *param_1 = param_2 + 1;
  }
  pbVar1 = (byte *)(*(longlong *)(param_1 + 2) + (ulonglong)(param_2 >> 3));
  *pbVar1 = *pbVar1 | (byte)(0x80 >> ((byte)param_2 & 7));
  return 0;
}

