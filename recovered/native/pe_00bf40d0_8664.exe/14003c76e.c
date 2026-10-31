/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003c76e */

void FUN_14003c76e(longlong param_1,uint *param_2)

{
  uint uVar1;
  
  if (*param_2 < (uint)*(ushort *)(param_1 + 0x298)) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x2a0) + (ulonglong)*param_2 * 4);
  }
  else {
    if (*(char *)(param_1 + 0x2c6) != '\0') {
      *(undefined4 *)(param_1 + 0x20) = 0x86;
      return;
    }
    uVar1 = 0;
  }
  *param_2 = uVar1;
  return;
}

