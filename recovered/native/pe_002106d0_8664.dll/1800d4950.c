/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d4950 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800d4950(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_28 [2];
  
  local_28[1] = 0xfffffffffffffffe;
  local_28[0] = param_2;
  FUN_180044980(&DAT_180402720);
  uVar1 = FUN_1800dbb7b(local_28);
  lVar2 = (uVar1 & _DAT_180418378) * 0x10;
  lVar3 = *(longlong *)(DAT_180418360 + 8 + lVar2);
  if (lVar3 != DAT_180418350) {
    if (local_28[0] != *(longlong *)(lVar3 + 0x10)) {
      do {
        if (lVar3 == *(longlong *)(DAT_180418360 + lVar2)) goto LAB_1800d49d7;
        lVar3 = *(longlong *)(lVar3 + 8);
      } while (local_28[0] != *(longlong *)(lVar3 + 0x10));
    }
    if (lVar3 != DAT_180418350) {
      if (*(ulonglong *)(lVar3 + 0x58) < 0x10) {
        lVar2 = lVar3 + 0x40;
      }
      else {
        lVar2 = *(longlong *)(lVar3 + 0x40);
      }
      FUN_18028b424(lVar2,0,0);
      FUN_1800aea26(param_1,lVar3 + 0x20);
      goto LAB_1800d4a08;
    }
  }
LAB_1800d49d7:
  FUN_1800d4a44(param_1);
LAB_1800d4a08:
  FUN_18023d6e0(&DAT_180402720);
  return param_1;
}

