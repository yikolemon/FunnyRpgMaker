/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10070730 */

undefined4 __thiscall FUN_10070730(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_c8 [72];
  undefined4 local_80;
  undefined4 local_7c;
  char *local_78;
  char *local_74;
  int local_70 [6];
  wchar_t *local_58;
  undefined4 uStack_54;
  char *local_50;
  undefined4 uStack_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_c8;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2810;
  local_1c = ExceptionList;
  iVar3 = *(int *)(param_2 + 0x28);
  ExceptionList = &local_1c;
  *(int *)(param_1 + 0x17c) = iVar3 + -1;
  if ((*(int *)(param_2 + 4) != 0) || (*(int *)(param_2 + 0x24) == 0)) {
    *(int *)(param_1 + 0x17c) = iVar3 + 9;
  }
  local_24 = param_1;
  FUN_1008a800(&local_3c);
  iVar3 = local_24;
  local_14 = 0;
  if ((undefined4 *)(local_24 + 0x38) != &local_3c) {
    FUN_10004eae();
    *(ulonglong *)(iVar3 + 0x38) = CONCAT44(uStack_38,local_3c);
    *(undefined4 *)(iVar3 + 0x40) = local_34;
    local_3c = 0;
    uStack_38 = 0;
    local_34 = 0;
  }
  local_14 = 0xffffffff;
  FUN_10004eae();
  local_40 = param_2 + 0x10;
  uVar2 = FUN_10077b66();
  *(undefined4 *)(local_24 + 0x44) = uVar2;
  FUN_1008a8f0(&local_3c);
  local_14 = 1;
  FUN_100128b2(&local_3c);
  local_14 = 0xffffffff;
  FUN_10001134();
  FUN_1008a8f0(&local_3c);
  local_14 = 2;
  iVar3 = local_24 + 0x60;
  FUN_100128b2(&local_3c);
  local_14 = 0xffffffff;
  FUN_10001134();
  cVar1 = FUN_1008afc2(&DAT_1039cb84);
  if (cVar1 == '\0') {
    local_80 = 0x73;
    local_7c = 0x5b;
    local_78 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\GameDat.hpp"
    ;
    local_74 = "virtual bool __thiscall GameDat::load(FileCoder &)";
    FUN_10080602();
    local_14 = 3;
    local_58 = L"{}Invalid magic string: \"{}\" expected: \"{}\"";
    uStack_54 = 0x2b;
    FUN_1008ab8a(&local_3c,0x2b10356f58,local_70,iVar3,&DAT_1039cb84);
    local_14 = 4;
    FUN_1008069c(&local_3c);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0();
  }
  FUN_1008a800(&local_3c);
  iVar3 = local_24;
  local_14 = 5;
  if ((undefined4 *)(local_24 + 0x78) != &local_3c) {
    FUN_10004eae();
    *(ulonglong *)(iVar3 + 0x78) = CONCAT44(uStack_38,local_3c);
    *(undefined4 *)(iVar3 + 0x80) = local_34;
    local_3c = 0;
    uStack_38 = 0;
    local_34 = 0;
  }
  local_14 = 0xffffffff;
  FUN_10004eae();
  FUN_1008a8f0(&local_3c);
  iVar3 = local_24;
  local_14 = 6;
  FUN_100128b2(&local_3c);
  local_14 = 0xffffffff;
  FUN_10001134();
  local_48 = iVar3 + 0x9c;
  local_44 = 3;
  do {
    FUN_1008a8f0(&local_3c);
    local_14 = 7;
    FUN_1008b09c(&local_3c);
    local_14 = 0xffffffff;
    FUN_10001134();
    local_44 = local_44 + -1;
  } while (local_44 != 0);
  FUN_1008a8f0(&local_3c);
  iVar3 = local_24;
  local_14 = 8;
  FUN_100128b2(&local_3c);
  local_14 = 0xffffffff;
  FUN_10001134();
  if (8 < *(uint *)(iVar3 + 0x44)) {
    FUN_1008a8f0(&local_3c);
    local_14 = 9;
    FUN_100128b2(&local_3c);
    local_14 = 0xffffffff;
    FUN_10001134();
    if (9 < *(uint *)(iVar3 + 0x44)) {
      FUN_1008a8f0(&local_3c);
      local_14 = 10;
      FUN_100128b2(&local_3c);
      local_14 = 0xffffffff;
      FUN_10001134();
      FUN_1008a8f0(&local_3c);
      local_14 = 0xb;
      FUN_100128b2(&local_3c);
      local_14 = 0xffffffff;
      FUN_10001134();
      FUN_1008a8f0(&local_3c);
      local_14 = 0xc;
      FUN_100128b2(&local_3c);
      local_14 = 0xffffffff;
      FUN_10001134();
      FUN_1008a8f0(&local_3c);
      iVar3 = local_24;
      local_14 = 0xd;
      FUN_100128b2(&local_3c);
      local_14 = 0xffffffff;
      FUN_10001134();
      if (0xd < *(uint *)(iVar3 + 0x44)) {
        FUN_1008a8f0(&local_3c);
        local_14 = 0xe;
        FUN_100128b2(&local_3c);
        local_14 = 0xffffffff;
        FUN_10001134();
        iVar3 = local_24;
      }
    }
  }
  uVar2 = FUN_10077b66();
  *(undefined4 *)(iVar3 + 0x150) = uVar2;
  uVar2 = FUN_10077b66();
  *(undefined4 *)(iVar3 + 0x154) = uVar2;
  local_70[0] = FUN_10077b66();
  *(int *)(iVar3 + 0x158) = local_70[0];
  local_70[0] = local_70[0] * 2;
  FUN_10076b48();
  local_14 = 0xf;
  if ((undefined4 *)(iVar3 + 0x15c) != &local_3c) {
    FUN_10004eae();
    *(ulonglong *)(iVar3 + 0x15c) = CONCAT44(uStack_38,local_3c);
    *(undefined4 *)(iVar3 + 0x164) = local_34;
    local_3c = 0;
    uStack_38 = 0;
    local_34 = 0;
  }
  local_14 = 0xffffffff;
  FUN_10004eae();
  uVar2 = FUN_10077b66();
  *(undefined4 *)(iVar3 + 0x168) = uVar2;
  uVar2 = FUN_10077b66();
  *(undefined4 *)(iVar3 + 0x16c) = uVar2;
  local_70[0] = -1;
  FUN_10076b48();
  local_14 = 0x10;
  if ((undefined4 *)(iVar3 + 0x170) != &local_3c) {
    FUN_10004eae();
    *(ulonglong *)(iVar3 + 0x170) = CONCAT44(uStack_38,local_3c);
    *(undefined4 *)(iVar3 + 0x178) = local_34;
    local_3c = 0;
    uStack_38 = 0;
    local_34 = 0;
  }
  local_14 = 0xffffffff;
  FUN_10004eae();
  if ((*(int *)(param_2 + 4) == 0) && (*(uint *)(param_2 + 0x28) <= *(uint *)(param_2 + 0x24))) {
    ExceptionList = local_1c;
    return 1;
  }
  local_80 = 0x9c;
  local_7c = 0x51;
  local_78 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\GameDat.hpp"
  ;
  local_74 = "virtual bool __thiscall GameDat::load(FileCoder &)";
  FUN_10072232();
  local_14 = 0x11;
  local_50 = "{}Game.dat has more data than expected";
  uStack_4c = 0x26;
  FUN_100721d6();
  local_14 = 0x12;
  FUN_1006f6d8(&local_3c);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0();
}

