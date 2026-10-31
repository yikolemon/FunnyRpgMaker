/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140134fb0 */

undefined8 FUN_140134fb0(ulonglong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong local_res10 [3];
  
  local_res10[0] = 0;
  iVar2 = FUN_140134f20(local_res10);
  uVar1 = local_res10[0];
  if (iVar2 == 0) {
    local_res10[0] = local_res10[0] | 0x1f;
    *param_1 = uVar1;
    iVar2 = FUN_140134f40(local_res10);
    if (iVar2 == 0) {
      FUN_1401359f0();
      return 0;
    }
  }
  return 1;
}

