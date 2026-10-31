/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d4c59 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800d4c59(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_20 [2];
  
  local_20[1] = 0xfffffffffffffffe;
  local_20[0] = param_2;
  FUN_180044980(&DAT_180402770);
  uVar1 = FUN_1800dbb7b(local_20);
  lVar2 = (uVar1 & _DAT_1804180f8) * 0x10;
  lVar3 = *(longlong *)(DAT_1804180e0 + 8 + lVar2);
  if (lVar3 != DAT_1804180d0) {
    if (local_20[0] != *(longlong *)(lVar3 + 0x10)) {
      do {
        if (lVar3 == *(longlong *)(DAT_1804180e0 + lVar2)) goto LAB_1800d4ce4;
        lVar3 = *(longlong *)(lVar3 + 8);
      } while (local_20[0] != *(longlong *)(lVar3 + 0x10));
    }
    if (lVar3 != DAT_1804180d0) {
      FUN_1800aea26(param_1,lVar3 + 0x20,lVar3 + 0x60);
      goto LAB_1800d4ced;
    }
  }
LAB_1800d4ce4:
  FUN_1800d4a44(param_1);
LAB_1800d4ced:
  FUN_18023d6e0(&DAT_180402770);
  return param_1;
}

