/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14012237c */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_14012237c(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (DAT_14036f0d0 == (code *)0xffffffffffffffff) {
    return 0xc0000225;
  }
  pcVar1 = DAT_14036f0d0;
  if ((DAT_14036f0d0 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_1401225d8(0x1a,"AppPolicyGetProcessTerminationMethod",&DAT_140168968,
                                     &DAT_14016896c), pcVar1 == (code *)0x0)) {
    return 0xc0000225;
  }
  uVar2 = (*pcVar1)(0xfffffffffffffffa,param_1);
  return uVar2;
}

