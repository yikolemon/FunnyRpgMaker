/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140106688 */

void FUN_140106688(uint *param_1)

{
  char cVar1;
  
  if ((*param_1 & 0x380) == 0) {
    *param_1 = *param_1 | 0x80;
  }
  cVar1 = thunk_FUN_1400af8bf("ImGuiTabBarFlags_FittingPolicyMixed",param_1,0x80);
  if (cVar1 != '\0') {
    *(byte *)((longlong)param_1 + 1) = *(byte *)((longlong)param_1 + 1) & 0xfc;
  }
  cVar1 = thunk_FUN_1400af8bf("ImGuiTabBarFlags_FittingPolicyShrink",param_1,0x100);
  if (cVar1 != '\0') {
    *param_1 = *param_1 & 0xfffffd7f;
  }
  cVar1 = thunk_FUN_1400af8bf("ImGuiTabBarFlags_FittingPolicyScroll",param_1,0x200);
  if (cVar1 != '\0') {
    *param_1 = *param_1 & 0xfffffe7f;
  }
  return;
}

