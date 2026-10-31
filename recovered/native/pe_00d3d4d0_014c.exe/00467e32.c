/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00467e32 */

void __fastcall FUN_00467e32(int param_1,undefined4 param_2,int param_3)

{
  int iStack_10;
  uint local_c;
  
  local_c = DAT_0050e8c0 ^ (uint)&iStack_10;
  FUN_00467798(param_1,param_2);
  FUN_00467c68((uint *)(param_1 + 0xc),param_3,&iStack_10);
  if (DAT_0050e8c0 == (local_c ^ (uint)&iStack_10)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_c ^ (uint)&iStack_10);
}

