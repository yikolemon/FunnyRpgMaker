/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401afb60 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1401afb60(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (DAT_140f4f0d0 == (code *)0xffffffffffffffff) {
    return 0xc0000225;
  }
  pcVar1 = DAT_140f4f0d0;
  if ((DAT_140f4f0d0 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_1401afe18(0x1a,"AppPolicyGetProcessTerminationMethod",&DAT_140eb7a10,
                                     &DAT_140eb7a14), pcVar1 == (code *)0x0)) {
    return 0xc0000225;
  }
  uVar2 = (*pcVar1)(0xfffffffffffffffa,param_1);
  return uVar2;
}

