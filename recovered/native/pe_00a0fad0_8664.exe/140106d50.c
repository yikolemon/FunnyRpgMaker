/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140106d50 */

void FUN_140106d50(longlong *param_1,undefined8 param_2,byte *param_3)

{
  longlong local_res8 [4];
  
  local_res8[0] = *param_1;
  if ((*param_3 & 1) != 0) {
    local_res8[0] = *(longlong *)((ulonglong)*(uint *)(param_3 + 0x14) + local_res8[0]);
  }
  FUN_14011e5d0(local_res8,param_2,param_3,0xffffffff);
  return;
}

