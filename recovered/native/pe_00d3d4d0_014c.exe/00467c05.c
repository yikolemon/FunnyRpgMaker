/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00467c05 */

void __fastcall FUN_00467c05(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int local_14;
  uint local_10;
  
  local_10 = DAT_0050e8c0 ^ (uint)&local_14;
  uVar2 = param_2 + 7U & 0xfffffff8;
  iVar1 = FUN_0041efcd(param_3,0xc,*(uint *)(param_1 + 4),uVar2,*(int *)(param_1 + 8),&local_14);
  *(int *)(param_1 + 8) = iVar1;
  if (local_14 == 0) {
    *(uint *)(param_1 + 4) = uVar2;
  }
  if (DAT_0050e8c0 == (local_10 ^ (uint)&local_14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_10 ^ (uint)&local_14);
}

