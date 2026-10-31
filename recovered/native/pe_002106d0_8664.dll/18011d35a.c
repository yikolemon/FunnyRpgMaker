/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011d35a */

void FUN_18011d35a(void)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_180402640 ^ (ulonglong)auStack_88;
  lVar5 = DAT_180419160 + 0x2a84;
  FUN_180117f98("LogButtons");
  local_58 = 0;
  cVar2 = FUN_180134257("Log To TTY",&local_58);
  uVar1 = DAT_1802bb8e0;
  FUN_180119893(0,DAT_1802bb8e0);
  local_58 = 0;
  cVar3 = FUN_180134257("Log To File",&local_58);
  FUN_180119893(0,uVar1);
  local_58 = 0;
  cVar4 = FUN_180134257("Log To Clipboard",&local_58);
  FUN_180119893(0,uVar1);
  FUN_18011648a(1,1);
  local_68 = CONCAT44(local_68._4_4_,0xbf800000);
  FUN_1801023ca(&local_58,&DAT_18036dbe6,0,0);
  FUN_1800ffdb5((undefined4)local_58);
  local_68 = 0;
  local_60 = 0;
  FUN_18014162a("Default Depth",lVar5,0,9);
  FUN_180116548();
  FUN_18011834f();
  if (cVar2 != '\0') {
    FUN_18011d2c1(0xffffffff);
  }
  if (cVar3 != '\0') {
    FUN_18011d2f9(0xffffffff,0);
  }
  if (cVar4 != '\0') {
    FUN_180115307(0xffffffff);
  }
  if (DAT_180402640 == (local_50 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_50 ^ (ulonglong)auStack_88);
}

