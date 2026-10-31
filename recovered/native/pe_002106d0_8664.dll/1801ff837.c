/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ff837 */

void FUN_1801ff837(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(param_2 + 0x68))(param_2,0,0,0);
  *(undefined4 *)(param_1 + 0x2f0) = uVar1;
  return;
}

