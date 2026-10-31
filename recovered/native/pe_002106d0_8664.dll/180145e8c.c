/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180145e8c */

byte FUN_180145e8c(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  
  lVar1 = DAT_180419160;
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
  if (*(char *)(*(longlong *)(lVar1 + 0x1608) + 0x10e) == '\0') {
    FUN_18011a496();
    FUN_180117f98(param_1);
    uVar6 = FUN_18011a39a();
    FUN_18011a13a(param_4,uVar6);
    iVar5 = 0;
    if (param_4 < 1) {
      bVar4 = 0;
    }
    else {
      lVar3 = *(longlong *)(&DAT_1802decd0 + (longlong)param_2 * 0x20);
      bVar4 = 0;
      do {
        FUN_18011810d(iVar5);
        if (iVar5 != 0) {
          FUN_180119893(0,*(undefined4 *)(lVar1 + 0xe0c));
        }
        bVar2 = FUN_180145a54(&DAT_1803861e4,param_2,param_3,param_5,param_6,param_7,param_8);
        bVar4 = bVar4 | bVar2;
        FUN_18011834f();
        FUN_18011a356();
        param_3 = param_3 + lVar3;
        iVar5 = iVar5 + 1;
      } while (param_4 != iVar5);
    }
    FUN_18011834f();
    lVar3 = FUN_180101d94(param_1,0);
    if (param_1 != lVar3) {
      FUN_180119893(0,*(undefined4 *)(lVar1 + 0xe0c));
      FUN_180132c30(param_1,lVar3,0);
    }
    FUN_18011949a();
  }
  else {
    bVar4 = 0;
  }
  return bVar4 & 1;
}

