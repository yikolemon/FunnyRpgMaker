/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d3821 */

void FUN_1400d3821(byte param_1,longlong param_2,int param_3,longlong param_4,int param_5,
                  int param_6,uint param_7)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  lVar3 = FUN_1400d30d4();
  if (0 < (int)param_7) {
    bVar1 = *(byte *)(lVar3 + 0x20);
    uVar7 = 0;
    lVar3 = param_4;
    lVar6 = param_2;
    do {
      if ((param_1 & (bVar1 ^ 1)) == 0) {
        FUN_1401c5180(uVar7 * (longlong)param_5 + param_4,uVar7 * (longlong)param_3 + param_2,
                      (longlong)(param_6 * 4));
      }
      else if (0 < param_6) {
        lVar4 = 0;
        uVar5 = param_6 + 1;
        do {
          uVar2 = *(uint *)(lVar6 + lVar4);
          *(uint *)(lVar3 + lVar4) =
               (uVar2 & 0xff) << 0x10 | uVar2 >> 0x10 & 0xff | uVar2 & 0xff00ff00;
          uVar5 = uVar5 - 1;
          lVar4 = lVar4 + 4;
        } while (1 < uVar5);
      }
      uVar7 = uVar7 + 1;
      lVar3 = lVar3 + param_5;
      lVar6 = lVar6 + param_3;
    } while (uVar7 != param_7);
  }
  return;
}

