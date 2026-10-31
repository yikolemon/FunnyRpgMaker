/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140113cb0 */

longlong FUN_140113cb0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  plVar2 = (longlong *)FUN_140114bcc();
  if ((plVar2 != (longlong *)0x0) && (param_1 != 0)) {
    uVar5 = 0xffffffffffffffff;
    do {
      uVar5 = uVar5 + 1;
    } while (*(char *)(param_1 + uVar5) != '\0');
    lVar3 = *plVar2;
    while (lVar3 != 0) {
      uVar4 = 0xffffffffffffffff;
      do {
        uVar4 = uVar4 + 1;
      } while (*(char *)(lVar3 + uVar4) != '\0');
      if (((uVar5 < uVar4) && (*(char *)(lVar3 + uVar5) == '=')) &&
         (iVar1 = FUN_140129db0(lVar3,param_1,uVar5), iVar1 == 0)) {
        return *plVar2 + 1 + uVar5;
      }
      plVar2 = plVar2 + 1;
      lVar3 = *plVar2;
    }
  }
  return 0;
}

