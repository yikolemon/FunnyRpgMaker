/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b7751 */

void __fastcall FUN_101b7751(uint *param_1)

{
  char cVar1;
  
  if ((*param_1 & 0x380) == 0) {
    *param_1 = *param_1 | 0x80;
  }
  cVar1 = thunk_FUN_10130d81("ImGuiTabBarFlags_FittingPolicyMixed",param_1,0x80);
  if (cVar1 != '\0') {
    *(byte *)((int)param_1 + 1) = *(byte *)((int)param_1 + 1) & 0xfc;
  }
  cVar1 = thunk_FUN_10130d81("ImGuiTabBarFlags_FittingPolicyShrink",param_1,0x100);
  if (cVar1 != '\0') {
    *param_1 = *param_1 & 0xfffffd7f;
  }
  cVar1 = thunk_FUN_10130d81("ImGuiTabBarFlags_FittingPolicyScroll",param_1,0x200);
  if (cVar1 != '\0') {
    *param_1 = *param_1 & 0xfffffe7f;
  }
  return;
}

