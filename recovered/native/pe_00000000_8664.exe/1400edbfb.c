/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400edbfb */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400edbfb(void)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 local_60;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_60 = DAT_140e8d460;
  FUN_140085d59(&local_60,4);
  cVar1 = FUN_140085d7e("Example: Long text display",&DAT_140f3093e,0);
  if (cVar1 != '\0') {
    FUN_1400811b6("imgui_demo.cpp",0x26d8,"Examples/Long text display");
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2c) < DAT_140f32360) && (FUN_140188840(&DAT_140f32360), DAT_140f32360 == -1)) {
      _DAT_140f32350 = 0;
      DAT_140f32358 = (undefined *)0x0;
      FUN_140188b50(FUN_140109a41);
      _Init_thread_footer(&DAT_140f32360);
    }
    FUN_1400abfd5("Printing unusually long amount of text.");
    FUN_1400b28c2("Test type",&DAT_140f3234c,"Single call to TextUnformatted()",0xffffffff);
    FUN_1400abfd5("Buffer contents: %d lines, %d bytes",DAT_140f32364,
                  DAT_140f32350 + -1 + (uint)(DAT_140f32350 == 0));
    local_60 = 0;
    cVar1 = FUN_1400ad187("Clear");
    if (cVar1 != '\0') {
      if (DAT_140f32358 != (undefined *)0x0) {
        _DAT_140f32350 = 0;
        FUN_140077b90();
        DAT_140f32358 = (undefined *)0x0;
      }
      DAT_140f32364 = 0;
    }
    FUN_140092bab(0,DAT_1401c86a4);
    local_60 = 0;
    cVar1 = FUN_1400ad187("Add 1000 lines");
    if (cVar1 != '\0') {
      iVar4 = 0;
      do {
        FUN_1400793b6(&DAT_140f32350,"%i The quick brown fox jumps over the lazy dog\n",
                      DAT_140f32364 + iVar4);
        iVar4 = iVar4 + 1;
      } while (iVar4 != 1000);
      DAT_140f32364 = DAT_140f32364 + 1000;
    }
    local_60 = 0;
    FUN_14008a029("Log",&local_60,0,0);
    if (DAT_140f3234c == 2) {
      local_60 = 0;
      FUN_14007ae77(0xe);
      if (0 < DAT_140f32364) {
        iVar4 = 0;
        do {
          FUN_1400abfd5("%i The quick brown fox jumps over the lazy dog",iVar4);
          iVar4 = iVar4 + 1;
        } while (iVar4 < DAT_140f32364);
      }
      FUN_14007af87(1);
    }
    else if (DAT_140f3234c == 1) {
      local_60 = 0;
      FUN_14007ae77(0xe);
      FUN_1400796ae(&local_60);
      FUN_140079772(&local_60,DAT_140f32364,DAT_1401c86a4);
      while (cVar1 = FUN_140079cee(&local_60), cVar1 != '\0') {
        for (iVar4 = (int)local_60; iVar4 < local_60._4_4_; iVar4 = iVar4 + 1) {
          FUN_1400abfd5("%i The quick brown fox jumps over the lazy dog",iVar4);
        }
      }
      FUN_14007af87(1);
      thunk_FUN_1400796ce(&local_60);
    }
    else if (DAT_140f3234c == 0) {
      puVar3 = DAT_140f32358 + (longlong)DAT_140f32350 + -1;
      puVar2 = DAT_140f32358;
      if (DAT_140f32358 == (undefined *)0x0) {
        puVar3 = &DAT_140f2a918;
        puVar2 = &DAT_140f2a918;
      }
      FUN_1400abfca(puVar2,puVar3);
    }
    FUN_14008a651();
  }
  FUN_140088c18();
  return;
}

