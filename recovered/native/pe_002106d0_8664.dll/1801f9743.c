/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f9743 */

undefined8 FUN_1801f9743(void)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = FUN_1801f9916();
  lVar3 = 0;
  do {
    lVar2 = FUN_18026ee50(uVar1,&DAT_1803377a0 + lVar3);
    if (lVar2 != 0) {
      return 1;
    }
    lVar3 = lVar3 + 0x14;
  } while (lVar3 != 400);
  return 0;
}

