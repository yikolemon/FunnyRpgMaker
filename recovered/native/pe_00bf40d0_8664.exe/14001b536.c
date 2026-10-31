/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001b536 */

undefined8 FUN_14001b536(undefined1 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  
  if (param_2 - 1U < 0x7fffffff) {
    lVar4 = -0x7ffffffd;
    do {
      cVar2 = *(char *)(param_3 + 0x7ffffffd + lVar4);
      if (cVar2 == '\0') {
        param_1 = param_1 + lVar4 + 0x7ffffffd;
        uVar3 = 0;
        goto LAB_14001b5c0;
      }
      param_1[lVar4 + 0x7ffffffd] = cVar2;
      lVar1 = lVar4 + 1;
    } while ((lVar4 - param_2 != -0x7ffffffe) && (bVar5 = lVar4 != 0, lVar4 = lVar1, bVar5));
    bVar5 = lVar1 - param_2 == -0x7ffffffd;
    uVar3 = 0x8007007a;
    if (!bVar5) {
      uVar3 = 0;
    }
    param_1 = param_1 + (lVar1 - (ulonglong)bVar5) + 0x7ffffffd;
  }
  else {
    uVar3 = 0x80070057;
    if (param_2 == 0) {
      return uVar3;
    }
  }
LAB_14001b5c0:
  *param_1 = 0;
  return uVar3;
}

