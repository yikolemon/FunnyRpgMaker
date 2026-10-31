/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400bedbc */

byte FUN_1400bedbc(longlong param_1,int param_2,longlong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  
  lVar1 = DAT_140f2a910;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  if (*(char *)(*(longlong *)(lVar1 + 0x1608) + 0x10e) == '\0') {
    FUN_1400937ae();
    FUN_1400912b0(param_1);
    uVar6 = FUN_1400936b2();
    FUN_140093452(param_4,uVar6);
    iVar5 = 0;
    if (param_4 < 1) {
      bVar4 = 0;
    }
    else {
      lVar3 = *(longlong *)(&DAT_140211a40 + (longlong)param_2 * 0x20);
      bVar4 = 0;
      do {
        FUN_140091425(iVar5);
        if (iVar5 != 0) {
          FUN_140092bab(0,*(undefined4 *)(lVar1 + 0xe0c));
        }
        bVar2 = FUN_1400be984(&DAT_140edcdbf,param_2,param_3,param_5,param_6,param_7,param_8);
        bVar4 = bVar4 | bVar2;
        FUN_140091667();
        FUN_14009366e();
        param_3 = param_3 + lVar3;
        iVar5 = iVar5 + 1;
      } while (param_4 != iVar5);
    }
    FUN_140091667();
    lVar3 = FUN_14007b050(param_1,0);
    if (param_1 != lVar3) {
      FUN_140092bab(0,*(undefined4 *)(lVar1 + 0xe0c));
      FUN_1400abb60(param_1,lVar3,0);
    }
    FUN_1400927b2();
  }
  else {
    bVar4 = 0;
  }
  return bVar4 & 1;
}

