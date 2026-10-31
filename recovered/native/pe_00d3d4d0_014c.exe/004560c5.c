/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004560c5 */

undefined4 __fastcall FUN_004560c5(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int local_14;
  uint local_10;
  
  local_10 = DAT_0050e8c0 ^ (uint)&local_14;
  if (*(int *)(param_3 + 0xc) == 0xb) {
    (**(code **)(param_3 + 0x10))(param_1,param_2);
    uVar1 = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    uVar2 = 0x1d0;
    if (*(int *)(param_3 + 8) != 6) {
      uVar2 = (uint)(*(int *)(param_3 + 8) == 3) << 5 | 0x84;
    }
    local_14 = param_1 + uVar2;
    if (*(int *)(param_3 + 0xc) - 9U < 2) {
      uVar1 = (**(code **)(param_2 + 0x44))(param_2,param_3,&local_14,0,0);
    }
    else {
      uVar1 = (**(code **)(param_2 + 0x40))(param_2,param_3,&local_14,0,0);
    }
  }
  if (DAT_0050e8c0 != (local_10 ^ (uint)&local_14)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_10 ^ (uint)&local_14);
  }
  return uVar1;
}

