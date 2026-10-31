/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004738fa */

int __fastcall FUN_004738fa(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int local_14;
  uint local_10;
  
  local_10 = DAT_0050e8c0 ^ (uint)&local_14;
  local_14 = 0;
  iVar1 = 0;
  if (*(uint *)(param_1 + 0x1c) < param_2) {
    *(int *)(param_1 + 0x24) = param_3;
    iVar1 = FUN_0041efcd(param_3,4,*(uint *)(param_1 + 0x1c),param_2,*(int *)(param_1 + 0x20),
                         &local_14);
    *(int *)(param_1 + 0x20) = iVar1;
    iVar1 = local_14;
    if (local_14 == 0) {
      *(uint *)(param_1 + 0x1c) = param_2;
      iVar1 = 0;
    }
  }
  if (DAT_0050e8c0 == (local_10 ^ (uint)&local_14)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_10 ^ (uint)&local_14);
}

