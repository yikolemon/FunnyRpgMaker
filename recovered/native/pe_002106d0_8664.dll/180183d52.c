/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180183d52 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180183d52(void)

{
  undefined4 *puVar1;
  undefined8 **ppuVar2;
  undefined8 ***pppuVar3;
  undefined8 **ppuVar4;
  undefined4 uVar5;
  char cVar6;
  longlong lVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined8 ***local_160;
  undefined8 local_158;
  char *local_150;
  undefined8 local_148;
  char *local_140;
  undefined8 local_138;
  longlong *local_130;
  undefined8 **local_128 [2];
  undefined8 ***local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  ulonglong local_100;
  undefined1 local_f0 [32];
  undefined8 **local_d0 [2];
  undefined8 local_c0;
  undefined8 **local_b8;
  undefined4 *local_b0;
  longlong *local_a8;
  longlong *local_88;
  undefined4 local_7c;
  char *local_78;
  char *pcStack_70;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  FUN_1801847b6(local_d0);
  local_118 = (undefined8 ****)0x0;
  uStack_110 = 0;
  FUN_180001e92(&local_c0,"$dataMapInfos");
  FUN_180013de7(&local_58,&local_c0);
  FUN_1800dcf0b(&local_78,&local_58,&local_118);
  FUN_1800137c6(&local_58);
  FUN_180001ef2(&local_c0);
  for (pcVar8 = local_78; pcVar8 != pcStack_70; pcVar8 = pcVar8 + 0x10) {
    if (*pcVar8 == '\x01') {
      local_118 = (undefined8 ***)&DAT_18036a525;
      uStack_110 = 2;
      FUN_1800df105(&local_c0,pcVar8,&local_118);
      local_58 = 0;
      FUN_180057604(&DAT_1802b0ea8,&local_c0,&local_58);
      uVar5 = local_58;
      FUN_1800137c6(&local_c0);
      local_7c = uVar5;
      local_c0 = (undefined **)CONCAT44(local_c0._4_4_,uVar5);
      local_140 = "parentId";
      local_138 = 8;
      FUN_1800df105(local_128,pcVar8,&local_140);
      local_118 = (undefined8 ***)((ulonglong)local_118 & 0xffffffff00000000);
      FUN_180057604(&DAT_1802b0ea8,local_128,&local_118);
      local_c0 = (undefined **)CONCAT44(local_118._0_4_,(undefined4)local_c0);
      local_150 = "name";
      local_148 = 4;
      FUN_1800dfa68(&local_118,pcVar8,&local_150);
      local_160 = &local_118;
      if (0xf < local_100) {
        local_160 = local_118;
      }
      local_158 = local_108;
      FUN_18015ace8(&local_b8,&local_160);
      FUN_180184aa0(local_d0,&local_58,&local_7c,&local_c0);
      FUN_180001ef2(&local_b8);
      FUN_180001ef2(&local_118);
      FUN_1800137c6(local_128);
    }
  }
  FUN_180016e50(&local_78);
  FUN_180184822(&local_58);
  ppuVar4 = local_d0[0];
  local_118 = (undefined8 ***)*local_d0[0];
  while (pppuVar3 = local_118, local_118 != (undefined8 ***)ppuVar4) {
    FUN_180184eaa(&local_58,&local_c0,(longlong)local_118 + 0x2c);
    puVar9 = *(undefined4 **)((longlong)local_c0 + 0x30);
    if (puVar9 == *(undefined4 **)((longlong)local_c0 + 0x38)) {
      FUN_18009ab08((longlong)local_c0 + 0x28,puVar9,pppuVar3 + 4);
    }
    else {
      *puVar9 = *(undefined4 *)(pppuVar3 + 4);
      *(longlong *)((longlong)local_c0 + 0x30) = *(longlong *)((longlong)local_c0 + 0x30) + 4;
    }
    FUN_180016c4c(&local_118);
  }
  local_c0 = std::
             _Func_impl_no_alloc<`public:_<auto>___cdecl_`void___cdecl_RpgMakerUpdateMapTree(void)'::`1'::<lambda_1>::operator()(void)const___ptr64'::`1'::<lambda_1>,MapTreeNode,int>
             ::vftable;
  local_b8 = local_d0;
  local_130 = &local_c0;
  local_78 = (char *)0x0;
  pcStack_70 = (char *)0x0;
  local_68 = 0;
  local_118 = (undefined8 ***)((ulonglong)local_118 & 0xffffffff00000000);
  local_b0 = &local_58;
  local_a8 = local_130;
  local_88 = local_130;
  lVar7 = FUN_1801856e0(&local_58);
  if (lVar7 != CONCAT44(uStack_54,local_58)) {
    FUN_18018488e(&local_78,*(longlong *)(lVar7 + 0x30) - *(longlong *)(lVar7 + 0x28) >> 2);
    puVar1 = *(undefined4 **)(lVar7 + 0x30);
    for (puVar9 = *(undefined4 **)(lVar7 + 0x28); puVar9 != puVar1; puVar9 = puVar9 + 1) {
      local_128[0] = (undefined8 **)CONCAT44(local_128[0]._4_4_,*puVar9);
      if (local_88 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1802398e0();
      }
      (**(code **)(*local_88 + 0x10))(local_88,&local_118,local_128);
      FUN_1801859da(&local_78,&local_118);
      FUN_18017fb46(local_f0);
      FUN_180001ef2(&uStack_110);
    }
  }
  ppuVar4 = local_d0[0];
  local_128[0] = (undefined8 **)*local_d0[0];
  do {
    ppuVar2 = local_128[0];
    if (local_128[0] == ppuVar4) {
      FUN_180044980(&DAT_1804193d8);
      FUN_18017fb46(&DAT_180419430);
      DAT_180419430 = local_78;
      DAT_180419438 = pcStack_70;
      _DAT_180419440 = local_68;
      local_78 = (char *)0x0;
      pcStack_70 = (char *)0x0;
      local_68 = 0;
      FUN_18023d6e0(&DAT_1804193d8);
      FUN_18017fb46(&local_78);
      if (local_88 != (longlong *)0x0) {
        (**(code **)(*local_88 + 0x20))(local_88,local_88 != &local_c0);
      }
      FUN_180184e54(&local_58,&local_58,*(undefined8 *)(CONCAT44(uStack_54,local_58) + 8));
      thunk_FUN_1802464a0(CONCAT44(uStack_54,local_58),0x40);
      FUN_180184986(local_d0,local_d0,local_d0[0][1]);
      thunk_FUN_1802464a0(local_d0[0],0x68);
      return;
    }
    if (*(int *)((longlong)local_128[0] + 0x2c) != 0) {
      cVar6 = FUN_1801848f2(local_d0,(longlong)local_128[0] + 0x2c);
      if (cVar6 == '\0') {
        local_140 = (char *)CONCAT44(local_140._4_4_,*(undefined4 *)(ppuVar2 + 4));
        if (local_88 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_1802398e0();
        }
        (**(code **)(*local_88 + 0x10))(local_88,&local_118,&local_140);
        FUN_1801859da(&local_78,&local_118);
        FUN_18017fb46(local_f0);
        FUN_180001ef2(&uStack_110);
      }
    }
    FUN_180016c4c(local_128);
  } while( true );
}

