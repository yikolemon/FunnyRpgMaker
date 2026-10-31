/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140799ccc */

void FUN_140799ccc(ulonglong param_1)

{
  undefined1 uVar1;
  uint unaff_EBX;
  ulonglong uVar2;
  ulonglong uStack_20;
  
  uVar2 = param_1 & 0xffffffff;
  uStack_20 = (ulonglong)unaff_EBX;
  FUN_140799d56(param_1,*(undefined4 *)(param_1 + 4));
  *(undefined1 *)(uVar2 + 0x54) = 1;
  *(undefined8 *)((ulonglong)((int)&uStack_20 + 4) - 8) = 0x140799cec;
  FUN_14079a3b4(uVar2);
  uVar1 = 0;
  if ((((unaff_EBX & 0xffbffffb) != 0x200000) &&
      ((6 < unaff_EBX - 0x200006 || ((0x49U >> (unaff_EBX - 0x200006 & 0x1f) & 1) == 0)))) &&
     ((6 < unaff_EBX - 0x600006 || ((0x49U >> (unaff_EBX - 0x600006 & 0x1f) & 1) == 0)))) {
    uVar1 = 1;
    if ((((unaff_EBX & 0xffbfffff) != 0x20000d) && ((unaff_EBX & 0xffbffffb) != 0x200001)) &&
       (1 < (unaff_EBX & 0xffbfffff) - 0x200007)) {
      return;
    }
  }
  *(undefined1 *)(uVar2 + 0x5a) = uVar1;
  return;
}

