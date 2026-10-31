/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400bbd56 */

undefined8 FUN_1400bbd56(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 ****ppppuVar4;
  bool bVar5;
  int local_160 [2];
  undefined8 local_158;
  undefined1 local_150 [240];
  undefined8 local_60;
  int local_58;
  undefined8 ***local_50;
  undefined8 ***local_48;
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    FUN_14007de26(local_160,&DAT_1401cc978,"[WolfXWrapper] Data folder is empty");
    FUN_140052e4f(local_150);
    FUN_140052e84(local_160);
    uVar3 = 0;
  }
  else {
    FUN_14000550c(&local_50,param_1,0);
    FUN_140007025();
    local_60 = 0xffff00000000;
    ppppuVar4 = &local_50;
    if (7 < local_38) {
      ppppuVar4 = (undefined8 ****)local_50;
    }
    local_58 = FUN_1400dcbb0(ppppuVar4,local_160,3,0xffffffff);
    FUN_140007276(&local_60,local_58,local_160);
    iVar2 = local_58;
    local_158 = FUN_140007025();
    local_160[0] = iVar2;
    iVar1 = (int)local_60;
    if ((int)local_60 == 0) {
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_14004137b("exists",local_160,&local_50);
      }
      bVar5 = false;
    }
    else {
      FUN_140007025();
      bVar5 = iVar1 != 1;
    }
    FUN_140005690(&local_50);
    if (bVar5) {
      FUN_14000550c(local_160,param_1,0);
      FUN_1400bd2d1(&local_50,local_160);
      FUN_140005690(local_160);
      if (local_50 != local_48) {
        FUN_14007de26(local_160,&DAT_1401cc970,"Found ");
        FUN_1400cec44(local_150,((longlong)local_48 - (longlong)local_50 >> 3) * -0x3333333333333333
                     );
        FUN_1400ac2d3(local_150," WolfX files");
        FUN_140052e4f(local_150);
        FUN_140052e84(local_160);
        FUN_1400bc152(param_1);
        FUN_14007de26(local_160,&DAT_1401cc970,"Decrypting WolfX files ... ");
        FUN_140041192(local_150);
        FUN_140052e84(local_160);
        FUN_1400bf5f0(&local_50,param_1 + 0x20,0);
        FUN_14007de26(local_160,&DAT_1401cc970,"Done");
        FUN_140052e4f(local_150);
        FUN_140052e84(local_160);
      }
      FUN_1400c0cee(&local_50);
      uVar3 = 1;
    }
    else {
      FUN_14007de26(local_160,&DAT_1401cc978,"[WolfXWrapper] Data folder does not exist");
      FUN_140052e4f(local_150);
      FUN_140052e84(local_160);
      uVar3 = 0;
    }
  }
  return uVar3;
}

