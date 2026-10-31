/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044e82e */

void __fastcall FUN_0044e82e(int param_1,uint *param_2)

{
  int iStack_8;
  uint local_4;
  
  local_4 = DAT_0050e8c0 ^ (uint)&iStack_8;
  FUN_00421900(param_1,param_2,&iStack_8);
  if (DAT_0050e8c0 == (local_4 ^ (uint)&iStack_8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_4 ^ (uint)&iStack_8);
}

