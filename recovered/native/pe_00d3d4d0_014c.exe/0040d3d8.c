/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040d3d8 */

undefined8 __cdecl FUN_0040d3d8(uint *param_1,uint *param_2,uint param_3,int param_4)

{
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_0050e8c0 ^ (uint)&stack0xffffffdc;
  FUN_0040d43d((int *)&local_10,param_1,param_2,param_3,param_4);
  if (DAT_0050e8c0 == (local_8 ^ (uint)&stack0xffffffdc)) {
    return local_10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_8 ^ (uint)&stack0xffffffdc);
}

