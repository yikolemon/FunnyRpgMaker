/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10287580 */

undefined4 FUN_10287580(uint *param_1)

{
  int iVar1;
  uint local_c;
  uint local_8;
  
  local_c = 0;
  local_8 = 0;
  iVar1 = FUN_10287500(&local_c);
  if (iVar1 == 0) {
    *param_1 = local_c;
    local_c = local_c | 0x1f;
    param_1[1] = local_8;
    iVar1 = FUN_10287520(&local_c);
    if (iVar1 == 0) {
      FUN_10287cc0();
      return 0;
    }
  }
  return 1;
}

