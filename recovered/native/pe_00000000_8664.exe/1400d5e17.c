/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d5e17 */

undefined8 FUN_1400d5e17(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  BOOL BVar3;
  longlong lVar4;
  undefined8 *puVar5;
  HANDLE hData;
  HMODULE pHVar6;
  FARPROC pFVar7;
  LARGE_INTEGER local_38;
  LARGE_INTEGER local_30;
  
  lVar4 = FUN_140081200();
  FUN_140092733("1.92.9 WIP",0xc18,0x54c,8,0x10,0x14,2);
  BVar3 = QueryPerformanceFrequency(&local_30);
  if ((BVar3 != 0) && (BVar3 = QueryPerformanceCounter(&local_38), BVar3 != 0)) {
    puVar5 = (undefined8 *)FUN_140077ab4(0x68);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    *(undefined8 **)(lVar4 + 0xa0) = puVar5;
    *(char **)(lVar4 + 0x90) = "imgui_impl_win32";
    *(uint *)(lVar4 + 4) = *(uint *)(lVar4 + 4) | 0x3806;
    *puVar5 = param_1;
    *(LARGE_INTEGER *)(puVar5 + 4) = local_30;
    *(LARGE_INTEGER *)(puVar5 + 3) = local_38;
    *(undefined4 *)(puVar5 + 5) = 0xb;
    FUN_1400d76aa(lVar4);
    FUN_1400d619d();
    lVar4 = FUN_140088c06();
    uVar1 = *puVar5;
    *(undefined8 *)(lVar4 + 0x68) = uVar1;
    *(undefined8 *)(lVar4 + 0x60) = uVar1;
    hData = (HANDLE)FUN_1400799b5();
    SetPropA((HWND)*puVar5,"IMGUI_CONTEXT",hData);
    FUN_1400d7c0d(param_2);
    pHVar6 = GetModuleHandleA("user32.dll");
    if (pHVar6 != (HMODULE)0x0) {
      pFVar7 = GetProcAddress(pHVar6,"AdjustWindowRectExForDpi");
      puVar5[7] = pFVar7;
    }
    uVar2 = FUN_1400d7d90();
    *(undefined1 *)((longlong)puVar5 + 0x31) = uVar2;
    *(undefined1 *)((longlong)puVar5 + 0x41) = 1;
    lVar4 = 0;
    do {
      pHVar6 = LoadLibraryA(*(LPCSTR *)((longlong)&PTR_s_xinput1_4_dll_140e82300 + lVar4));
      if (pHVar6 != (HMODULE)0x0) {
        puVar5[9] = pHVar6;
        pFVar7 = GetProcAddress(pHVar6,"XInputGetCapabilities");
        puVar5[10] = pFVar7;
        pFVar7 = GetProcAddress(pHVar6,"XInputGetState");
        puVar5[0xb] = pFVar7;
        return 1;
      }
      lVar4 = lVar4 + 8;
    } while (lVar4 != 0x28);
    return 1;
  }
  return 0;
}

