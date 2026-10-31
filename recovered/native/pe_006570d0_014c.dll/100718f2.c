/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100718f2 */

void FUN_100718f2(void)

{
  int iVar1;
  char cVar2;
  undefined4 ****ppppuVar3;
  int iVar4;
  char *local_78;
  int local_74;
  int local_70;
  int local_6c;
  char *local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined1 local_54 [24];
  undefined4 ***local_3c [4];
  int local_2c;
  uint local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_78;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2830;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_1008c8aa("Title");
  FUN_1008cb0a(local_3c,local_54[0]);
  local_14 = 0;
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039cc78) {
    FUN_1022c0d0(&DAT_1039cc78);
    if (DAT_1039cc78 == -1) {
      local_14 = 1;
      FUN_10075be2();
      FUN_1022c3a0(&LAB_1008ada7);
      local_14 = 0xffffffff;
      FUN_1022c180(&DAT_1039cc78);
    }
  }
  ppppuVar3 = local_3c;
  if (0xf < local_28) {
    ppppuVar3 = (undefined4 ****)local_3c[0];
  }
  local_14 = 0;
  FUN_1008adb2(local_54,ppppuVar3,local_2c + (int)ppppuVar3);
  local_14 = 2;
  FUN_100128b2(local_54);
  local_14 = 0xffffffff;
  FUN_10001134();
  FUN_10001fee();
  FUN_1008c8aa("TitlePlus");
  FUN_1008cb0a(local_3c,local_54[0]);
  local_14 = 3;
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039cc78) {
    FUN_1022c0d0(&DAT_1039cc78);
    if (DAT_1039cc78 == -1) {
      local_14 = 4;
      FUN_10075be2();
      FUN_1022c3a0(&LAB_1008ada7);
      local_14 = 0xffffffff;
      FUN_1022c180(&DAT_1039cc78);
    }
  }
  ppppuVar3 = local_3c;
  if (0xf < local_28) {
    ppppuVar3 = (undefined4 ****)local_3c[0];
  }
  local_14 = 3;
  FUN_1008adb2(local_54,ppppuVar3,local_2c + (int)ppppuVar3);
  local_14 = 5;
  FUN_100128b2(local_54);
  local_14 = 0xffffffff;
  FUN_10001134();
  FUN_10001fee();
  if (9 < *(uint *)(local_24 + 0x44)) {
    FUN_1008c8aa("StartUpMsg");
    FUN_1008cb0a(local_3c,local_54[0]);
    local_14 = 6;
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039cc78) {
      FUN_1022c0d0(&DAT_1039cc78);
      if (DAT_1039cc78 == -1) {
        local_14 = 7;
        FUN_10075be2();
        FUN_1022c3a0(&LAB_1008ada7);
        local_14 = 0xffffffff;
        FUN_1022c180(&DAT_1039cc78);
      }
    }
    ppppuVar3 = local_3c;
    if (0xf < local_28) {
      ppppuVar3 = (undefined4 ****)local_3c[0];
    }
    local_14 = 6;
    FUN_1008adb2(local_54,ppppuVar3,local_2c + (int)ppppuVar3);
    local_14 = 8;
    FUN_100128b2(local_54);
    local_14 = 0xffffffff;
    FUN_10001134();
    FUN_10001fee();
    FUN_1008c8aa("TitleMsg");
    FUN_1008cb0a(local_3c,local_54[0]);
    local_14 = 9;
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039cc78) {
      FUN_1022c0d0(&DAT_1039cc78);
      if (DAT_1039cc78 == -1) {
        local_14 = 10;
        FUN_10075be2();
        FUN_1022c3a0(&LAB_1008ada7);
        local_14 = 0xffffffff;
        FUN_1022c180(&DAT_1039cc78);
      }
    }
    ppppuVar3 = local_3c;
    if (0xf < local_28) {
      ppppuVar3 = (undefined4 ****)local_3c[0];
    }
    local_14 = 9;
    FUN_1008adb2(local_54,ppppuVar3,local_2c + (int)ppppuVar3);
    local_14 = 0xb;
    FUN_100128b2(local_54);
    local_14 = 0xffffffff;
    FUN_10001134();
    FUN_10001fee();
  }
  FUN_1008c8aa("MainFont");
  FUN_1008cb0a(local_3c,local_54[0]);
  local_14 = 0xc;
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039cc78) {
    FUN_1022c0d0(&DAT_1039cc78);
    if (DAT_1039cc78 == -1) {
      local_14 = 0xd;
      FUN_10075be2();
      FUN_1022c3a0(&LAB_1008ada7);
      local_14 = 0xffffffff;
      FUN_1022c180(&DAT_1039cc78);
    }
  }
  ppppuVar3 = local_3c;
  if (0xf < local_28) {
    ppppuVar3 = (undefined4 ****)local_3c[0];
  }
  local_14 = 0xc;
  FUN_1008adb2(local_54,ppppuVar3,local_2c + (int)ppppuVar3);
  local_14 = 0xe;
  FUN_100128b2(local_54);
  local_14 = 0xffffffff;
  FUN_10001134();
  FUN_10001fee();
  iVar4 = *(int *)(local_24 + 0x9c);
  iVar1 = *(int *)(local_24 + 0xa0);
  if (iVar4 != iVar1) {
    do {
      FUN_10001134();
      iVar4 = iVar4 + 0x18;
    } while (iVar4 != iVar1);
    *(undefined4 *)(local_24 + 0xa0) = *(undefined4 *)(local_24 + 0x9c);
    local_14 = 0xffffffff;
  }
  local_78 = (char *)FUN_1008c8aa("SubFonts");
  local_70 = 0;
  local_74 = 0;
  local_6c = -0x80000000;
  cVar2 = *local_78;
  if (cVar2 == '\0') {
    local_6c = 1;
  }
  else {
    if (cVar2 == '\x02') {
      local_70 = **(int **)(local_78 + 8);
      local_64 = 0;
      local_5c = 0x80000000;
      local_60 = *(undefined4 *)(*(int *)(local_78 + 8) + 4);
      goto LAB_10071d3c;
    }
    if (cVar2 == '\x01') {
      local_74 = **(int **)(local_78 + 8);
      local_60 = 0;
      local_5c = 0x80000000;
      local_64 = *(undefined4 *)(*(int *)(local_78 + 8) + 4);
      goto LAB_10071d3c;
    }
    local_6c = 0;
  }
  local_60 = 0;
  local_64 = 0;
  local_5c = 1;
LAB_10071d3c:
  local_24 = local_24 + 0x9c;
  local_68 = local_78;
  while( true ) {
    cVar2 = FUN_10051c02(&local_68);
    if (cVar2 != '\0') break;
    FUN_1008c930();
    FUN_1008cb0a(local_3c,local_58);
    local_14 = 0xf;
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x18) < DAT_1039cc78) {
      FUN_1022c0d0(&DAT_1039cc78);
      if (DAT_1039cc78 == -1) {
        local_14 = 0x10;
        FUN_10075be2();
        FUN_1022c3a0(&LAB_1008ada7);
        local_14 = 0xffffffff;
        FUN_1022c180(&DAT_1039cc78);
      }
    }
    ppppuVar3 = local_3c;
    if (0xf < local_28) {
      ppppuVar3 = (undefined4 ****)local_3c[0];
    }
    local_14 = 0xf;
    FUN_1008adb2(local_54,ppppuVar3,local_2c + (int)ppppuVar3);
    local_14 = 0x11;
    FUN_1008b09c(local_54);
    local_14 = 0xffffffff;
    FUN_10001134();
    FUN_10001fee();
    if (*local_78 == '\x02') {
      local_70 = local_70 + 0x10;
    }
    else if (*local_78 == '\x01') {
      local_74 = local_74 + 0x28;
    }
    else {
      local_6c = local_6c + 1;
    }
  }
  ExceptionList = local_1c;
  return;
}

