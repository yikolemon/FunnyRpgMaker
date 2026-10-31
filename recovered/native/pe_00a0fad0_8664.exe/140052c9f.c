/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140052c9f */

undefined8 * FUN_140052c9f(undefined8 *param_1)

{
  LPWSTR lpCmdLine;
  LPWSTR *hMem;
  uint uVar1;
  undefined1 local_58 [36];
  int local_34;
  undefined8 *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_30 = param_1;
  lpCmdLine = GetCommandLineW();
  hMem = CommandLineToArgvW(lpCmdLine,&local_34);
  for (uVar1 = 0; (int)uVar1 < local_34; uVar1 = uVar1 + 1) {
    FUN_14000f628(local_58,hMem[uVar1]);
    FUN_1400436a6(local_30,local_58);
    FUN_140005242(local_58);
  }
  LocalFree(hMem);
  return local_30;
}

