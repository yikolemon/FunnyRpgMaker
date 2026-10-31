/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040aa6f */

WCHAR __cdecl FUN_0040aa6f(undefined4 param_1,UINT *param_2)

{
  undefined4 local_14;
  undefined4 local_10;
  WCHAR local_a;
  uint local_8;
  
  local_8 = DAT_0050e8c0 ^ (uint)&local_14;
  local_a = L'\0';
  local_10 = 0;
  local_14 = 0;
  FUN_004814e0(&local_a,(byte *)&param_1,1,&local_14,param_2);
  if (DAT_0050e8c0 == (local_8 ^ (uint)&local_14)) {
    return local_a;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_8 ^ (uint)&local_14);
}

