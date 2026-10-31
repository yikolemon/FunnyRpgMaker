/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802918c4 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1802918c4(undefined8 param_1,DWORD param_2,PCNZWCH param_3,int param_4,PCNZWCH param_5,
                  int param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  LCID Locale;
  code *pcVar1;
  
  pcVar1 = (code *)FUN_18029242c();
  if (pcVar1 == (code *)0x0) {
    Locale = FUN_180291ec8(param_1,0);
    CompareStringW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}

