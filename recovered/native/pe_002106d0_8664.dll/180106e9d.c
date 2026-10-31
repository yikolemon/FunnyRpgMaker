/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180106e9d */

void FUN_180106e9d(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = DAT_180419160;
  if (*(longlong *)(DAT_180419160 + 0x2130) != 0) {
    *(undefined8 *)(DAT_180419160 + 0x2128) = 0;
    FUN_1800fe8d4();
    *(undefined8 *)(lVar1 + 0x2130) = 0;
  }
  if (*(longlong *)(lVar1 + 0x2140) != 0) {
    *(undefined8 *)(lVar1 + 0x2138) = 0;
    FUN_1800fe8d4();
    *(undefined8 *)(lVar1 + 0x2140) = 0;
  }
  if (*(longlong *)(lVar1 + 0x2730) != 0) {
    *(undefined8 *)(lVar1 + 0x2728) = 0;
    FUN_1800fe8d4();
    *(undefined8 *)(lVar1 + 0x2730) = 0;
  }
  *(undefined4 *)(lVar1 + 0x2738) = 0;
  *(undefined4 *)(lVar1 + 0x2640) = 0;
  iVar2 = *(int *)(lVar1 + 0x2648);
  if (0 < iVar2) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar1 + 0x2650) + 8 + lVar3) != 0) {
        FUN_1800fe8d4();
        iVar2 = *(int *)(lVar1 + 0x2648);
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x58;
    } while (lVar4 < iVar2);
  }
  if (*(longlong *)(lVar1 + 0x2650) != 0) {
    *(undefined8 *)(lVar1 + 0x2648) = 0;
    FUN_1800fe8d4();
    *(undefined8 *)(lVar1 + 0x2650) = 0;
  }
  FUN_18016d7bd();
  iVar2 = *(int *)(lVar1 + 0x1300);
  if ((longlong)iVar2 != 0) {
    lVar1 = *(longlong *)(lVar1 + 0x1308);
    lVar3 = 0;
    do {
      thunk_FUN_180195e5f(*(undefined8 *)(lVar1 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar2 * 8 != lVar3);
  }
  return;
}

