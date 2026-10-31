/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d7c0d */

void FUN_1400d7c0d(uint param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  WNDCLASSEXW local_78;
  
  local_78.cbSize = 0x50;
  local_78.style = (param_1 & 0xff) << 5 | 3;
  local_78.lpfnWndProc = FUN_1400d7e9c;
  local_78.cbClsExtra = 0;
  local_78.cbWndExtra = 0;
  local_78.hInstance = GetModuleHandleW((LPCWSTR)0x0);
  local_78.hIcon = (HICON)0x0;
  local_78.hCursor = (HCURSOR)0x0;
  local_78.hbrBackground = (HBRUSH)0x2;
  local_78.lpszMenuName = (LPCWSTR)0x0;
  local_78.lpszClassName = L"ImGui Platform";
  local_78.hIconSm = (HICON)0x0;
  RegisterClassExW(&local_78);
  FUN_1400d619d();
  lVar1 = FUN_140081211();
  *(code **)(lVar1 + 0x68) = FUN_1400d7f91;
  *(code **)(lVar1 + 0x70) = FUN_1400d80ae;
  *(code **)(lVar1 + 0x78) = FUN_1400d811b;
  *(code **)(lVar1 + 0x80) = FUN_1400d819b;
  *(code **)(lVar1 + 0x88) = FUN_1400d823f;
  *(code **)(lVar1 + 0x90) = FUN_1400d82a9;
  *(code **)(lVar1 + 0x98) = FUN_1400d8359;
  *(code **)(lVar1 + 0xa8) = FUN_1400d83c5;
  *(code **)(lVar1 + 0xb0) = FUN_1400d83ef;
  *(code **)(lVar1 + 0xb8) = FUN_1400d840a;
  *(code **)(lVar1 + 0xc0) = FUN_1400d8425;
  *(code **)(lVar1 + 200) = FUN_1400d852a;
  *(code **)(lVar1 + 0xd0) = FUN_1400d85b3;
  *(undefined1 **)(lVar1 + 0xe8) = &LAB_1400d8717;
  *(code **)(lVar1 + 0xf0) = FUN_1400151ba;
  lVar1 = FUN_140088c06();
  puVar2 = (undefined8 *)FUN_1400d6041();
  puVar3 = (undefined8 *)FUN_140077ab4(0x20);
  *(undefined8 *)((longlong)puVar3 + 0x14) = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 0;
  *puVar3 = *puVar2;
  *(undefined1 *)(puVar3 + 2) = 0;
  *(undefined8 **)(lVar1 + 0x50) = puVar3;
  return;
}

