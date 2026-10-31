/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404824be */

ulonglong Unwind_1404824be(void)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  longlong unaff_RSI;
  int iVar4;
  
  iVar4 = *(int *)(unaff_RSI + 0x14);
  if (iVar4 + 0x76cU < 10000) {
    iVar1 = FUN_140481ae4(iVar4,*(undefined4 *)(unaff_RSI + 0x18),*(undefined4 *)(unaff_RSI + 0x1c))
    ;
    if (iVar1 == 0) {
      iVar4 = iVar4 + -1;
    }
    else if (iVar1 < 1) {
      iVar4 = iVar4 + 1;
    }
    FUN_140481994(iVar4 + 0x76c,4);
    uVar2 = FUN_140482a98();
    return uVar2;
  }
  puVar3 = (undefined4 *)FUN_14048fb3c();
  *puVar3 = 0x16;
  uVar2 = FUN_1404a1f20();
  return uVar2 & 0xffffffffffffff00;
}

