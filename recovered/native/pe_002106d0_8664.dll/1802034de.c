/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802034de */

undefined2 FUN_1802034de(longlong param_1,uint param_2)

{
  undefined2 uVar1;
  
  uVar1 = 0;
  if (param_2 <= *(uint *)(param_1 + 0x18)) {
    uVar1 = *(undefined2 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)param_2 * 2);
  }
  return uVar1;
}

