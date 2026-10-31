/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a1b43 */

void FUN_1801a1b43(uint param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  WNDCLASSEXW local_78;
  
  local_78.cbSize = 0x50;
  local_78.style = (param_1 & 0xff) << 5 | 3;
  local_78.lpfnWndProc = FUN_1801a1dd2;
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
  FUN_1801a008d();
  lVar1 = FUN_180107ef9();
  *(code **)(lVar1 + 0x68) = FUN_1801a1ec7;
  *(code **)(lVar1 + 0x70) = FUN_1801a1fe4;
  *(code **)(lVar1 + 0x78) = FUN_1801a2051;
  *(code **)(lVar1 + 0x80) = FUN_1801a20d1;
  *(code **)(lVar1 + 0x88) = FUN_1801a2175;
  *(code **)(lVar1 + 0x90) = FUN_1801a21df;
  *(code **)(lVar1 + 0x98) = FUN_1801a228f;
  *(code **)(lVar1 + 0xa8) = FUN_1801a22fb;
  *(code **)(lVar1 + 0xb0) = FUN_1801a2325;
  *(code **)(lVar1 + 0xb8) = FUN_1801a2340;
  *(code **)(lVar1 + 0xc0) = FUN_1801a235b;
  *(code **)(lVar1 + 200) = FUN_1801a2460;
  *(code **)(lVar1 + 0xd0) = FUN_1801a24e9;
  *(undefined1 **)(lVar1 + 0xe8) = &LAB_1801a264d;
  *(code **)(lVar1 + 0xf0) = FUN_18004187e;
  lVar1 = FUN_18010f8ee();
  puVar2 = (undefined8 *)FUN_18019ff31();
  puVar3 = (undefined8 *)FUN_1800fe7f8(0x20);
  *(undefined8 *)((longlong)puVar3 + 0x14) = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 0;
  *puVar3 = *puVar2;
  *(undefined1 *)(puVar3 + 2) = 0;
  *(undefined8 **)(lVar1 + 0x50) = puVar3;
  return;
}

