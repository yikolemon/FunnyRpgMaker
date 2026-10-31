/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d5fcd */

void FUN_1400d5fcd(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)FUN_1400d6041();
  lVar2 = FUN_140081200();
  uVar3 = FUN_140081211();
  SetPropA((HWND)*puVar1,"IMGUI_CONTEXT",(HANDLE)0x0);
  FUN_1400d6064();
  if ((HMODULE)puVar1[9] != (HMODULE)0x0) {
    FreeLibrary((HMODULE)puVar1[9]);
  }
  *(undefined8 *)(lVar2 + 0x90) = 0;
  *(undefined8 *)(lVar2 + 0xa0) = 0;
  *(uint *)(lVar2 + 4) = *(uint *)(lVar2 + 4) & 0xffffc7f8;
  FUN_140096fc2(uVar3);
  FUN_1400bf498(puVar1);
  return;
}

