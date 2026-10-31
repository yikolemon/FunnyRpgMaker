/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019ff54 */

void FUN_18019ff54(void)

{
  HMODULE hInstance;
  
  hInstance = GetModuleHandleW((LPCWSTR)0x0);
  UnregisterClassW(L"ImGui Platform",hInstance);
  FUN_18011e650();
  return;
}

