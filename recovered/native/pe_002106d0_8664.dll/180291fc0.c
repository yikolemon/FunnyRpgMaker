/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180291fc0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_180291fc0(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (DAT_1804500d0 == (code *)0xffffffffffffffff) {
    return 0xc0000225;
  }
  pcVar1 = DAT_1804500d0;
  if ((DAT_1804500d0 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_180292278(0x1a,"AppPolicyGetProcessTerminationMethod",&DAT_180353730,
                                     &DAT_180353734), pcVar1 == (code *)0x0)) {
    return 0xc0000225;
  }
  uVar2 = (*pcVar1)(0xfffffffffffffffa,param_1);
  return uVar2;
}

