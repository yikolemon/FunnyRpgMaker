/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d6064 */

void FUN_1400d6064(void)

{
  HMODULE hInstance;
  
  hInstance = GetModuleHandleW((LPCWSTR)0x0);
  UnregisterClassW(L"ImGui Platform",hInstance);
  FUN_14009790c();
  return;
}

