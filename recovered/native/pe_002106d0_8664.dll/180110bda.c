/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180110bda */

undefined1 FUN_180110bda(void)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_180110b9a();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined1 *)(DAT_180419160 + 0x16b4);
  }
  return uVar2;
}

