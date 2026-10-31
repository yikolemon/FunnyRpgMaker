/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045e4ee */

uint __fastcall FUN_0045e4ee(undefined4 *param_1,byte *param_2)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  byte *local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_18;
  pbVar2 = (byte *)*param_1;
  local_18 = pbVar2;
  uVar1 = FUN_0045e56a(&local_18,param_2,10);
  uVar3 = 0;
  if (local_18 != pbVar2) {
    if ((local_18 < param_2) && (*local_18 == 0x23)) {
      pbVar2 = local_18 + 1;
      local_18 = pbVar2;
      uVar1 = FUN_0045e56a(&local_18,param_2,uVar1);
      if (local_18 == pbVar2) goto LAB_0045e545;
    }
    *param_1 = local_18;
    uVar3 = uVar1;
  }
LAB_0045e545:
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_18)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_18);
}

