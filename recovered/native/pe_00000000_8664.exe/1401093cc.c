/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401093cc */

void FUN_1401093cc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  ulonglong local_90;
  undefined4 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_140f17b40 ^ (ulonglong)auStack_c8;
  FUN_1400811b6("imgui_demo.cpp",0x25e3,"Examples/Property editor");
  local_78 = (ulonglong)DAT_1401c8650;
  cVar4 = FUN_14008a029(&DAT_140ecab19,&local_78,0x105,0);
  if (cVar4 != '\0') {
    FUN_14008f7a2(4,1);
    FUN_1400aeb6a("Use Clipper",(char *)(param_1 + 0x120));
    FUN_140092bab(0,DAT_1401c86a4);
    FUN_1400abfd5("(%d root nodes)",*(undefined4 *)(param_2 + 0x28));
    FUN_140079071(DAT_140211724);
    FUN_140092718(0x1227,0x40000);
    puStack_a0 = (undefined8 *)0x0;
    puStack_98 = (undefined8 *)0x0;
    local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,0x80);
    cVar4 = FUN_1400bf23d("##Filter","incl,-excl",param_1,0x100);
    if (cVar4 != '\0') {
      FUN_140078ecc(param_1);
    }
    FUN_14008f860();
    local_78 = 0;
    local_a8 = (undefined8 *)((ulonglong)local_a8 & 0xffffffff00000000);
    cVar4 = FUN_14010cbe8("##list",1,0x40);
    if (cVar4 != '\0') {
      if (*(char *)(param_1 + 0x120) == '\x01') {
        FUN_140109792(param_1,param_2);
      }
      else {
        FUN_140109866(param_1,param_2);
      }
      FUN_140110400();
    }
  }
  FUN_14008a651();
  FUN_140092bab(0,DAT_1401c86a4);
  FUN_1400937ae();
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    FUN_1400abfd5("%s",lVar1);
    FUN_1400ac13f("UID: 0x%08X",*(undefined4 *)(lVar1 + 0x1c));
    FUN_1400b0bd1();
    local_78 = 0;
    local_a8 = (undefined8 *)((ulonglong)local_a8 & 0xffffffff00000000);
    cVar4 = FUN_14010cbe8("##properties",2,0x2000001,&local_78);
    if (cVar4 != '\0') {
      FUN_140091425(*(undefined4 *)(lVar1 + 0x1c));
      FUN_140112128(&DAT_140edcdbf,0x10,0,0);
      FUN_140112128(&DAT_140edcdbf,8,DAT_1402113a0,0);
      uVar3 = DAT_140211724;
      if (*(char *)(lVar1 + 0x3c) == '\x01') {
        lVar5 = 0x10;
        do {
          FUN_14011264b(0,0);
          uVar2 = *(undefined8 *)((longlong)&PTR_s_Pauciloquent_140e8d160 + lVar5);
          FUN_1400912b0(uVar2);
          FUN_140112b04();
          FUN_1400b08cd();
          FUN_1400abfca(uVar2,0);
          FUN_140112b04();
          if (*(int *)(&UNK_140e8d168 + lVar5) - 4U < 8) {
            lVar6 = *(int *)((longlong)&PTR_s_MyName_140e8d170 + lVar5) + lVar1;
            switch(*(int *)(&UNK_140e8d168 + lVar5)) {
            case 4:
              local_78 = CONCAT44(local_78._4_4_,0x80000000);
              local_7c = 0x7fffffff;
              FUN_140079071(uVar3);
              local_88 = 0;
              local_90 = 0;
              local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,0x3f800000);
              puStack_a0 = &local_78;
              puStack_98 = (undefined8 *)&local_7c;
              FUN_1400b6042("##Editor",4,lVar6);
              break;
            case 8:
              local_78 = (ulonglong)local_78._4_4_ << 0x20;
              local_7c = 0x3f800000;
              FUN_140079071(uVar3);
              local_90 = local_90 & 0xffffffff00000000;
              puStack_98 = (undefined8 *)0x0;
              local_a8 = &local_78;
              puStack_a0 = (undefined8 *)&local_7c;
              FUN_1400ba12e("##Editor",8,lVar6);
              break;
            case 10:
              FUN_1400aeb6a();
              break;
            case 0xb:
              local_a8 = (undefined8 *)0x0;
              puStack_a0 = (undefined8 *)0x0;
              FUN_1400bed4f("##Editor",lVar6,0x1c,0);
            }
          }
          FUN_140091667();
          lVar5 = lVar5 + 0x18;
        } while (lVar5 != 0x70);
      }
      FUN_140091667();
      FUN_140110400();
    }
  }
  FUN_1400927b2();
  if (DAT_140f17b40 == (local_70 ^ (ulonglong)auStack_c8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_70 ^ (ulonglong)auStack_c8);
}

