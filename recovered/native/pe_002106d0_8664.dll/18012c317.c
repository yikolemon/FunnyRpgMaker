/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012c317 */

void FUN_18012c317(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  *(int *)(DAT_180419160 + 0xfc) = *(int *)(DAT_180419160 + 0xfc) + 1;
  lVar5 = *(longlong *)(param_1 + 800);
  if (1 < *(int *)(lVar5 + 0x8c)) {
    FUN_18018ecc2(lVar5 + 0x88,lVar5);
    lVar5 = *(longlong *)(param_1 + 800);
  }
  FUN_180195685(lVar2 + 200,*(undefined8 *)(lVar2 + 0x110 + (ulonglong)param_2 * 8),lVar5);
  iVar1 = *(int *)(param_1 + 0x1f0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1f8);
    lVar5 = 0;
    do {
      uVar3 = *(undefined8 *)(lVar2 + lVar5);
      cVar4 = FUN_18010f205(uVar3);
      if (cVar4 != '\0') {
        FUN_18012c317(uVar3,param_2);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}

