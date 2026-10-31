/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cb681 */

uint FUN_1801cb681(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x88) != 0)) {
    uVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x10) + 0x18))();
    uVar2 = 0;
    if (uVar1 < *(uint *)(param_1 + 0x10)) {
      uVar2 = uVar1;
    }
  }
  return uVar2;
}

