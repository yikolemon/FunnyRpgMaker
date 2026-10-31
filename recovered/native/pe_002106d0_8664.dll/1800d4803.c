/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d4803 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800d4803(longlong param_1,byte param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  longlong local_20 [2];
  
  local_20[1] = 0xfffffffffffffffe;
  local_20[0] = param_1;
  FUN_180044980(&DAT_1804026d0);
  uVar1 = FUN_1800dbb7b(local_20);
  lVar2 = (uVar1 & _DAT_1804182d8) * 0x10;
  lVar3 = *(longlong *)(DAT_1804182c0 + 8 + lVar2);
  if (lVar3 != DAT_1804182b0) {
    if (local_20[0] != *(longlong *)(lVar3 + 0x10)) {
      do {
        if (lVar3 == *(longlong *)(DAT_1804182c0 + lVar2)) goto LAB_1800d488d;
        lVar3 = *(longlong *)(lVar3 + 8);
      } while (local_20[0] != *(longlong *)(lVar3 + 0x10));
    }
    if (lVar3 != DAT_1804182b0) {
      *(ulonglong *)(lVar3 + 0x60) = (ulonglong)param_2;
      FUN_1800d48c4(local_20[0],CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_2) & 0xffffffff);
    }
  }
LAB_1800d488d:
  FUN_18023d6e0(&DAT_1804026d0);
  return;
}

