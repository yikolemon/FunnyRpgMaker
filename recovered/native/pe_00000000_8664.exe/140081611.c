/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140081611 */

void FUN_140081611(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  byte bVar7;
  
  lVar1 = DAT_140f2a910;
  if ((((param_2 != 0 && param_3 == '\x01') && (*(longlong *)(param_2 + 0x98) != 0)) &&
      ((*(byte *)(*(longlong *)(param_2 + 0x98) + 0x14) & 4) == 0)) &&
     (lVar2 = param_2, (*(byte *)(param_2 + 0x10) & 0x80) == 0)) {
    do {
      lVar6 = lVar2;
      lVar2 = *(longlong *)(lVar6 + 0x18);
    } while (*(longlong *)(lVar6 + 0x18) != 0);
    if ((*(longlong *)(lVar6 + 0xa8) != param_2) || (*(longlong *)(lVar6 + 0xa0) != 0)) {
      bVar4 = 0;
      cVar3 = FUN_1400816f9(0,DAT_1401c86a4);
      bVar7 = 0;
      if (cVar3 != '\0') {
        FUN_140081714(lVar1,param_2);
        return;
      }
      goto LAB_1400816b5;
    }
  }
  bVar4 = FUN_1400816f9(0,DAT_1401c86a4);
  bVar7 = 1;
LAB_1400816b5:
  bVar5 = FUN_1400816ee(0,0);
  if ((((bVar5 | bVar4) & bVar7) == 1) && (*(longlong *)(lVar1 + 0x1628) != param_1)) {
    FUN_14008135a(param_1);
    return;
  }
  return;
}

