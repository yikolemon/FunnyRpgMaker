/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401af418 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1401af418(void)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (DAT_140f4f000 == (code *)0xffffffffffffffff) {
    return 1;
  }
  pcVar1 = DAT_140f4f000;
  if ((DAT_140f4f000 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_1401afe18(0,"AreFileApisANSI",&DAT_140eb79a8,&DAT_140eb79ac),
     pcVar1 == (code *)0x0)) {
    return 1;
  }
  uVar2 = (*pcVar1)();
  return uVar2;
}

