/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d4aa7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800d4aa7(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  uint *puVar4;
  uint local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  longlong local_30 [2];
  
  local_30[1] = 0xfffffffffffffffe;
  local_30[0] = param_1;
  FUN_180044980(&DAT_180402720);
  uVar1 = FUN_1800dbb7b(local_30);
  lVar2 = (uVar1 & _DAT_180418378) * 0x10;
  lVar3 = *(longlong *)(DAT_180418360 + 8 + lVar2);
  if (lVar3 != DAT_180418350) {
    if (local_30[0] != *(longlong *)(lVar3 + 0x10)) {
      do {
        if (lVar3 == *(longlong *)(DAT_180418360 + lVar2)) goto LAB_1800d4b7b;
        lVar3 = *(longlong *)(lVar3 + 8);
      } while (local_30[0] != *(longlong *)(lVar3 + 0x10));
    }
    if (lVar3 != DAT_180418350) {
      FUN_1800d57fb(&local_50,param_2);
      puVar4 = (uint *)(lVar3 + 0x40);
      if (puVar4 != &local_50) {
        FUN_180004c8c(puVar4);
        *(undefined8 *)(lVar3 + 0x50) = local_40;
        *(undefined8 *)(lVar3 + 0x58) = uStack_38;
        *puVar4 = local_50;
        *(undefined4 *)(lVar3 + 0x44) = uStack_4c;
        *(undefined4 *)(lVar3 + 0x48) = uStack_48;
        *(undefined4 *)(lVar3 + 0x4c) = uStack_44;
        local_40 = 0;
        uStack_38 = 0xf;
        local_50 = local_50 & 0xffffff00;
      }
      FUN_180001ef2(&local_50);
      FUN_1800d4bdc(local_30[0],puVar4);
    }
  }
LAB_1800d4b7b:
  FUN_18023d6e0(&DAT_180402720);
  return;
}

