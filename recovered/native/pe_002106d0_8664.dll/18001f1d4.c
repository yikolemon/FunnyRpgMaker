/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001f1d4 */

void FUN_18001f1d4(uint *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    uVar1 = *param_2;
    uVar2 = param_1[1];
    if (*param_1 <= uVar2) {
      FUN_18001f226(param_1,1);
      uVar2 = param_1[1];
    }
    param_1[1] = uVar2 + 1;
    *(undefined1 *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar2) = uVar1;
  }
  return;
}

