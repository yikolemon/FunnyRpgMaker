/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076dc89 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076dc89(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 unaff_RSI;
  undefined4 unaff_retaddr;
  uint unaff_retaddr_00;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  puVar2 = (undefined8 *)&stack0xfffffffffffffff8;
  uVar1 = 0;
  if ((unaff_retaddr_00 >> 10 & 1) == 0) {
    *(char *)(ulonglong)_DAT_14cc888b1039d74c =
         *(char *)(ulonglong)_DAT_14cc888b1039d74c + (char)_DAT_14cc888b1039d74c;
    uStack_10 = 0;
    uStack_18 = CONCAT44(unaff_retaddr,(int)((ulonglong)unaff_RSI >> 0x20));
    puVar2 = &uStack_18;
    uVar1 = FUN_14075a0a4();
  }
  *(ulonglong *)((longlong)puVar2 + -8) = (ulonglong)unaff_retaddr_00;
  *(undefined8 *)((longlong)puVar2 + -0x10) = uVar1;
  *(undefined8 *)((longlong)puVar2 + -0x18) = 0x14076dcb3;
  FUN_14075be54();
  return;
}

