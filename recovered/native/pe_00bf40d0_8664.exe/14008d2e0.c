/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008d2e0 */

void FUN_14008d2e0(longlong *param_1,ulonglong *param_2,byte *param_3)

{
  longlong local_res8 [4];
  
  local_res8[0] = *param_1;
  if ((*param_3 & 1) != 0) {
    local_res8[0] = *(longlong *)((ulonglong)*(uint *)(param_3 + 0x14) + local_res8[0]);
  }
  FUN_14009e580(local_res8,param_2,(longlong)param_3,-1);
  return;
}

