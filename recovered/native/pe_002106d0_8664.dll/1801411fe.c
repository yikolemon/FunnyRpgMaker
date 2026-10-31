/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801411fe */

byte FUN_1801411fe(longlong param_1,int param_2,longlong param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,uint param_8)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  byte bVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  
  lVar1 = DAT_180419160;
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
  if (*(char *)(*(longlong *)(lVar1 + 0x1608) + 0x10e) == '\0') {
    FUN_18011a496();
    FUN_180117f98(param_1);
    uVar8 = FUN_18011a39a();
    FUN_18011a13a(param_4,uVar8);
    if ((int)param_4 < 1) {
      bVar5 = 0;
    }
    else {
      lVar4 = *(longlong *)(&DAT_1802decd0 + (longlong)param_2 * 0x20);
      puVar6 = &DAT_1802dee50;
      uVar7 = 0;
      bVar5 = 0;
      do {
        FUN_18011810d(uVar7 & 0xffffffff);
        if (uVar7 != 0) {
          FUN_180119893(0,*(undefined4 *)(lVar1 + 0xe0c));
        }
        lVar2 = DAT_180419160;
        if ((param_8 >> 0xc & 1) != 0) {
          uVar8 = *puVar6;
          *(uint *)(DAT_180419160 + 0x1fa8) = *(uint *)(DAT_180419160 + 0x1fa8) | 0x20;
          *(undefined4 *)(lVar2 + 0x1fdc) = uVar8;
        }
        bVar3 = FUN_180140c58(&DAT_1803861e4,param_2,param_3,param_5,param_6,param_7,param_8);
        bVar5 = bVar5 | bVar3;
        FUN_18011834f();
        FUN_18011a356();
        param_3 = param_3 + lVar4;
        uVar7 = uVar7 + 1;
        puVar6 = puVar6 + 1;
      } while (param_4 != uVar7);
    }
    FUN_18011834f();
    lVar4 = FUN_180101d94(param_1,0);
    if (param_1 != lVar4) {
      FUN_180119893(0,*(undefined4 *)(lVar1 + 0xe0c));
      FUN_180132c30(param_1,lVar4,0);
    }
    FUN_18011949a();
  }
  else {
    bVar5 = 0;
  }
  return bVar5 & 1;
}

