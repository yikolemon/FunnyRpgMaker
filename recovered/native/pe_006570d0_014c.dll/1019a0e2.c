/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019a0e2 */

void FUN_1019a0e2(void)

{
  int iVar1;
  FARPROC pFVar2;
  int *unaff_FS_OFFSET;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_20;
  local_14 = 0xffffffff;
  local_18 = &LAB_1019b310;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  iVar1 = FUN_10198894();
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x28) = 1;
  }
  iVar1 = FUN_1019a2b9();
  if (iVar1 != 0) {
    if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x18) < DAT_103a3394) &&
       (FUN_1022c0d0(&DAT_103a3394), DAT_103a3394 == -1)) {
      local_14 = 0;
      DAT_103a3390 = LoadLibraryA("user32.dll");
      local_14 = 0xffffffff;
      FUN_1022c180(&DAT_103a3394);
    }
    pFVar2 = GetProcAddress(DAT_103a3390,"SetThreadDpiAwarenessContext");
    if (pFVar2 != (FARPROC)0x0) {
      (*pFVar2)(0xfffffffc);
      *unaff_FS_OFFSET = local_1c;
      return;
    }
  }
  iVar1 = FUN_1019a2b9();
  if (iVar1 != 0) {
    if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x18) < DAT_103a339c) &&
       (FUN_1022c0d0(&DAT_103a339c), DAT_103a339c == -1)) {
      local_14 = 1;
      DAT_103a3398 = LoadLibraryA("shcore.dll");
      local_14 = 0xffffffff;
      FUN_1022c180(&DAT_103a339c);
    }
    pFVar2 = GetProcAddress(DAT_103a3398,"SetProcessDpiAwareness");
    if (pFVar2 != (FARPROC)0x0) {
      (*pFVar2)(2);
      *unaff_FS_OFFSET = local_1c;
      return;
    }
  }
  SetProcessDPIAware();
  *unaff_FS_OFFSET = local_1c;
  return;
}

