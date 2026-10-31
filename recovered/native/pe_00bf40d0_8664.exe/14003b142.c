/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003b142 */

void FUN_14003b142(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_2;
  if (-1 < (int)uVar1) {
    uVar2 = 0xffff;
    if (uVar1 < 0xffff) {
      uVar2 = uVar1;
    }
    *(uint *)(param_1 + 0x1a4) = uVar2;
    return;
  }
  *(undefined4 *)(param_1 + 0x20) = 0x84;
  return;
}

