/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044de4d */

void __cdecl FUN_0044de4d(int param_1,uint param_2,int *param_3,uint *param_4)

{
  undefined4 *puVar1;
  int local_18;
  uint local_14;
  uint local_10;
  
  local_10 = DAT_0050e8c0 ^ (uint)&local_18;
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x80) + 0x34);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_0044dedf((int *)(*(int *)(param_1 + 0x2c8) + 0x4b4),param_2,param_3,param_4);
  }
  else {
    (**(code **)*puVar1)(puVar1[1],param_2,&local_18);
    *param_3 = local_18;
    *param_4 = local_14;
  }
  if (DAT_0050e8c0 == (local_10 ^ (uint)&local_18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_10 ^ (uint)&local_18);
}

