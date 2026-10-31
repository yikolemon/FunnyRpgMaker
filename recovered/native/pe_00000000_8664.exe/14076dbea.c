/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076dbea */

undefined4 FUN_14076dbea(void)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 uStack_10;
  
  uStack_10 = 0x1000;
  uVar1 = FUN_14075a8ea();
  uVar2 = (ulonglong)((int)&uStack_10 + 4);
  if ((char)uVar1 != '\0') {
    *(undefined8 *)(uVar2 - 8) = 0;
    *(undefined8 *)(uVar2 - 0x10) = 0;
    *(undefined8 *)(uVar2 - 0x18) = 0x14076dc07;
    FUN_14076da77();
  }
  return uVar1;
}

