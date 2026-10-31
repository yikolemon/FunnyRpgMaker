/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404b8640 */

undefined8 FUN_1404b8640(ulonglong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong local_res10 [3];
  
  local_res10[0] = 0;
  iVar2 = FUN_1404b85b0(local_res10);
  uVar1 = local_res10[0];
  if (iVar2 == 0) {
    local_res10[0] = local_res10[0] | 0x1f;
    *param_1 = uVar1;
    iVar2 = FUN_1404b85d0(local_res10);
    if (iVar2 == 0) {
      FUN_1404b90c0();
      return 0;
    }
  }
  return 1;
}

