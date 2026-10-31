/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00477e66 */

void __fastcall FUN_00477e66(uint *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint local_1c;
  int iStack_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_1c;
  if (0x8000 < (int)*param_1) {
    iVar2 = param_4 * param_3;
    if ((int)(param_1[iVar2 * 4 + param_2 * 4] - 0x10000) < (int)*param_1) {
      local_1c = param_2 * 0x10000 + param_1[iVar2 * 4 + param_2 * 4 + 1];
      iStack_18 = param_3 * 0x10000 + param_1[iVar2 * 4 + param_2 * 4 + 2];
      uVar1 = FUN_00421279(&local_1c);
      if ((int)uVar1 < (int)*param_1) {
        *param_1 = uVar1;
        *(ulonglong *)(param_1 + 1) = CONCAT44(iStack_18,local_1c);
      }
    }
  }
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_1c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_1c);
}

