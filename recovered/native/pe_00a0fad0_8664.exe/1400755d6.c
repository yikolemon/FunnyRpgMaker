/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400755d6 */

ulonglong FUN_1400755d6(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  longlong local_40;
  longlong local_38;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_1400ae170(&local_40);
  FUN_14000550c(local_60,param_2,0);
  FUN_140055d5e(local_60,local_80);
  FUN_14000892c(local_a0,local_80);
  lVar1 = local_38;
  uVar4 = (undefined7)((ulonglong)local_38 >> 8);
  if (local_40 == local_38) {
    uVar3 = CONCAT71(uVar4,1);
  }
  else {
    lVar5 = local_40;
    do {
      cVar2 = FUN_14001014c(lVar5,local_a0);
      lVar6 = lVar5;
      if (cVar2 != '\0') break;
      lVar5 = lVar5 + 0x20;
      lVar6 = lVar1;
    } while (lVar5 != lVar1);
    uVar3 = CONCAT71(uVar4,lVar6 == local_38);
  }
  FUN_140005242(local_a0);
  FUN_140005690(local_80);
  FUN_140005690(local_60);
  FUN_140041304(&local_40);
  return uVar3 & 0xffffffff;
}

