/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140050b1a */

undefined2 FUN_140050b1a(longlong param_1,uint param_2)

{
  undefined2 uVar1;
  
  uVar1 = 0;
  if (param_2 <= *(uint *)(param_1 + 0x18)) {
    uVar1 = *(undefined2 *)(*(longlong *)(param_1 + 0x10) + (ulonglong)param_2 * 2);
  }
  return uVar1;
}

