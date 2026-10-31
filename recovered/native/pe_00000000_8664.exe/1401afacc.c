/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401afacc */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1401afacc(undefined4 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (DAT_140f4f0c0 == (code *)0xffffffffffffffff) {
    return 0;
  }
  pcVar1 = DAT_140f4f0c0;
  if ((DAT_140f4f0c0 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_1401afe18(0x18,"RoInitialize",&DAT_140eb7a08,&DAT_140eb7a0c),
     pcVar1 == (code *)0x0)) {
    return 0;
  }
  uVar2 = (*pcVar1)(param_1);
  return uVar2;
}

