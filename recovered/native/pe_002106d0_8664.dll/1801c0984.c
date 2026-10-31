/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c0984 */

void FUN_1801c0984(uint *param_1)

{
  char cVar1;
  
  if ((*param_1 & 0x380) == 0) {
    *param_1 = *param_1 | 0x80;
  }
  cVar1 = thunk_FUN_18013698f("ImGuiTabBarFlags_FittingPolicyMixed",param_1,0x80);
  if (cVar1 != '\0') {
    *(byte *)((longlong)param_1 + 1) = *(byte *)((longlong)param_1 + 1) & 0xfc;
  }
  cVar1 = thunk_FUN_18013698f("ImGuiTabBarFlags_FittingPolicyShrink",param_1,0x100);
  if (cVar1 != '\0') {
    *param_1 = *param_1 & 0xfffffd7f;
  }
  cVar1 = thunk_FUN_18013698f("ImGuiTabBarFlags_FittingPolicyScroll",param_1,0x200);
  if (cVar1 != '\0') {
    *param_1 = *param_1 & 0xfffffe7f;
  }
  return;
}

