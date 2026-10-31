/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041d47e */

int __cdecl FUN_0041d47e(int param_1)

{
  uint uVar1;
  int iVar2;
  int local_14;
  uint local_10;
  
  local_10 = DAT_0050e8c0 ^ (uint)&local_14;
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 100);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x9c) + 4);
  if ((uVar1 & 1) == 0) {
    *(uint *)(*(int *)(param_1 + 0x9c) + 4) = uVar1 | 1;
  }
  else {
    FUN_0041c607(iVar2,*(int *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  iVar2 = FUN_0041c6b3(iVar2,*(uint *)(param_1 + 0x54),0,*(uint *)(param_1 + 0x4c),0,&local_14);
  *(int *)(param_1 + 0x58) = iVar2;
  if (DAT_0050e8c0 == (local_10 ^ (uint)&local_14)) {
    return local_14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_10 ^ (uint)&local_14);
}

