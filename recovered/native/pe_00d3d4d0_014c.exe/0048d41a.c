/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048d41a */

void __cdecl FUN_0048d41a(undefined4 param_1)

{
  uint uVar1;
  BOOL BVar2;
  FARPROC pFVar3;
  HMODULE local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_004a7401;
  local_10 = ExceptionList;
  uVar1 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = (HMODULE)0x0;
  BVar2 = GetModuleHandleExW(0,L"mscoree.dll",&local_14);
  if (BVar2 != 0) {
    pFVar3 = GetProcAddress(local_14,"CorExitProcess");
    if (pFVar3 != (FARPROC)0x0) {
      (*(code *)PTR_guard_check_icall_00508898)(param_1,uVar1);
      (*pFVar3)();
    }
  }
  if (local_14 != (HMODULE)0x0) {
    FreeLibrary(local_14);
  }
  ExceptionList = local_10;
  return;
}

