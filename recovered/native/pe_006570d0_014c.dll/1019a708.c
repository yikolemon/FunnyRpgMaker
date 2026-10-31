/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019a708 */

bool FUN_1019a708(void)

{
  int iVar1;
  FARPROC pFVar2;
  FARPROC pFVar3;
  int *unaff_FS_OFFSET;
  bool bVar4;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_20;
  local_14 = 0xffffffff;
  local_18 = &LAB_1019b330;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  bVar4 = false;
  iVar1 = FUN_1019a2b9();
  if (iVar1 != 0) {
    if (*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x18) < DAT_103a33b0) {
      FUN_1022c0d0(&DAT_103a33b0);
      if (DAT_103a33b0 == -1) {
        local_14 = 0;
        DAT_103a33ac = GetModuleHandleA("user32.dll");
        local_14 = 0xffffffff;
        FUN_1022c180(&DAT_103a33b0);
      }
    }
    pFVar2 = GetProcAddress(DAT_103a33ac,"GetThreadDpiAwarenessContext");
    pFVar3 = GetProcAddress(DAT_103a33ac,"AreDpiAwarenessContextsEqual");
    if (pFVar3 == (FARPROC)0x0 || pFVar2 == (FARPROC)0x0) {
      bVar4 = false;
    }
    else {
      iVar1 = (*pFVar2)();
      iVar1 = (*pFVar3)(iVar1,0xfffffffc);
      bVar4 = iVar1 != 0;
    }
  }
  *unaff_FS_OFFSET = local_1c;
  return bVar4;
}

