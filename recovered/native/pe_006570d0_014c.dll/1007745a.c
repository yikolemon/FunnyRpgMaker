/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007745a */

void FUN_1007745a(char *param_1)

{
  char cVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined4 local_4c;
  undefined1 local_48 [12];
  char *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  char local_24 [4];
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_4c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2c10;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (*param_1 != '\0') {
    local_3c = (char *)0x0;
    local_38 = 0;
    local_34 = 0;
    FUN_100164d2(10);
    local_14 = 0;
    *local_3c = *param_1;
    local_2c = local_28 + 0x10;
    for (local_30 = 1; local_30 < 10; local_30 = local_30 + 1) {
      cVar1 = FUN_10077c4c();
      local_3c[local_30] = cVar1;
    }
    local_24[2] = 0;
    local_24[0] = '\0';
    local_24[1] = '\0';
    iVar2 = -3;
    do {
      local_24[iVar2 + 3] = local_3c[(byte)local_28[iVar2 + 0xb]];
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0);
    *local_28 = 1;
    local_4c = 0xffffffff;
    local_14 = 0;
    FUN_10076b48(local_48,&local_4c);
    local_14 = 1;
    FUN_1007da12(local_48,local_24);
    FUN_10076c34(local_48);
    local_14 = 0xffffffff;
    FUN_10004eae();
    FUN_10004eae();
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}

