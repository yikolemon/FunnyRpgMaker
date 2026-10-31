/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022a3f4 */

undefined8 FUN_18022a3f4(longlong param_1,longlong param_2,longlong *param_3,ulonglong *param_4)

{
  byte *pbVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  pbVar1 = (byte *)*param_3;
  if ((*(byte **)(param_1 + 0x40) <= pbVar1) &&
     (pbVar1 <= (byte *)(*(longlong *)(param_1 + 0x80) + (ulonglong)*(uint *)(param_1 + 0x88) + -4))
     ) {
    *param_3 = (longlong)(pbVar1 + 3);
    uVar2 = (uint)pbVar1[2] | (uint)pbVar1[1] << 8 | (uint)*pbVar1 << 0x10;
    if ((uVar2 != 0) &&
       ((uVar4 = param_2 + (ulonglong)uVar2, *(ulonglong *)(param_1 + 0x40) <= uVar4 &&
        (uVar3 = (ulonglong)*(uint *)(param_1 + 0x88) + *(longlong *)(param_1 + 0x80), uVar4 < uVar3
        )))) {
      *param_4 = uVar4;
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
  }
  return 0;
}

