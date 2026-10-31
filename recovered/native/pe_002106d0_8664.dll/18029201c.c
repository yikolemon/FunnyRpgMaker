/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18029201c */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_18029201c(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (DAT_1804500d8 == (code *)0xffffffffffffffff) {
    return 0xc0000225;
  }
  pcVar1 = DAT_1804500d8;
  if ((DAT_1804500d8 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_180292278(0x1b,"AppPolicyGetThreadInitializationType",&DAT_180353734,
                                     &PTR_u_ja_JP_180353738), pcVar1 == (code *)0x0)) {
    return 0xc0000225;
  }
  uVar2 = (*pcVar1)(0xfffffffffffffffa,param_1);
  return uVar2;
}

