/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019febd */

void FUN_18019febd(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)FUN_18019ff31();
  lVar2 = FUN_180107ee8();
  uVar3 = FUN_180107ef9();
  SetPropA((HWND)*puVar1,"IMGUI_CONTEXT",(HANDLE)0x0);
  FUN_18019ff54();
  if ((HMODULE)puVar1[9] != (HMODULE)0x0) {
    FreeLibrary((HMODULE)puVar1[9]);
  }
  *(undefined8 *)(lVar2 + 0x90) = 0;
  *(undefined8 *)(lVar2 + 0xa0) = 0;
  *(uint *)(lVar2 + 4) = *(uint *)(lVar2 + 4) & 0xffffc7f8;
  FUN_18011dd06(uVar3);
  FUN_180146568(puVar1);
  return;
}

