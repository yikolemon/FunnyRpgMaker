/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016e6fa */

void FUN_18016e6fa(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(DAT_180419160 + 0x1608);
  lVar2 = *(longlong *)(lVar1 + 0x208);
  if (*(int *)(lVar2 + 0x10) == 1) {
    return;
  }
  FUN_18016a90f(lVar1,lVar2 + 0x3c);
  FUN_180195542(lVar2 + 0x70,*(undefined8 *)(lVar1 + 800),*(int *)(lVar2 + 0xc) + 1);
  return;
}

