/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801702a5 */

void FUN_1801702a5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  FUN_180044980(&DAT_1804193d8);
  lVar1 = DAT_180419438;
  lVar2 = DAT_180419430;
  if (DAT_180419430 != DAT_180419438) {
    do {
      FUN_18017fc5e(&DAT_180419430,lVar2,param_3,param_4,uVar3);
      lVar2 = lVar2 + 0x40;
    } while (lVar2 != lVar1);
    DAT_180419438 = DAT_180419430;
  }
  lVar1 = DAT_180419458;
  lVar2 = DAT_180419450;
  if (DAT_180419450 != DAT_180419458) {
    do {
      FUN_18017fe15(lVar2);
      lVar2 = lVar2 + 0x40;
    } while (lVar2 != lVar1);
    DAT_180419458 = DAT_180419450;
  }
  FUN_18017037a();
  FUN_18023d6e0(&DAT_1804193d8);
  return;
}

