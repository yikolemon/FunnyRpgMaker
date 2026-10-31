/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140169971 */

void FUN_140169971(longlong param_1,undefined4 *param_2,int *param_3,int *param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_14012b378(*(undefined4 *)(*(longlong *)(param_1 + 0x328) + 0x17c),0x3e80000);
  *param_2 = uVar1;
  *param_3 = *(int *)(*(longlong *)(param_1 + 0x328) + 0x180) << 0x10;
  *param_4 = *(int *)(*(longlong *)(param_1 + 0x328) + 0x184) << 0x10;
  return;
}

