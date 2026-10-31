/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180291878 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_180291878(void)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (DAT_180450000 == (code *)0xffffffffffffffff) {
    return 1;
  }
  pcVar1 = DAT_180450000;
  if ((DAT_180450000 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_180292278(0,"AreFileApisANSI",&DAT_1803536c8,&DAT_1803536cc),
     pcVar1 == (code *)0x0)) {
    return 1;
  }
  uVar2 = (*pcVar1)();
  return uVar2;
}

