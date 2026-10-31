/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013e8b9 */

void FUN_14013e8b9(longlong param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*param_2;
  if (*param_2 < (uint)*(ushort *)(param_1 + 0xb0)) {
    if ((*(byte *)(param_1 + 0x1f0) & 1) == 0) {
      uVar1 = (**(code **)(param_1 + 0x2d8))
                        (param_1,*(undefined4 *)(*(longlong *)(param_1 + 0xc0) + uVar2 * 8),
                         *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 4 + uVar2 * 8));
    }
    else {
      uVar1 = (**(code **)(param_1 + 0x2e0))
                        (param_1,*(undefined4 *)(*(longlong *)(param_1 + 0xb8) + uVar2 * 8),
                         *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + 4 + uVar2 * 8));
    }
  }
  else {
    uVar1 = 0;
    if (*(char *)(param_1 + 0x2c6) != '\0') {
      *(undefined4 *)(param_1 + 0x20) = 0x86;
    }
  }
  *param_2 = uVar1;
  return;
}

