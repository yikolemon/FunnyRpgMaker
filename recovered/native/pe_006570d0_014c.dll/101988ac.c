/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101988ac */

void FUN_101988ac(void)

{
  HMODULE hInstance;
  
  hInstance = GetModuleHandleW((LPCWSTR)0x0);
  UnregisterClassW(L"ImGui Platform",hInstance);
  FUN_10119594();
  return;
}

