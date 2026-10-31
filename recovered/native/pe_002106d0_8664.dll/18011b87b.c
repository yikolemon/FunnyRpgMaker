/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011b87b */

undefined8 FUN_18011b87b(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  lVar2 = DAT_180419160;
  if (*(char *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10e) != '\0') {
    return 0;
  }
  if (param_1 == 0) {
    uVar1 = *(undefined4 *)(DAT_180419160 + 0x1fe0);
    uVar4 = uVar1;
  }
  else {
    uVar4 = FUN_180106d4e(*(longlong *)(DAT_180419160 + 0x1608),param_1,0);
    uVar1 = *(undefined4 *)(lVar2 + 0x1fe0);
  }
  cVar3 = FUN_18011b73a(param_2,uVar1);
  if (cVar3 != '\0') {
    FUN_18011ace5(uVar4,param_2);
  }
  uVar5 = FUN_18011b34f(uVar4,0x141);
  return uVar5;
}

