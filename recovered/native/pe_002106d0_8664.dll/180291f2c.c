/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180291f2c */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_180291f2c(undefined4 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (DAT_1804500c0 == (code *)0xffffffffffffffff) {
    return 0;
  }
  pcVar1 = DAT_1804500c0;
  if ((DAT_1804500c0 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_180292278(0x18,"RoInitialize",&DAT_180353728,&DAT_18035372c),
     pcVar1 == (code *)0x0)) {
    return 0;
  }
  uVar2 = (*pcVar1)(param_1);
  return uVar2;
}

