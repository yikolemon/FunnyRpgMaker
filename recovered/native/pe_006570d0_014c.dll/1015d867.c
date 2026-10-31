/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1015d867 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1015d867(char *param_1)

{
  char **ppcVar1;
  char cVar2;
  char *pcVar3;
  char ****ppppcVar4;
  int iVar5;
  char *local_54;
  char ***local_50;
  undefined4 *local_4c;
  char *local_48;
  undefined4 *local_44;
  char ***local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_30;
  uint local_2c;
  char *local_28;
  char *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_54;
  local_18 = &LAB_1015f590;
  local_1c = ExceptionList;
  local_44 = *(undefined4 **)param_1;
  local_54 = param_1 + 4;
  local_14 = 0;
  ExceptionList = &local_1c;
  local_24 = param_1;
  ppcVar1 = &local_54;
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039d86c) &&
     (FUN_1022c0d0(&DAT_1039d86c), ppcVar1 = (char **)local_20, DAT_1039d86c == -1)) {
    local_14 = 5;
    FUN_10018956(&DAT_1033b8cb,1);
    FUN_1022c3a0(&LAB_1015de8e);
    local_14 = 0xffffffff;
    FUN_1022c180(&DAT_1039d86c);
    ppcVar1 = (char **)local_20;
  }
  local_20 = (undefined1 *)ppcVar1;
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039d8a0) &&
     (FUN_1022c0d0(&DAT_1039d8a0), DAT_1039d8a0 == -1)) {
    DAT_1039d870 = "\r\n";
    DAT_1039d874 = 2;
    DAT_1039d878 = &DAT_1034bcca;
    _DAT_1039d87c = 1;
    _DAT_1039d880 = "\n";
    _DAT_1039d884 = 1;
    _DAT_1039d888 = &DAT_1033cfa5;
    _DAT_1039d88c = 2;
    _DAT_1039d890 = &DAT_1033c341;
    _DAT_1039d894 = 2;
    _DAT_1039d898 = &DAT_1033cfd4;
    _DAT_1039d89c = 3;
    local_14 = 0xffffffff;
    FUN_1022c180(&DAT_1039d8a0);
  }
  do {
    local_14 = 0;
    FUN_100aaa1c(&local_40,local_24 + 4,&DAT_1039d858,&DAT_10355ece,0);
    local_14 = 3;
    ppppcVar4 = (char ****)(local_24 + 4);
    cVar2 = FUN_1001bb3a(ppppcVar4);
    if (ppppcVar4 != &local_40) {
      local_28 = (char *)CONCAT31(local_28._1_3_,cVar2);
      ppppcVar4 = &local_40;
      if (0xf < local_2c) {
        ppppcVar4 = (char ****)local_40;
      }
      FUN_100180a6(ppppcVar4,local_30);
      cVar2 = (char)local_28;
    }
    local_14 = 0xffffffff;
    FUN_10001fee();
  } while (cVar2 == '\0');
  local_40 = (char ***)0x0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0;
  local_2c = 0xf;
  local_14 = 1;
  local_48 = *(char **)(local_24 + 0x14);
  if (0xf < local_48) {
    FUN_10003cd4(local_48,(uint)local_50 & 0xff);
    local_48 = *(char **)(local_24 + 0x14);
  }
  local_30 = 0;
  pcVar3 = local_24 + 4;
  if (0xf < *(uint *)(local_24 + 0x18)) {
    pcVar3 = *(char **)(local_24 + 4);
  }
  local_48 = pcVar3 + (int)local_48;
  do {
    if (pcVar3 == local_48) {
      if ((char ****)(local_24 + 4) != &local_40) {
        ppppcVar4 = &local_40;
        if (0xf < local_2c) {
          ppppcVar4 = (char ****)local_40;
        }
        local_14 = 1;
        FUN_100180a6(ppppcVar4,local_30);
      }
      local_30 = 0;
      ppppcVar4 = (char ****)local_40;
      if (local_2c < 0x10) {
        ppppcVar4 = &local_40;
      }
      *(char *)ppppcVar4 = '\0';
      *local_44 = 0;
      local_44[1] = 0;
      local_44[2] = 0;
      local_14 = 2;
      local_50 = (char ***)&local_40;
      local_4c = local_44;
      pcVar3 = local_24 + 4;
      if (0xf < *(uint *)(local_24 + 0x18)) {
        pcVar3 = *(char **)(local_24 + 4);
      }
      local_28 = pcVar3 + *(int *)(local_24 + 0x14);
      while (pcVar3 != local_28) {
        local_24 = pcVar3;
        if (*pcVar3 == '\x01') {
          FUN_1015de98();
        }
        else {
          FUN_10003d9a((int)*pcVar3);
        }
        pcVar3 = local_24 + 1;
      }
      FUN_1015de98();
      local_14 = 0xffffffff;
      FUN_10001fee();
      FUN_10001fee();
      ExceptionList = local_1c;
      return;
    }
    local_14 = 1;
    local_28 = pcVar3;
    FUN_10003d9a((int)*pcVar3);
    iVar5 = -0x30;
    do {
      local_50 = (char ***)&local_40;
      if (0xf < local_2c) {
        local_50 = local_40;
      }
      local_4c = (undefined4 *)local_30;
      cVar2 = FUN_100aabcc(*(undefined4 *)((int)&DAT_1039d8a0 + iVar5));
      if (cVar2 != '\0') {
        local_14 = 1;
        FUN_100aac00(local_30 - *(int *)(iVar5 + 0x1039d8a4),*(int *)(iVar5 + 0x1039d8a4),
                     &DAT_10355ece,1);
        break;
      }
      iVar5 = iVar5 + 8;
    } while (iVar5 != 0);
    pcVar3 = local_28 + 1;
  } while( true );
}

