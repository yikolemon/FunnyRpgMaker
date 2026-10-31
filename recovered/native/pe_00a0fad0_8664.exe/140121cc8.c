/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140121cc8 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_140121cc8(void)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (DAT_14036f000 == (code *)0xffffffffffffffff) {
    return 1;
  }
  pcVar1 = DAT_14036f000;
  if ((DAT_14036f000 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_1401225d8(0,"AreFileApisANSI",&DAT_140168908,&DAT_14016890c),
     pcVar1 == (code *)0x0)) {
    return 1;
  }
  uVar2 = (*pcVar1)();
  return uVar2;
}

