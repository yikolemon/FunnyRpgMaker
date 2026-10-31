/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045de2b */

undefined4 __fastcall FUN_0045de2b(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0050e8c0 ^ (uint)&local_10;
  local_10 = 3;
  iVar1 = FUN_0045de82(param_1,(int)&local_10,1);
  uVar2 = 0xa0;
  if (iVar1 == 1) {
    *param_2 = local_c;
    uVar2 = 0;
  }
  if (DAT_0050e8c0 == (local_8 ^ (uint)&local_10)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_8 ^ (uint)&local_10);
}

