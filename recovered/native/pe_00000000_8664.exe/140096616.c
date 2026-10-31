/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140096616 */

void FUN_140096616(void)

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
  
  local_50 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  lVar5 = DAT_140f2a910 + 0x2a84;
  FUN_1400912b0("LogButtons");
  local_58 = 0;
  cVar2 = FUN_1400ad187("Log To TTY",&local_58);
  uVar1 = DAT_1401c86a4;
  FUN_140092bab(0,DAT_1401c86a4);
  local_58 = 0;
  cVar3 = FUN_1400ad187("Log To File",&local_58);
  FUN_140092bab(0,uVar1);
  local_58 = 0;
  cVar4 = FUN_1400ad187("Log To Clipboard",&local_58);
  FUN_140092bab(0,uVar1);
  FUN_14008f7a2(1,1);
  local_68 = CONCAT44(local_68._4_4_,0xbf800000);
  FUN_14007b686(&local_58,&DAT_140ecdcdc,0,0);
  FUN_140079071((undefined4)local_58);
  local_68 = 0;
  local_60 = 0;
  FUN_1400ba55a("Default Depth",lVar5,0,9);
  FUN_14008f860();
  FUN_140091667();
  if (cVar2 != '\0') {
    FUN_14009657d(0xffffffff);
  }
  if (cVar3 != '\0') {
    FUN_1400965b5(0xffffffff,0);
  }
  if (cVar4 != '\0') {
    FUN_14008e61f(0xffffffff);
  }
  if (DAT_140f17b40 == (local_50 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_50 ^ (ulonglong)auStack_88);
}

