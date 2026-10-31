/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101986a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_101986a8(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  BOOL BVar4;
  undefined4 *puVar5;
  HANDLE hData;
  HMODULE pHVar6;
  FARPROC pFVar7;
  LARGE_INTEGER local_28;
  LARGE_INTEGER local_20 [2];
  
  iVar3 = FUN_1010330d();
  FUN_101145d8("1.92.9 WIP",_DAT_10301bd0,_UNK_10301bd4,_UNK_10301bd8,_UNK_10301bdc,0x14,2);
  BVar4 = QueryPerformanceFrequency(local_20);
  if ((BVar4 != 0) && (BVar4 = QueryPerformanceCounter(&local_28), BVar4 != 0)) {
    puVar5 = (undefined4 *)FUN_100fa1fa(0x48);
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
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    puVar5[0xf] = 0;
    *(undefined8 *)(puVar5 + 0x10) = 0;
    *(undefined4 **)(iVar3 + 0x80) = puVar5;
    *(char **)(iVar3 + 0x78) = "imgui_impl_win32";
    *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) | 0x3806;
    *puVar5 = param_1;
    *(LARGE_INTEGER *)(puVar5 + 6) = local_20[0];
    *(LARGE_INTEGER *)(puVar5 + 4) = local_28;
    puVar5[8] = 0xb;
    FUN_1019a0b1();
    FUN_101989df();
    iVar3 = FUN_1010ad36();
    uVar1 = *puVar5;
    *(undefined4 *)(iVar3 + 0x50) = uVar1;
    *(undefined4 *)(iVar3 + 0x4c) = uVar1;
    hData = (HANDLE)FUN_100fbf7e();
    SetPropA((HWND)*puVar5,"IMGUI_CONTEXT",hData);
    FUN_1019a612();
    pHVar6 = GetModuleHandleA("user32.dll");
    if (pHVar6 != (HMODULE)0x0) {
      pFVar7 = GetProcAddress(pHVar6,"AdjustWindowRectExForDpi");
      puVar5[0xb] = pFVar7;
    }
    uVar2 = FUN_1019a708();
    *(undefined1 *)((int)puVar5 + 0x29) = uVar2;
    *(undefined1 *)((int)puVar5 + 0x31) = 1;
    iVar3 = -0x14;
    do {
      pHVar6 = LoadLibraryA(*(LPCSTR *)(&UNK_10301bc4 + iVar3));
      if (pHVar6 != (HMODULE)0x0) {
        puVar5[0xd] = pHVar6;
        pFVar7 = GetProcAddress(pHVar6,"XInputGetCapabilities");
        puVar5[0xe] = pFVar7;
        pFVar7 = GetProcAddress(pHVar6,"XInputGetState");
        puVar5[0xf] = pFVar7;
        return 1;
      }
      iVar3 = iVar3 + 4;
    } while (iVar3 != 0);
    return 1;
  }
  return 0;
}

