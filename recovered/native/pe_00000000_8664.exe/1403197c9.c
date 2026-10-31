/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403197c9 */

void FUN_1403197c9(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  byte bVar7;
  
  lVar1 = DAT_14062a630;
  if ((((param_2 != 0 && param_3 == '\x01') && (*(longlong *)(param_2 + 0x98) != 0)) &&
      ((*(byte *)(*(longlong *)(param_2 + 0x98) + 0x14) & 4) == 0)) &&
     (lVar2 = param_2, (*(byte *)(param_2 + 0x10) & 0x80) == 0)) {
    do {
      lVar6 = lVar2;
      lVar2 = *(longlong *)(lVar6 + 0x18);
    } while (*(longlong *)(lVar6 + 0x18) != 0);
    if ((*(longlong *)(lVar6 + 0xa8) != param_2) || (*(longlong *)(lVar6 + 0xa0) != 0)) {
      bVar4 = 0;
      cVar3 = FUN_1403198b1(0,DAT_1404ccdb0);
      bVar7 = 0;
      if (cVar3 != '\0') {
        FUN_1403198cc(lVar1,param_2);
        return;
      }
      goto LAB_14031986d;
    }
  }
  bVar4 = FUN_1403198b1(0,DAT_1404ccdb0);
  bVar7 = 1;
LAB_14031986d:
  bVar5 = FUN_1403198a6(0,0);
  if ((((bVar5 | bVar4) & bVar7) == 1) && (*(longlong *)(lVar1 + 0x1628) != param_1)) {
    FUN_140319512(param_1);
    return;
  }
  return;
}

