/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180296544 */

void FUN_180296544(undefined2 *param_1)

{
  ulonglong uVar1;
  uint local_18 [4];
  
  local_18[0] = 0;
  uVar1 = FUN_1802962e0(local_18);
  if (uVar1 < 5) {
    if (0xffff < local_18[0]) {
      local_18[0] = 0xfffd;
    }
    if (param_1 != (undefined2 *)0x0) {
      *param_1 = (short)local_18[0];
    }
  }
  return;
}

