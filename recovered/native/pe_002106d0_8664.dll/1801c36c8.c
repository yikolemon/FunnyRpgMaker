/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c36c8 */

void FUN_1801c36c8(longlong param_1,longlong param_2)

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
  
  local_70 = DAT_180402640 ^ (ulonglong)auStack_c8;
  FUN_180107e9e("imgui_demo.cpp",0x25e3,"Examples/Property editor");
  local_78 = (ulonglong)DAT_1803290e0;
  cVar4 = FUN_180110d11(&DAT_180369cc2,&local_78,0x105,0);
  if (cVar4 != '\0') {
    FUN_18011648a(4,1);
    FUN_180135c3a("Use Clipper",(char *)(param_1 + 0x120));
    FUN_180119893(0,DAT_1802bb8e0);
    FUN_1801330a5("(%d root nodes)",*(undefined4 *)(param_2 + 0x28));
    FUN_1800ffdb5(DAT_1802de9b4);
    FUN_180119400(0x1227,0x40000);
    puStack_a0 = (undefined8 *)0x0;
    puStack_98 = (undefined8 *)0x0;
    local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,0x80);
    cVar4 = FUN_18014630d("##Filter","incl,-excl",param_1,0x100);
    if (cVar4 != '\0') {
      FUN_1800ffc10(param_1);
    }
    FUN_180116548();
    local_78 = 0;
    local_a8 = (undefined8 *)((ulonglong)local_a8 & 0xffffffff00000000);
    cVar4 = FUN_180164c18("##list",1,0x40);
    if (cVar4 != '\0') {
      if (*(char *)(param_1 + 0x120) == '\x01') {
        FUN_1801c3a8e(param_1,param_2);
      }
      else {
        FUN_1801c3b62(param_1,param_2);
      }
      FUN_180168430();
    }
  }
  FUN_180111339();
  FUN_180119893(0,DAT_1802bb8e0);
  FUN_18011a496();
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    FUN_1801330a5("%s",lVar1);
    FUN_18013320f("UID: 0x%08X",*(undefined4 *)(lVar1 + 0x1c));
    FUN_180137ca1();
    local_78 = 0;
    local_a8 = (undefined8 *)((ulonglong)local_a8 & 0xffffffff00000000);
    cVar4 = FUN_180164c18("##properties",2,0x2000001,&local_78);
    if (cVar4 != '\0') {
      FUN_18011810d(*(undefined4 *)(lVar1 + 0x1c));
      FUN_18016a158(&DAT_1803861e4,0x10,0,0);
      FUN_18016a158(&DAT_1803861e4,8,DAT_1802de650,0);
      uVar3 = DAT_1802de9b4;
      if (*(char *)(lVar1 + 0x3c) == '\x01') {
        lVar5 = 0x10;
        do {
          FUN_18016a67b(0,0);
          uVar2 = *(undefined8 *)((longlong)&PTR_s_Pauciloquent_180328dd0 + lVar5);
          FUN_180117f98(uVar2);
          FUN_18016ab34();
          FUN_18013799d();
          FUN_18013309a(uVar2,0);
          FUN_18016ab34();
          if (*(int *)(&UNK_180328dd8 + lVar5) - 4U < 8) {
            lVar6 = *(int *)((longlong)&PTR_s_MyName_180328de0 + lVar5) + lVar1;
            switch(*(int *)(&UNK_180328dd8 + lVar5)) {
            case 4:
              local_78 = CONCAT44(local_78._4_4_,0x80000000);
              local_7c = 0x7fffffff;
              FUN_1800ffdb5(uVar3);
              local_88 = 0;
              local_90 = 0;
              local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,0x3f800000);
              puStack_a0 = &local_78;
              puStack_98 = (undefined8 *)&local_7c;
              FUN_18013d112("##Editor",4,lVar6);
              break;
            case 8:
              local_78 = (ulonglong)local_78._4_4_ << 0x20;
              local_7c = 0x3f800000;
              FUN_1800ffdb5(uVar3);
              local_90 = local_90 & 0xffffffff00000000;
              puStack_98 = (undefined8 *)0x0;
              local_a8 = &local_78;
              puStack_a0 = (undefined8 *)&local_7c;
              FUN_1801411fe("##Editor",8,lVar6);
              break;
            case 10:
              FUN_180135c3a();
              break;
            case 0xb:
              local_a8 = (undefined8 *)0x0;
              puStack_a0 = (undefined8 *)0x0;
              FUN_180145e1f("##Editor",lVar6,0x1c,0);
            }
          }
          FUN_18011834f();
          lVar5 = lVar5 + 0x18;
        } while (lVar5 != 0x70);
      }
      FUN_18011834f();
      FUN_180168430();
    }
  }
  FUN_18011949a();
  if (DAT_180402640 == (local_70 ^ (ulonglong)auStack_c8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_70 ^ (ulonglong)auStack_c8);
}

