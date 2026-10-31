/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00402680 */

undefined4 __thiscall FUN_00402680(void *this,uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 ^ *param_1 | *(uint *)((int)this + 4) ^ *(uint *)(param_1[1] + 4);
  return CONCAT31((int3)(uVar1 >> 8),uVar1 == 0);
}

