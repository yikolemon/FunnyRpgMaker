/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102792e0 */

undefined4 FUN_102792e0(ulonglong param_1)

{
  uint uVar1;
  undefined4 local_c;
  undefined4 uStack_8;
  
  uVar1 = (uint)(param_1 >> 0x34) & 0x7ff;
  local_c = (int)param_1;
  if (uVar1 == 0x7ff) {
    if (local_c == 0 && (param_1 & 0xfffff00000000) == 0) {
      return 1;
    }
    return 2;
  }
  if (uVar1 != 0) {
    return 0xffffffff;
  }
  if (local_c == 0 && (param_1 & 0x7fffffff00000000) == 0) {
    return 0;
  }
  return 0xfffffffe;
}

