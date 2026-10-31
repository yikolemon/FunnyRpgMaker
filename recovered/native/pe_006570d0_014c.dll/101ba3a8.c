/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ba3a8 */

void __thiscall FUN_101ba3a8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_20;
  undefined8 local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&uStack_20;
  FUN_101032c6("imgui_demo.cpp",0x25e3,"Examples/Property editor");
  local_1c = (ulonglong)DAT_10302780;
  cVar3 = FUN_1010c081(&DAT_10339b98,&local_1c,0x105,0);
  if (cVar3 != '\0') {
    FUN_1011177d(4,1);
    FUN_1012ff1a("Use Clipper",(char *)(param_1 + 0x114));
    FUN_10114a0e(0,0xbf800000);
    FUN_1012d08c("(%d root nodes)",*(undefined4 *)(param_2 + 0x24));
    FUN_100fb68f(0x80800000);
    FUN_101145b7(0x1227,0x40000);
    cVar3 = FUN_10141b2a("##Filter","incl,-excl",param_1,(undefined4)DAT_10302aa0,DAT_10302aa0._4_4_
                         ,0,0);
    if (cVar3 != '\0') {
      FUN_100fb51c();
    }
    FUN_10111839();
    local_1c = 0;
    cVar3 = FUN_1015f834("##list",1,0x40,&local_1c,0);
    if (cVar3 != '\0') {
      if (*(char *)(param_1 + 0x114) == '\x01') {
        FUN_101ba6fc(param_2);
      }
      else {
        FUN_101ba7ea(param_2);
      }
      FUN_1016304e();
    }
  }
  FUN_1010c644();
  FUN_10114a0e(0,0xbf800000);
  FUN_10115649();
  iVar1 = *(int *)(param_1 + 0x110);
  if (iVar1 != 0) {
    FUN_1012d08c("%s",iVar1);
    FUN_1012d1be("UID: 0x%08X",*(undefined4 *)(iVar1 + 0x1c));
    FUN_10132188();
    local_1c = 0;
    cVar3 = FUN_1015f834("##properties",2,0x2000001,&local_1c,0);
    if (cVar3 != '\0') {
      FUN_10113358(*(undefined4 *)(iVar1 + 0x1c));
      FUN_10164e8b(&DAT_10356101,0x10,0,0);
      FUN_10164e8b(&DAT_10356101,8,0x40000000,0);
      if (*(char *)(iVar1 + 0x34) == '\x01') {
        iVar4 = -0x40;
        do {
          FUN_10165364(0,0);
          uVar2 = *(undefined4 *)((int)&PTR_s_Between_100x100_and_500x500_103024ec + iVar4);
          FUN_101131fa(uVar2);
          FUN_101657a1();
          FUN_10131ed3();
          FUN_1012d079(uVar2,0);
          FUN_101657a1();
          if (*(int *)((int)&PTR_s_At_least_100x100_103024f0 + iVar4) - 4U < 8) {
            iVar5 = *(int *)((int)&PTR_s_Resize_horizontal___lock_current_103024f8 + iVar4) + iVar1;
            switch(*(int *)((int)&PTR_s_At_least_100x100_103024f0 + iVar4)) {
            case 4:
              local_1c = CONCAT44(local_1c._4_4_,0x80000000);
              uStack_20 = 0x7fffffff;
              FUN_100fb68f(0x80800000);
              FUN_10137dbc("##Editor",4,iVar5,*(undefined4 *)(&UNK_103024f4 + iVar4),0x3f800000,
                           &local_1c,&uStack_20,0,0);
              break;
            case 8:
              local_1c = (ulonglong)local_1c._4_4_ << 0x20;
              uStack_20 = 0x3f800000;
              FUN_100fb68f(0x80800000);
              FUN_1013d123("##Editor",8,iVar5,*(undefined4 *)(&UNK_103024f4 + iVar4),&local_1c,
                           &uStack_20,0,0);
              break;
            case 10:
              FUN_1012ff1a("##Editor",iVar5);
              break;
            case 0xb:
              FUN_10141729("##Editor",iVar5,DAT_10302ab0,0,0,0);
            }
          }
          FUN_10113568();
          iVar4 = iVar4 + 0x10;
        } while (iVar4 != 0);
      }
      FUN_10113568();
      FUN_1016304e();
    }
  }
  FUN_1011462f();
  if (DAT_10388d00 == (local_14 ^ (uint)&uStack_20)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

