/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10198834 */

void FUN_10198834(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_10198894();
  iVar2 = FUN_1010330d();
  FUN_1010331e();
  SetPropA((HWND)*puVar1,"IMGUI_CONTEXT",(HANDLE)0x0);
  FUN_101988ac();
  if ((HMODULE)puVar1[0xd] != (HMODULE)0x0) {
    FreeLibrary((HMODULE)puVar1[0xd]);
  }
  *(undefined4 *)(iVar2 + 0x78) = 0;
  *(undefined4 *)(iVar2 + 0x80) = 0;
  *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) & 0xffffc7f8;
  FUN_10118cec();
  FUN_10141def(puVar1);
  return;
}

