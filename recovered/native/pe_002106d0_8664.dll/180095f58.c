/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180095f58 */

void FUN_180095f58(uint *param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  uint uVar2;
  
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    uVar1 = *param_2;
    uVar2 = param_1[1];
    if (*param_1 <= uVar2) {
      FUN_180095faa(param_1,1);
      uVar2 = param_1[1];
    }
    param_1[1] = uVar2 + 1;
    *(undefined2 *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar2 * 2) = uVar1;
  }
  return;
}

