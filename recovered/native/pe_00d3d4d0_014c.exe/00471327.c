/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00471327 */

undefined4 __fastcall FUN_00471327(int param_1,int param_2,int *param_3,uint *param_4)

{
  byte *pbVar1;
  uint uVar2;
  
  pbVar1 = (byte *)*param_3;
  if ((*(byte **)(param_1 + 0x24) <= pbVar1) &&
     (pbVar1 <= (byte *)(*(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x4c) + -4))) {
    *param_3 = (int)(pbVar1 + 3);
    uVar2 = (uint)pbVar1[2] | (uint)pbVar1[1] << 8 | (uint)*pbVar1 << 0x10;
    if ((uVar2 != 0) &&
       ((uVar2 = param_2 + uVar2, *(uint *)(param_1 + 0x24) <= uVar2 &&
        (uVar2 < (uint)(*(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x4c)))))) {
      *param_4 = uVar2;
      return CONCAT31((int3)((uint)param_4 >> 8),1);
    }
  }
  return 0;
}

