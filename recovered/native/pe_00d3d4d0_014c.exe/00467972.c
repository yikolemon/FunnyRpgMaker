/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00467972 */

int __fastcall FUN_00467972(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int local_14;
  uint local_10;
  
  local_10 = DAT_0050e8c0 ^ (uint)&local_14;
  uVar2 = *(uint *)(param_1 + 4) >> 3;
  uVar3 = param_2 + 7U >> 3;
  local_14 = 0;
  iVar1 = 0;
  if (uVar2 < uVar3) {
    uVar3 = uVar3 + 7 & 0xfffffff8;
    iVar1 = FUN_0041c6b3(param_3,1,uVar2,uVar3,*(int *)(param_1 + 8),&local_14);
    *(int *)(param_1 + 8) = iVar1;
    iVar1 = local_14;
    if (local_14 == 0) {
      *(uint *)(param_1 + 4) = uVar3 << 3;
      iVar1 = 0;
    }
  }
  if (DAT_0050e8c0 == (local_10 ^ (uint)&local_14)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_10 ^ (uint)&local_14);
}

