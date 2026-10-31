/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10072bac */

void __fastcall FUN_10072bac(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  undefined4 local_34;
  int local_30;
  uint local_2c [3];
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_34;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c28b0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (*(int *)(param_1 + 0xc) == 3) {
    if (DAT_10388110 != -1) {
      local_34 = 0xffffffff;
      local_20 = (undefined1 *)&local_34;
      FUN_10076b48(local_2c,&local_34);
      local_14 = 0;
      local_30 = param_1;
      FUN_10076c08(local_2c);
      FUN_10076c34(local_2c);
      local_14 = 0xffffffff;
      FUN_10004eae();
    }
    goto code_r0x10072d2b;
  }
  local_2c[0] = 1;
  cVar1 = FUN_10076c78(local_2c);
  if (cVar1 == 'P') {
    local_2c[0] = 5;
    bVar2 = FUN_10076c78(local_2c);
    if (bVar2 < 0x55) {
      FUN_10076d5c();
      goto code_r0x10072d2b;
    }
    if (bVar2 < 0x57) {
      FUN_10076e52();
      goto code_r0x10072d2b;
    }
    FUN_10076f14();
  }
  if (*(int *)(param_1 + 0xc) == 4) {
    local_2c[0] = 0x14;
    bVar2 = FUN_10076c78(local_2c);
    if (100 < bVar2) {
      local_2c[0] = 0x19;
      FUN_100770a2(local_2c);
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_10077182(local_2c);
    }
  }
  else {
    cVar1 = FUN_10077c4c();
    local_2c[0] = CONCAT31(local_2c[0]._1_3_,cVar1);
    iVar3 = *(int *)(param_1 + 0xc);
    if ((cVar1 != '\0') && (iVar3 != 2)) {
      FUN_1007745a(local_2c);
      iVar3 = *(int *)(param_1 + 0xc);
    }
    if (iVar3 == 2) {
      local_2c[0] = 10;
      cVar1 = FUN_10076c78(local_2c);
      if (cVar1 == -0x3c) {
        local_2c[0] = 0xb;
        FUN_100770a2(local_2c);
        local_2c[0] = local_2c[0] & 0xffffff00;
        FUN_10077182(local_2c);
        local_2c[0] = 1;
        FUN_100770a2(local_2c);
      }
    }
  }
code_r0x10072d2b:
  *unaff_FS_OFFSET = local_1c;
  return;
}

