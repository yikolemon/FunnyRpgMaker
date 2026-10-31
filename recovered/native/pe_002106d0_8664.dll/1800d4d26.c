/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d4d26 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800d4d26(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_20 [2];
  
  local_20[1] = 0xfffffffffffffffe;
  local_20[0] = param_1;
  FUN_180044980(&DAT_180402770);
  uVar1 = FUN_1800dbb7b(local_20);
  lVar2 = (uVar1 & _DAT_1804180f8) * 0x10;
  lVar3 = *(longlong *)(DAT_1804180e0 + 8 + lVar2);
  if (lVar3 != DAT_1804180d0) {
    if (local_20[0] != *(longlong *)(lVar3 + 0x10)) {
      do {
        if (lVar3 == *(longlong *)(DAT_1804180e0 + lVar2)) goto LAB_1800d4db7;
        lVar3 = *(longlong *)(lVar3 + 8);
      } while (local_20[0] != *(longlong *)(lVar3 + 0x10));
    }
    if (lVar3 != DAT_1804180d0) {
      *(undefined8 *)(lVar3 + 0x60) = param_2;
      FUN_1800d4dee("_items",local_20[0],param_2);
    }
  }
LAB_1800d4db7:
  FUN_18023d6e0(&DAT_180402770);
  return;
}

