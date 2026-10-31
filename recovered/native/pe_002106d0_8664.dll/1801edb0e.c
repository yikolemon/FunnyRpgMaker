/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801edb0e */

void FUN_1801edb0e(longlong param_1,uint *param_2)

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

