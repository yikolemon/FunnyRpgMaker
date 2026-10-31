/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401afbbc */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1401afbbc(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (DAT_140f4f0d8 == (code *)0xffffffffffffffff) {
    return 0xc0000225;
  }
  pcVar1 = DAT_140f4f0d8;
  if ((DAT_140f4f0d8 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_1401afe18(0x1b,"AppPolicyGetThreadInitializationType",&DAT_140eb7a14,
                                     &PTR_u_ja_JP_140eb7a18), pcVar1 == (code *)0x0)) {
    return 0xc0000225;
  }
  uVar2 = (*pcVar1)(0xfffffffffffffffa,param_1);
  return uVar2;
}

