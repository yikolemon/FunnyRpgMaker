/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f0235 */

void FUN_1800f0235(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_180003216();
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_1800b5178(param_1 + 0x28,
                (*(longlong *)(param_2 + 0x30) - *(longlong *)(param_2 + 0x28) >> 3) *
                -0x3333333333333333,param_2 + 0x28,param_2 + 0x30,param_1 + 0x28,param_1,uVar1);
  return;
}

