/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00444ae0 */

void __fastcall FUN_00444ae0(int param_1,int *param_2)

{
  int iVar1;
  uint uStack_10;
  uint local_c;
  
  local_c = DAT_0050e8c0 ^ (uint)&uStack_10;
  iVar1 = (**(code **)(param_1 + 0x204))(param_1,0x6670676d,param_2,&uStack_10);
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x2b0) = uStack_10;
    FUN_00420bb8(param_2,uStack_10,(int *)(param_1 + 0x2b4));
  }
  else {
    *(undefined4 *)(param_1 + 0x2b4) = 0;
    *(undefined4 *)(param_1 + 0x2b0) = 0;
  }
  if (DAT_0050e8c0 == (local_c ^ (uint)&uStack_10)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_c ^ (uint)&uStack_10);
}

