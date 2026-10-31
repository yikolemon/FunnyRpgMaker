/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00477f36 */

int __fastcall FUN_00477f36(int param_1,int *param_2)

{
  int *piVar1;
  int local_14;
  uint local_10;
  
  local_10 = DAT_0050e8c0 ^ (uint)&local_14;
  local_14 = 0;
  piVar1 = (int *)FUN_0041e773(param_1,8,&local_14);
  if (local_14 == 0) {
    piVar1[1] = 0;
    *piVar1 = param_1;
    *param_2 = (int)piVar1;
  }
  if (DAT_0050e8c0 == (local_10 ^ (uint)&local_14)) {
    return local_14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_10 ^ (uint)&local_14);
}

