/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019a612 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1019a612(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  WNDCLASSEXW local_3c;
  
  local_3c.cbSize = 0x30;
  local_3c.style = param_1 << 5 | 3;
  local_3c.lpfnWndProc = (WNDPROC)&LAB_1019a823;
  local_3c.cbClsExtra = 0;
  local_3c.cbWndExtra = 0;
  local_3c.hInstance = GetModuleHandleW((LPCWSTR)0x0);
  local_3c.hIcon = _DAT_10301c20;
  local_3c.hCursor = _UNK_10301c24;
  local_3c.hbrBackground = _UNK_10301c28;
  local_3c.lpszMenuName = _UNK_10301c2c;
  local_3c.lpszClassName = L"ImGui Platform";
  local_3c.hIconSm = (HICON)0x0;
  RegisterClassExW(&local_3c);
  FUN_101989df();
  iVar1 = FUN_1010331e();
  *(undefined1 **)(iVar1 + 0x38) = &LAB_1019a904;
  *(undefined1 **)(iVar1 + 0x3c) = &LAB_1019a9ed;
  *(undefined1 **)(iVar1 + 0x40) = &LAB_1019aa4a;
  *(undefined1 **)(iVar1 + 0x44) = &LAB_1019aab2;
  *(undefined1 **)(iVar1 + 0x48) = &LAB_1019ab32;
  *(undefined1 **)(iVar1 + 0x4c) = &LAB_1019ab8d;
  *(undefined1 **)(iVar1 + 0x50) = &LAB_1019ac1c;
  *(undefined1 **)(iVar1 + 0x58) = &LAB_1019ac79;
  *(undefined1 **)(iVar1 + 0x5c) = &LAB_1019ac9b;
  *(undefined1 **)(iVar1 + 0x60) = &LAB_1019acb0;
  *(undefined1 **)(iVar1 + 100) = &LAB_1019acc5;
  *(undefined1 **)(iVar1 + 0x68) = &LAB_1019adca;
  *(undefined1 **)(iVar1 + 0x6c) = &LAB_1019ae31;
  *(undefined1 **)(iVar1 + 0x78) = &LAB_1019af5e;
  *(code **)(iVar1 + 0x7c) = FUN_10041162;
  iVar1 = FUN_1010ad36();
  puVar2 = (undefined4 *)FUN_10198894();
  puVar3 = (undefined4 *)FUN_100fa1fa(0x14);
  puVar3[1] = 0;
  *puVar3 = 0;
  *(undefined1 *)(puVar3 + 2) = 0;
  puVar3[4] = 0;
  puVar3[3] = 0;
  *puVar3 = *puVar2;
  *(undefined1 *)(puVar3 + 2) = 0;
  *(undefined4 **)(iVar1 + 0x44) = puVar3;
  return;
}

