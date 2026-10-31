/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402beda4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1402beda4(undefined8 *param_1,char *****param_2)

{
  char cVar1;
  char ****ppppcVar2;
  char *****pppppcVar3;
  longlong lVar4;
  char *****pppppcVar5;
  longlong unaff_GS_OFFSET;
  ulonglong in_stack_ffffffffffffff68;
  char ****local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  char ****local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong local_60;
  char ****local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_80 = param_1;
  local_50 = (char ****)param_2;
  if ((*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)DAT_140629530 * 8)
               + 0x2c) < DAT_140628f58) && (FUN_14044e9d0(&DAT_140628f58), DAT_140628f58 == -1)) {
    FUN_1402299e4(&DAT_140628f30,&DAT_14057cec5,1);
    FUN_14044ebe0(&DAT_1402c0500);
    _Init_thread_footer(&DAT_140628f58);
  }
  if ((*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)DAT_140629530 * 8)
               + 0x2c) < DAT_140628fc0) && (FUN_14044e9d0(&DAT_140628fc0), DAT_140628fc0 == -1)) {
    DAT_140628f60 = (longlong)L" Rpg Maker MV/MZ Engine" + 0x13;
    DAT_140628f68 = 2;
    DAT_140628f70 =
         "SetShortcutRouting(%s, flags=%04X, owner_id=0x%08X) -> filtered as potential char input\n"
    ;
    _DAT_140628f78 = 1;
    _DAT_140628f80 = L" MV/MZ Engine";
    _DAT_140628f88 = 1;
    _DAT_140628f90 = &DAT_14057e594;
    _DAT_140628f98 = 2;
    _DAT_140628fa0 = "th focus: <none>";
    _DAT_140628fa8 = 2;
    _DAT_140628fb0 = "CAN) must be escaped to \\u0018";
    _DAT_140628fb8 = 3;
    _Init_thread_footer(&DAT_140628fc0);
  }
  ppppcVar2 = local_50;
  do {
    in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffff00000000;
    FUN_1402c050c(&local_78,local_50,&DAT_140628f30,(longlong)L"CommonEventByName" + 0x11,
                  in_stack_ffffffffffffff68);
    cVar1 = FUN_14022cee4(&local_78,ppppcVar2);
    if ((char *****)ppppcVar2 != &local_78) {
      pppppcVar5 = &local_78;
      if (0xf < local_60) {
        pppppcVar5 = (char *****)local_78;
      }
      FUN_140229170(local_50,pppppcVar5,local_68);
    }
    FUN_1402133c2();
  } while (cVar1 == '\0');
  local_78 = (char ****)0x0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0xf;
  ppppcVar2 = (char ****)local_50[2];
  if ((char ****)0xf < ppppcVar2) {
    FUN_140214fd6(&local_78,ppppcVar2);
    ppppcVar2 = (char ****)local_50[2];
  }
  local_68 = 0;
  pppppcVar5 = (char *****)local_50;
  if ((char ****)0xf < local_50[3]) {
    pppppcVar5 = (char *****)*local_50;
  }
  pppppcVar3 = (char *****)((longlong)ppppcVar2 + (longlong)pppppcVar5);
  do {
    if (pppppcVar5 == pppppcVar3) {
      if ((char *****)local_50 != &local_78) {
        pppppcVar5 = &local_78;
        if (0xf < local_60) {
          pppppcVar5 = (char *****)local_78;
        }
        FUN_140229170(local_50,pppppcVar5,local_68);
      }
      local_68 = 0;
      pppppcVar5 = (char *****)local_78;
      if (local_60 < 0x10) {
        pppppcVar5 = &local_78;
      }
      *(char *)pppppcVar5 = '\0';
      local_80[2] = 0;
      *local_80 = 0;
      local_80[1] = 0;
      local_90 = (char ****)&local_78;
      local_88 = local_80;
      pppppcVar5 = (char *****)local_50;
      if ((char ****)0xf < local_50[3]) {
        pppppcVar5 = (char *****)*local_50;
      }
      pppppcVar3 = (char *****)((longlong)pppppcVar5 + (longlong)local_50[2]);
      for (; pppppcVar5 != pppppcVar3; pppppcVar5 = (char *****)((longlong)pppppcVar5 + 1)) {
        if (*(char *)pppppcVar5 == '\x01') {
          FUN_1402c05e6(&local_90);
        }
        else {
          FUN_1402150c2(&local_78);
        }
      }
      FUN_1402c05e6(&local_90);
      FUN_1402133c2(&local_78);
      FUN_1402133c2(local_50);
      return local_80;
    }
    FUN_1402150c2(&local_78,*(char *)pppppcVar5);
    lVar4 = 8;
    do {
      local_90 = (char ****)&local_78;
      if (0xf < local_60) {
        local_90 = local_78;
      }
      local_88 = (undefined8 *)local_68;
      cVar1 = FUN_1402c06ae(&local_90,*(undefined8 *)((longlong)&DAT_140628f58 + lVar4));
      if (cVar1 != '\0') {
        FUN_1402c06ea(&local_78,local_68 - *(longlong *)((longlong)&DAT_140628f60 + lVar4),
                      *(longlong *)((longlong)&DAT_140628f60 + lVar4),
                      (longlong)L"CommonEventByName" + 0x11,1);
        break;
      }
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != 0x68);
    pppppcVar5 = (char *****)((longlong)pppppcVar5 + 1);
  } while( true );
}

