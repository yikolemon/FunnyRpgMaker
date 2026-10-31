/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00444b56 */

void __fastcall FUN_00444b56(int param_1,int *param_2)

{
  int iVar1;
  uint uStack_10;
  uint local_c;
  
  local_c = DAT_0050e8c0 ^ (uint)&uStack_10;
  iVar1 = (**(code **)(param_1 + 0x204))(param_1,0x70726570,param_2,&uStack_10);
  if (iVar1 == 0) {
    *(uint *)(param_1 + 0x2b8) = uStack_10;
    FUN_00420bb8(param_2,uStack_10,(int *)(param_1 + 700));
  }
  else {
    *(undefined4 *)(param_1 + 700) = 0;
    *(undefined4 *)(param_1 + 0x2b8) = 0;
  }
  if (DAT_0050e8c0 == (local_c ^ (uint)&uStack_10)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_c ^ (uint)&uStack_10);
}

