/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044ddcb */

void __cdecl FUN_0044ddcb(int param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0050e8c0 ^ (uint)&local_10;
  piVar1 = *(int **)(*(int *)(param_1 + 0x80) + 0x34);
  if (piVar1 == (int *)0x0) {
    if (DAT_0050e8c0 == (local_8 ^ (uint)&local_10)) {
      FUN_0044decc((int *)(*(int *)(param_1 + 0x2c8) + 0x4b4),param_2);
      return;
    }
  }
  else {
    local_10 = *param_2;
    local_c = param_3;
    (**(code **)(*piVar1 + 4))(piVar1[1],&local_10);
    if (DAT_0050e8c0 == (local_8 ^ (uint)&local_10)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_8 ^ (uint)&local_10);
}

