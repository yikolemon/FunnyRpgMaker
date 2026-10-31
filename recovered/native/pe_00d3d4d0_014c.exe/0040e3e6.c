/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040e3e6 */

undefined8 __cdecl FUN_0040e3e6(uint *param_1,uint *param_2,undefined8 param_3,int param_4)

{
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_0050e8c0 ^ (uint)&stack0xffffffd8;
  FUN_0040e44b((int *)&local_10,param_1,param_2,param_3,param_4);
  if (DAT_0050e8c0 == (local_8 ^ (uint)&stack0xffffffd8)) {
    return local_10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_8 ^ (uint)&stack0xffffffd8);
}

