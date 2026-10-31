/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d7f91 */

void FUN_1400d7f91(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  HMODULE hInstance;
  HWND pHVar3;
  HANDLE hData;
  float fVar4;
  float fVar5;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  puVar1 = (undefined8 *)FUN_140077ab4(0x20);
  *(undefined8 *)((longlong)puVar1 + 0x14) = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined8 **)(param_1 + 0x50) = puVar1;
  FUN_1400d8753(*(undefined4 *)(param_1 + 4),(longlong)puVar1 + 0x14,puVar1 + 3);
  uVar2 = FUN_1400d8784(*(undefined8 *)(param_1 + 0x38));
  puVar1[1] = uVar2;
  fVar4 = (float)*(undefined8 *)(param_1 + 8);
  fVar5 = (float)((ulonglong)*(undefined8 *)(param_1 + 8) >> 0x20);
  local_38 = (int)fVar4;
  iStack_34 = (int)fVar5;
  iStack_30 = (int)((float)*(undefined8 *)(param_1 + 0x10) + fVar4);
  iStack_2c = (int)((float)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) + fVar5);
  FUN_1400d8791(param_1,&local_38,*(undefined4 *)((longlong)puVar1 + 0x14),
                *(undefined4 *)(puVar1 + 3));
  hInstance = GetModuleHandleW((LPCWSTR)0x0);
  pHVar3 = CreateWindowExW(*(DWORD *)(puVar1 + 3),L"ImGui Platform",L"Untitled",
                           *(DWORD *)((longlong)puVar1 + 0x14),local_38,iStack_34,
                           iStack_30 - local_38,iStack_2c - iStack_34,(HWND)puVar1[1],(HMENU)0x0,
                           hInstance,(LPVOID)0x0);
  *puVar1 = pHVar3;
  *(undefined1 *)(puVar1 + 2) = 1;
  *(undefined1 *)(param_1 + 0x72) = 0;
  uVar2 = *puVar1;
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  FUN_1400d7b12(*puVar1);
  hData = (HANDLE)FUN_1400799b5();
  SetPropA((HWND)*puVar1,"IMGUI_CONTEXT",hData);
  return;
}

