/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a7f77 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801a7f77(void)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 local_60;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_60 = DAT_1803290c0;
  FUN_18010ca41(&local_60,4);
  cVar1 = FUN_18010ca66("Example: Long text display",&DAT_18041f1ee,0);
  if (cVar1 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x26d8,"Examples/Long text display");
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2c) < DAT_180420c10) && (FUN_18023d500(&DAT_180420c10), DAT_180420c10 == -1)) {
      _DAT_180420c00 = 0;
      DAT_180420c08 = (undefined *)0x0;
      FUN_18023d710(FUN_1801c3d3d);
      _Init_thread_footer(&DAT_180420c10);
    }
    FUN_1801330a5("Printing unusually long amount of text.");
    FUN_180139992("Test type",&DAT_180420bfc,"Single call to TextUnformatted()",0xffffffff);
    FUN_1801330a5("Buffer contents: %d lines, %d bytes",DAT_180420c14,
                  DAT_180420c00 + -1 + (uint)(DAT_180420c00 == 0));
    local_60 = 0;
    cVar1 = FUN_180134257("Clear");
    if (cVar1 != '\0') {
      if (DAT_180420c08 != (undefined *)0x0) {
        _DAT_180420c00 = 0;
        FUN_1800fe8d4();
        DAT_180420c08 = (undefined *)0x0;
      }
      DAT_180420c14 = 0;
    }
    FUN_180119893(0,DAT_1802bb8e0);
    local_60 = 0;
    cVar1 = FUN_180134257("Add 1000 lines");
    if (cVar1 != '\0') {
      iVar4 = 0;
      do {
        FUN_1801000fa(&DAT_180420c00,"%i The quick brown fox jumps over the lazy dog\n",
                      DAT_180420c14 + iVar4);
        iVar4 = iVar4 + 1;
      } while (iVar4 != 1000);
      DAT_180420c14 = DAT_180420c14 + 1000;
    }
    local_60 = 0;
    FUN_180110d11("Log",&local_60,0,0);
    if (DAT_180420bfc == 2) {
      local_60 = 0;
      FUN_180101bbb(0xe);
      if (0 < DAT_180420c14) {
        iVar4 = 0;
        do {
          FUN_1801330a5("%i The quick brown fox jumps over the lazy dog",iVar4);
          iVar4 = iVar4 + 1;
        } while (iVar4 < DAT_180420c14);
      }
      FUN_180101ccb(1);
    }
    else if (DAT_180420bfc == 1) {
      local_60 = 0;
      FUN_180101bbb(0xe);
      FUN_1801003f2(&local_60);
      FUN_1801004b6(&local_60,DAT_180420c14,DAT_1802bb8e0);
      while (cVar1 = FUN_180100a32(&local_60), cVar1 != '\0') {
        for (iVar4 = (int)local_60; iVar4 < local_60._4_4_; iVar4 = iVar4 + 1) {
          FUN_1801330a5("%i The quick brown fox jumps over the lazy dog",iVar4);
        }
      }
      FUN_180101ccb(1);
      thunk_FUN_180100412(&local_60);
    }
    else if (DAT_180420bfc == 0) {
      puVar3 = DAT_180420c08 + (longlong)DAT_180420c00 + -1;
      puVar2 = DAT_180420c08;
      if (DAT_180420c08 == (undefined *)0x0) {
        puVar3 = &DAT_180419168;
        puVar2 = &DAT_180419168;
      }
      FUN_18013309a(puVar2,puVar3);
    }
    FUN_180111339();
  }
  FUN_18010f900();
  return;
}

