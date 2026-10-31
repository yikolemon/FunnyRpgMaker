/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001f1f8 */

void __thiscall FUN_1001f1f8(uint *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    uVar1 = *param_2;
    uVar2 = param_1[1];
    if (*param_1 <= uVar2) {
      FUN_1001f242(1);
      uVar2 = param_1[1];
    }
    param_1[1] = uVar2 + 1;
    *(undefined1 *)(param_1[2] + uVar2) = uVar1;
  }
  return;
}

