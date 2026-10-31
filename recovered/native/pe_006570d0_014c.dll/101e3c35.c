/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e3c35 */

void __fastcall FUN_101e3c35(int param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  if (uVar1 < *(ushort *)(param_1 + 0x60)) {
    if ((*(byte *)(param_1 + 0x148) & 1) == 0) {
      uVar1 = (**(code **)(param_1 + 0x1dc))
                        (param_1,*(undefined4 *)(*(int *)(param_1 + 0x68) + uVar1 * 8),
                         *(undefined4 *)(*(int *)(param_1 + 0x68) + 4 + uVar1 * 8));
    }
    else {
      uVar1 = (**(code **)(param_1 + 0x1e0))
                        (param_1,*(undefined4 *)(*(int *)(param_1 + 100) + uVar1 * 8),
                         *(undefined4 *)(*(int *)(param_1 + 100) + 4 + uVar1 * 8));
    }
  }
  else {
    uVar1 = 0;
    if (*(char *)(param_1 + 0x1ce) != '\0') {
      *(undefined4 *)(param_1 + 0x10) = 0x86;
    }
  }
  *param_2 = uVar1;
  return;
}

