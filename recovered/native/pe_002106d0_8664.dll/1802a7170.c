/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802a7170 */

undefined8 FUN_1802a7170(ulonglong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong local_res10 [3];
  
  local_res10[0] = 0;
  iVar2 = FUN_1802a70e0(local_res10);
  uVar1 = local_res10[0];
  if (iVar2 == 0) {
    local_res10[0] = local_res10[0] | 0x1f;
    *param_1 = uVar1;
    iVar2 = FUN_1802a7100(local_res10);
    if (iVar2 == 0) {
      FUN_1802a7bf0();
      return 0;
    }
  }
  return 1;
}

