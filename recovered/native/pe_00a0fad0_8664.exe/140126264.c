/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140126264 */

void FUN_140126264(undefined2 *param_1)

{
  ulonglong uVar1;
  uint local_18 [4];
  
  local_18[0] = 0;
  uVar1 = FUN_140126000(local_18);
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

