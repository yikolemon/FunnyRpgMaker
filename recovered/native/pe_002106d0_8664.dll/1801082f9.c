/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801082f9 */

void FUN_1801082f9(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  byte bVar7;
  
  lVar1 = DAT_180419160;
  if ((((param_2 != 0 && param_3 == '\x01') && (*(longlong *)(param_2 + 0x98) != 0)) &&
      ((*(byte *)(*(longlong *)(param_2 + 0x98) + 0x14) & 4) == 0)) &&
     (lVar2 = param_2, (*(byte *)(param_2 + 0x10) & 0x80) == 0)) {
    do {
      lVar6 = lVar2;
      lVar2 = *(longlong *)(lVar6 + 0x18);
    } while (*(longlong *)(lVar6 + 0x18) != 0);
    if ((*(longlong *)(lVar6 + 0xa8) != param_2) || (*(longlong *)(lVar6 + 0xa0) != 0)) {
      bVar4 = 0;
      cVar3 = FUN_1801083e1(0,DAT_1802bb8e0);
      bVar7 = 0;
      if (cVar3 != '\0') {
        FUN_1801083fc(lVar1,param_2);
        return;
      }
      goto LAB_18010839d;
    }
  }
  bVar4 = FUN_1801083e1(0,DAT_1802bb8e0);
  bVar7 = 1;
LAB_18010839d:
  bVar5 = FUN_1801083d6(0,0);
  if ((((bVar5 | bVar4) & bVar7) == 1) && (*(longlong *)(lVar1 + 0x1628) != param_1)) {
    FUN_180108042(param_1);
    return;
  }
  return;
}

