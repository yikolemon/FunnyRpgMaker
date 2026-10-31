/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10240000 */

void __thiscall FUN_10240000(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint *in_stack_0000001c;
  int in_stack_00000020;
  
  iVar1 = FUN_1024d780(&param_3,&stack0x00000010,0,*(undefined4 *)(param_1 + 0xc),0);
  if (iVar1 < 0) {
    *in_stack_0000001c = *in_stack_0000001c | 2;
    *param_2 = param_3;
    param_2[1] = param_4;
    return;
  }
  *(int *)(in_stack_00000020 + 0x10) = iVar1 >> 1;
  *param_2 = param_3;
  param_2[1] = param_4;
  return;
}

