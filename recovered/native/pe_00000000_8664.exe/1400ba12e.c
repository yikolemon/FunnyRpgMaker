/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ba12e */

byte FUN_1400ba12e(longlong param_1,int param_2,longlong param_3,uint param_4,undefined8 param_5,
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
  
  lVar1 = DAT_140f2a910;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  if (*(char *)(*(longlong *)(lVar1 + 0x1608) + 0x10e) == '\0') {
    FUN_1400937ae();
    FUN_1400912b0(param_1);
    uVar8 = FUN_1400936b2();
    FUN_140093452(param_4,uVar8);
    if ((int)param_4 < 1) {
      bVar5 = 0;
    }
    else {
      lVar4 = *(longlong *)(&DAT_140211a40 + (longlong)param_2 * 0x20);
      puVar6 = &DAT_140211bc0;
      uVar7 = 0;
      bVar5 = 0;
      do {
        FUN_140091425(uVar7 & 0xffffffff);
        if (uVar7 != 0) {
          FUN_140092bab(0,*(undefined4 *)(lVar1 + 0xe0c));
        }
        lVar2 = DAT_140f2a910;
        if ((param_8 >> 0xc & 1) != 0) {
          uVar8 = *puVar6;
          *(uint *)(DAT_140f2a910 + 0x1fa8) = *(uint *)(DAT_140f2a910 + 0x1fa8) | 0x20;
          *(undefined4 *)(lVar2 + 0x1fdc) = uVar8;
        }
        bVar3 = FUN_1400b9b88(&DAT_140edcdbf,param_2,param_3,param_5,param_6,param_7,param_8);
        bVar5 = bVar5 | bVar3;
        FUN_140091667();
        FUN_14009366e();
        param_3 = param_3 + lVar4;
        uVar7 = uVar7 + 1;
        puVar6 = puVar6 + 1;
      } while (param_4 != uVar7);
    }
    FUN_140091667();
    lVar4 = FUN_14007b050(param_1,0);
    if (param_1 != lVar4) {
      FUN_140092bab(0,*(undefined4 *)(lVar1 + 0xe0c));
      FUN_1400abb60(param_1,lVar4,0);
    }
    FUN_1400927b2();
  }
  else {
    bVar5 = 0;
  }
  return bVar5 & 1;
}

