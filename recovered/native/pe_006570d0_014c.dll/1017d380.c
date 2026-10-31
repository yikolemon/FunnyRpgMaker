/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017d380 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1017d380(void)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  undefined ****ppppuVar4;
  undefined ***local_d8;
  undefined ***local_d4;
  int local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined ***local_bc;
  undefined ***local_b8;
  undefined ***local_b0 [2];
  undefined ****local_a8;
  undefined ***local_a4;
  undefined ***local_a0;
  undefined ****local_9c;
  undefined4 local_98;
  uint local_94;
  undefined ****local_84;
  int local_80;
  undefined ****local_7c;
  undefined1 local_78 [40];
  undefined ***local_50;
  undefined4 local_4c;
  undefined ****local_48;
  undefined **local_44 [2];
  int local_3c;
  char *local_38;
  undefined4 local_34;
  undefined ****local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_d8;
  local_18 = 0xffffffff;
  local_1c = &LAB_101801c0;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  FUN_1017dcbe();
  local_18 = 7;
  local_d0 = 0;
  uStack_cc = 0;
  FUN_10001f66("$dataMapInfos");
  local_18 = 0x15;
  FUN_100145e4(&local_a8,&local_80);
  local_18 = 0x16;
  FUN_100d8f98(&local_d0);
  local_18 = 0xffffffff;
  FUN_10013efc();
  FUN_10001fee();
  local_d4 = local_b8;
  for (ppppuVar4 = (undefined ****)local_bc; ppppuVar4 != (undefined ****)local_d4;
      ppppuVar4 = ppppuVar4 + 4) {
    if (*(char *)ppppuVar4 == '\x01') {
      local_a8 = (undefined ****)&DAT_1033a3fb;
      local_a4 = (undefined ***)0x2;
      local_18 = 0xf;
      local_d8 = (undefined ***)ppppuVar4;
      FUN_100dafc2(&local_a8);
      local_18 = 0x14;
      local_d0 = 0;
      FUN_100561d8(&local_80,&local_d0);
      iVar2 = local_d0;
      local_18 = 0xffffffff;
      FUN_10013efc();
      local_3c = iVar2;
      local_80 = iVar2;
      local_50 = (undefined ***)0x1033a975;
      local_4c = 8;
      local_18 = 0xf;
      FUN_100dafc2(&local_50);
      local_18 = 0x10;
      local_a8 = (undefined ****)0x0;
      FUN_100561d8(&local_d0,&local_a8);
      local_7c = local_a8;
      local_38 = "name";
      local_34 = 4;
      FUN_100db8d0(&local_38);
      local_18 = 0x11;
      local_30 = (undefined ****)&local_a8;
      if (0xf < local_94) {
        local_30 = local_a8;
      }
      local_2c = local_98;
      FUN_101575f2(local_78,&local_30);
      local_18 = 0x12;
      FUN_1017dfb0(local_44,&local_3c,&local_80);
      local_18 = 0xffffffff;
      FUN_10001fee();
      FUN_10001fee();
      FUN_10013efc();
      ppppuVar4 = (undefined ****)local_d8;
    }
  }
  local_18 = 0xffffffff;
  FUN_100171ce();
  local_18 = 7;
  FUN_1017dd44();
  local_18 = 8;
  local_d4 = local_b0[0];
  local_a8 = (undefined ****)*local_b0[0];
  while (local_a8 != (undefined ****)local_d4) {
    local_d8 = (undefined ***)local_a8;
    FUN_1017e378(&local_80,local_a8 + 6);
    puVar1 = *(undefined4 **)(local_80 + 0x18);
    if (puVar1 == *(undefined4 **)(local_80 + 0x1c)) {
      FUN_10051662(puVar1,local_d8 + 4);
    }
    else {
      *puVar1 = local_d8[4];
      *(int *)(local_80 + 0x18) = *(int *)(local_80 + 0x18) + 4;
    }
    FUN_10016fb8();
  }
  local_a8 = (undefined ****)
             std::
             _Func_impl_no_alloc<`public:_<auto>___thiscall_`void___cdecl_RpgMakerUpdateMapTree(void)'::`1'::<lambda_1>::operator()(void)const_'::`1'::<lambda_1>,MapTreeNode,int>
             ::vftable;
  local_a4 = (undefined ***)local_b0;
  local_a0 = (undefined ***)&local_bc;
  local_9c = (undefined ****)&local_a8;
  local_d0 = 0;
  uStack_cc = 0;
  local_c8 = 0;
  local_18 = 10;
  local_80 = 0;
  local_84 = local_9c;
  local_48 = local_9c;
  ppppuVar4 = (undefined ****)FUN_1017ec78(&local_80);
  if (ppppuVar4 != (undefined ****)local_bc) {
    local_d8 = (undefined ***)ppppuVar4;
    FUN_1017ddca((int)ppppuVar4[6] - (int)ppppuVar4[5] >> 2);
    local_d4 = (undefined ***)local_d8[6];
    ppppuVar4 = (undefined ****)local_d8[5];
    while (ppppuVar4 != (undefined ****)local_d4) {
      local_44[0] = (undefined **)*ppppuVar4;
      local_18 = 10;
      local_d8 = (undefined ***)ppppuVar4;
      if ((undefined *****)local_84 == (undefined *****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10228590();
      }
      (*(code *)(*local_84)[2])(&local_80,local_44);
      local_18 = 0xd;
      FUN_1017ef56(&local_80);
      local_18 = 0xffffffff;
      FUN_1017960a();
      local_18 = 0xffffffff;
      FUN_10001fee();
      ppppuVar4 = (undefined ****)(local_d8 + 1);
    }
  }
  local_d4 = local_b0[0];
  local_50 = (undefined ***)*local_b0[0];
  do {
    if (local_50 == local_d4) {
      local_18 = 10;
      FUN_100446d6();
      local_18 = 0xb;
      FUN_1017960a();
      _DAT_1039d8e8 = CONCAT44(uStack_cc,local_d0);
      _DAT_1039d8f0 = local_c8;
      local_d0 = 0;
      uStack_cc = 0;
      local_c8 = 0;
      local_18 = 0xffffffff;
      FUN_1022c200(&DAT_1039d8b4);
      FUN_1017960a();
      if ((undefined *****)local_84 != (undefined *****)0x0) {
        (*(code *)(*local_84)[4])((undefined *****)local_84 != &local_a8);
      }
      FUN_1017e330(&local_bc,local_bc[1]);
      FUN_102283a0(local_bc,0x20);
      FUN_1017de96(local_b0,local_b0[0][1]);
      FUN_102283a0(local_b0[0],0x40);
      ExceptionList = local_20;
      return;
    }
    if ((undefined ***)local_50[6] != (undefined ***)0x0) {
      local_18 = 10;
      local_d8 = local_50;
      cVar3 = FUN_1017de20(local_50 + 6);
      if (cVar3 == '\0') {
        local_44[0] = local_d8[4];
        if ((undefined *****)local_84 == (undefined *****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_10228590();
        }
        (*(code *)(*local_84)[2])(&local_80,local_44);
        local_18 = 0xc;
        FUN_1017ef56(&local_80);
        local_18 = 0xffffffff;
        FUN_1017960a();
        local_18 = 0xffffffff;
        FUN_10001fee();
      }
    }
    FUN_10016fb8();
  } while( true );
}

