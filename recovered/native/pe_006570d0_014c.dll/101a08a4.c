/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101a08a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a08a4(void)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined1 auStack_60 [4];
  int local_5c;
  undefined8 local_58;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_60;
  local_18 = 0xffffffff;
  local_1c = &LAB_101bcd80;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  local_58 = DAT_10302760;
  FUN_10107cf6(&local_58,4);
  cVar1 = FUN_10107d2b("Example: Long text display",&DAT_103a33e6,0);
  if (cVar1 != '\0') {
    FUN_101032c6("imgui_demo.cpp",0x26d8,"Examples/Long text display");
    if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x18) < DAT_103a4c48) &&
       (FUN_1022c0d0(&DAT_103a4c48), DAT_103a4c48 == -1)) {
      _DAT_103a4c40 = 0;
      DAT_103a4c3c = 0;
      DAT_103a4c44 = (undefined *)0x0;
      local_18 = 0xffffffff;
      FUN_1022c3a0(&LAB_101ba99c);
      FUN_1022c180(&DAT_103a4c48);
    }
    FUN_1012d08c("Printing unusually long amount of text.");
    FUN_10133e42("Test type",&DAT_103a4c38,"Single call to TextUnformatted()",0xffffffff);
    FUN_1012d08c("Buffer contents: %d lines, %d bytes",DAT_103a4c4c,
                 DAT_103a4c3c + -1 + (uint)(DAT_103a4c3c == 0));
    local_58 = 0;
    cVar1 = FUN_1012e1b7("Clear",&local_58);
    if (cVar1 != '\0') {
      if (DAT_103a4c44 != (undefined *)0x0) {
        _DAT_103a4c40 = 0;
        DAT_103a4c3c = 0;
        FUN_100fa2cb(DAT_103a4c44);
        DAT_103a4c44 = (undefined *)0x0;
      }
      DAT_103a4c4c = 0;
    }
    FUN_10114a0e(0,0xbf800000);
    local_58 = 0;
    cVar1 = FUN_1012e1b7("Add 1000 lines",&local_58);
    if (cVar1 != '\0') {
      iVar4 = 0;
      do {
        FUN_100fb9a2(&DAT_103a4c3c,"%i The quick brown fox jumps over the lazy dog\n",
                     DAT_103a4c4c + iVar4);
        iVar4 = iVar4 + 1;
      } while (iVar4 != 1000);
      DAT_103a4c4c = DAT_103a4c4c + 1000;
    }
    local_58 = 0;
    FUN_1010c081("Log",&local_58,0,0);
    if (DAT_103a4c38 == 2) {
      local_58 = 0;
      FUN_100fd3bc(0xe,&local_58);
      if (0 < DAT_103a4c4c) {
        iVar4 = 0;
        do {
          FUN_1012d08c("%i The quick brown fox jumps over the lazy dog",iVar4);
          iVar4 = iVar4 + 1;
        } while (iVar4 < DAT_103a4c4c);
      }
      FUN_100fd4c4(1);
    }
    else if (DAT_103a4c38 == 1) {
      local_58 = 0;
      FUN_100fd3bc(0xe,&local_58);
      FUN_100fbc78();
      local_18 = 1;
      FUN_100fbd22(DAT_103a4c4c,0xbf800000);
      while (cVar1 = FUN_100fc2ca(), cVar1 != '\0') {
        iVar4 = (int)local_58;
        while (iVar4 < local_58._4_4_) {
          local_5c = iVar4;
          FUN_1012d08c("%i The quick brown fox jumps over the lazy dog",iVar4);
          iVar4 = local_5c + 1;
        }
      }
      FUN_100fd4c4(1);
      local_18 = 0xffffffff;
      thunk_FUN_100fbc90();
    }
    else if (DAT_103a4c38 == 0) {
      puVar3 = DAT_103a4c44 + DAT_103a4c3c + -1;
      puVar2 = DAT_103a4c44;
      if (DAT_103a4c44 == (undefined *)0x0) {
        puVar3 = &DAT_1039d750;
        puVar2 = &DAT_1039d750;
      }
      FUN_1012d079(puVar2,puVar3);
    }
    FUN_1010c644();
  }
  FUN_1010ad44();
  *unaff_FS_OFFSET = local_20;
  return;
}

