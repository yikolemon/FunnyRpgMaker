/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00467b6b */

int __fastcall FUN_00467b6b(uint *param_1,int param_2,int *param_3)

{
  int iVar1;
  int local_10;
  uint local_c;
  
  local_c = DAT_0050e8c0 ^ (uint)&local_10;
  if (*param_1 == 0) {
    iVar1 = FUN_00467c68(param_1,param_2,&local_10);
  }
  else {
    local_10 = param_1[2] + *param_1 * 0x10 + -0x10;
    iVar1 = 0;
  }
  *param_3 = local_10;
  if (DAT_0050e8c0 == (local_c ^ (uint)&local_10)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_c ^ (uint)&local_10);
}

