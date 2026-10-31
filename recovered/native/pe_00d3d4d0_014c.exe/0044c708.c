/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044c708 */

uint __fastcall FUN_0044c708(int param_1,undefined4 *param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  
  pbVar1 = (byte *)*param_2;
  if (*pbVar1 == 0xff) {
    iVar2 = ((uint)pbVar1[3] | (uint)pbVar1[2] << 8 | (uint)pbVar1[1] << 0x10) * 0x100 + 0x8000;
  }
  else {
    if (*pbVar1 != 0x1e) {
      uVar3 = FUN_0044cfb0(pbVar1,*(byte **)(param_1 + 8));
      return uVar3;
    }
    iVar2 = FUN_0044cbd2(pbVar1,*(byte **)(param_1 + 8),0,(int *)0x0);
  }
  return iVar2 >> 0x10;
}

