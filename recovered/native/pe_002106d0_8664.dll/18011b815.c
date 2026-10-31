/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011b815 */

void FUN_18011b815(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  
  lVar2 = DAT_180419160;
  uVar1 = *(undefined8 *)(DAT_180419160 + 0x1608);
  cVar3 = FUN_18011b73a(param_2,*(undefined4 *)(DAT_180419160 + 0x1fe0));
  if (cVar3 != '\0') {
    if (param_1 == 0) {
      uVar4 = *(undefined4 *)(lVar2 + 0x1fe0);
    }
    else {
      uVar4 = FUN_180106d4e(uVar1,param_1,0);
    }
    FUN_18011ace5(uVar4,param_2);
    return;
  }
  return;
}

