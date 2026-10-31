/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009d298 */

undefined4 __fastcall FUN_1009d298(uint *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 ***pppuVar3;
  uint uVar4;
  undefined4 ****ppppuVar5;
  int *unaff_FS_OFFSET;
  uint *local_420;
  undefined4 ***local_41c;
  uint *local_418;
  uint local_414;
  undefined4 local_410;
  undefined4 local_40c;
  char *local_408;
  char *local_404;
  uint *local_3f8;
  uint local_3f4;
  undefined4 local_3f0;
  undefined4 local_3ec;
  char *local_3e8;
  char *local_3e4;
  int local_3d8;
  wchar_t *local_3d4;
  undefined4 uStack_3d0;
  wchar_t *local_3cc;
  undefined4 uStack_3c8;
  char *local_3c4;
  undefined4 uStack_3c0;
  wchar_t *local_3bc;
  undefined4 uStack_3b8;
  wchar_t *local_3b4;
  undefined4 uStack_3b0;
  int local_3ac [2];
  char *local_3a4;
  char *local_3a0;
  undefined4 local_39c [27];
  undefined4 ***local_330;
  int local_32c;
  undefined4 local_320;
  uint local_31c;
  uint local_30c;
  uint local_308;
  undefined4 ***local_218;
  int local_214;
  undefined4 local_208;
  uint local_204;
  uint local_1f4;
  uint local_1f0;
  undefined1 local_100 [36];
  undefined1 local_dc [36];
  undefined1 local_b8 [36];
  undefined1 local_94 [36];
  undefined1 local_70 [36];
  undefined1 local_4c [36];
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_420;
  local_18 = 0xffffffff;
  local_1c = &LAB_100c3e40;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  local_3f8 = param_1 + 0xd;
  local_420 = param_1;
  FUN_1006ad36(&local_218);
  local_18 = 0;
  ppppuVar5 = &local_218;
  if (7 < local_204) {
    ppppuVar5 = (undefined4 ****)local_218;
  }
  FUN_10004664(ppppuVar5,local_208);
  local_18 = 0xffffffff;
  FUN_10001f04();
  local_41c = &local_330;
  local_330 = (undefined4 ****)0x2;
  local_39c[0] = 0;
  FUN_100724ba(local_420 + 0xd,local_39c,local_41c,&DAT_102962bf);
  local_18 = 1;
  if ((char)local_218 == '\0') {
    cVar1 = FUN_10072624(&DAT_1039cb64);
    if (cVar1 == '\0') {
      local_410 = 0x2b1;
      local_40c = 0x28;
      local_408 = 
      "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Database.hpp"
      ;
      local_404 = "bool __thiscall Database::init(void)";
      FUN_10072232(local_39c,&local_410);
      local_18 = 0xe;
      FUN_10020842(&local_330,local_39c,"MAGIC invalid");
      local_18 = 0xf;
      FUN_1006f6d8(&local_330);
                    /* WARNING: Subroutine does not return */
      FUN_102586e0(local_4c,&DAT_10367ca8);
    }
  }
  uVar2 = FUN_10077c4c();
  *(undefined1 *)(local_420 + 6) = uVar2;
  local_418 = local_420 + 7;
  FUN_1006ad36(&local_330);
  local_18 = 0x16;
  if (7 < local_31c) {
    local_41c = local_330;
  }
  FUN_10004664(local_41c,local_320);
  local_18 = 0xffffffff;
  FUN_10001f04();
  local_3f0 = (uint)local_3f0._3_1_ << 0x18;
  local_39c[0] = 3;
  local_410 = 0;
  local_18 = 1;
  FUN_100724ba(local_418,&local_410,local_39c,&local_3f0);
  local_18 = 0x11;
  local_414 = FUN_10077b66();
  for (local_41c = (undefined4 ***)0x0; local_41c < local_414;
      local_41c = (undefined4 ***)((int)local_41c + 1)) {
    local_18 = 0x11;
    FUN_1009dd74(&local_330);
    local_18 = 0x15;
    FUN_1009e75c(local_39c);
    local_18 = 0xffffffff;
    FUN_1009cde0();
  }
  if ((local_32c != 0) || (local_30c < local_308)) {
    local_18 = 0x11;
    FUN_10003728(local_418);
    local_18 = 0x12;
    local_3ac[0] = 0x2be;
    local_3ac[1] = 0x5c;
    local_3a4 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Database.hpp"
    ;
    local_3a0 = "bool __thiscall Database::init(void)";
    FUN_10080602(&local_3f0,local_3ac);
    local_18 = 0x13;
    local_3b4 = L"{}Project file [{}] has more data than expected";
    uStack_3b0 = 0x2f;
    FUN_100805a1(local_39c,L"{}Project file [{}] has more data than expected",0x2f,&local_3f0,
                 &local_410);
    local_18 = 0x14;
    FUN_1008069c(local_39c);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(local_70,&DAT_10367ca8);
  }
  local_18 = 0xffffffff;
  FUN_1007283e();
  local_18 = 1;
  FUN_1006ad36(&local_330);
  local_18 = 0x10;
  ppppuVar5 = &local_330;
  if (7 < local_31c) {
    ppppuVar5 = (undefined4 ****)local_330;
  }
  FUN_10004664(ppppuVar5,local_320);
  local_18 = 0xffffffff;
  FUN_10001f04();
  local_18 = 1;
  local_3d8 = FUN_10077b66();
  uVar4 = *local_420;
  local_418 = (uint *)local_420[1];
  local_3ac[0] = ((int)((int)local_418 - uVar4) >> 2) * 0x684bda13;
  if (local_3d8 != local_3ac[0]) {
    FUN_10003728(local_3f8);
    local_18 = 0xb;
    local_3f0 = 0x2c4;
    local_3ec = 0x77;
    local_3e8 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Database.hpp"
    ;
    local_3e4 = "bool __thiscall Database::init(void)";
    FUN_10080602(&local_410,&local_3f0);
    local_18 = 0xc;
    local_3bc = L"{}Database [{}] project and dat type count mismatch expected: {}  - got: {}";
    uStack_3b8 = 0x4b;
    FUN_10099fbc(&local_330,
                 L"{}Database [{}] project and dat type count mismatch expected: {}  - got: {}",0x4b
                 ,&local_410,local_39c,local_3ac,&local_3d8);
    local_18 = 0xd;
    FUN_1008069c(&local_330);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(local_94,&DAT_10367ca8);
  }
  local_3f4 = 0;
  pppuVar3 = (undefined4 ***)0;
  while ((uint *)uVar4 != local_418) {
    local_41c = (undefined4 ***)((int)pppuVar3 + 1);
    local_414 = uVar4;
    local_3f4 = (uint)local_41c;
    cVar1 = FUN_1009e438(&local_218);
    uVar4 = local_414 + 0x6c;
    pppuVar3 = local_41c;
    if (cVar1 == '\0') {
      local_410 = 0x2cb;
      local_40c = 0x4c;
      local_408 = 
      "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Database.hpp"
      ;
      local_404 = "bool __thiscall Database::init(void)";
      FUN_10072232(local_39c,&local_410);
      local_18 = 2;
      local_3c4 = "{}Failed at readDat for type({})";
      uStack_3c0 = 0x20;
      FUN_1008abf0(&local_330,"{}Failed at readDat for type({})",0x20,local_39c,&local_3f4);
      local_18 = 3;
      FUN_1006f6d8(&local_330);
                    /* WARNING: Subroutine does not return */
      FUN_102586e0(local_b8,&DAT_10367ca8);
    }
  }
  cVar1 = FUN_10077c4c();
  if (cVar1 != (char)local_420[6]) {
    FUN_10003728(local_420 + 0xd);
    local_18 = 7;
    FUN_1009e638(&local_410,(char)local_420[6]);
    local_18 = 8;
    local_3ac[0] = 0x2cf;
    local_3ac[1] = 0x51;
    local_3a4 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Database.hpp"
    ;
    local_3a0 = "bool __thiscall Database::init(void)";
    FUN_10080602(&local_3f0,local_3ac);
    local_18 = 9;
    local_3cc = L"{}No {} terminator at the end of [{}]";
    uStack_3c8 = 0x25;
    FUN_1008ab8a(&local_330,L"{}No {} terminator at the end of [{}]",0x25,&local_3f0,&local_410,
                 local_39c);
    local_18 = 10;
    FUN_1008069c(&local_330);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(local_dc,&DAT_10367ca8);
  }
  if ((local_214 == 0) && (local_1f0 <= local_1f4)) {
    local_18 = 0xffffffff;
    FUN_1007283e();
    *unaff_FS_OFFSET = local_20;
    return 1;
  }
  FUN_10003728(local_3f8);
  local_18 = 4;
  local_3f0 = 0x2d2;
  local_3ec = 0x57;
  local_3e8 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\Database.hpp"
  ;
  local_3e4 = "bool __thiscall Database::init(void)";
  FUN_10080602(&local_410,&local_3f0);
  local_18 = 5;
  local_3d4 = L"{}Database [{}] has more data than expected";
  uStack_3d0 = 0x2b;
  FUN_100805a1(&local_330,L"{}Database [{}] has more data than expected",0x2b,&local_410,local_39c);
  local_18 = 6;
  FUN_1008069c(&local_330);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(local_100,&DAT_10367ca8);
}

