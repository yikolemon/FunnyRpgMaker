/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401af464 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1401af464(undefined8 param_1,DWORD param_2,PCNZWCH param_3,int param_4,PCNZWCH param_5,
                  int param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  LCID Locale;
  code *pcVar1;
  
  pcVar1 = (code *)FUN_1401affcc();
  if (pcVar1 == (code *)0x0) {
    Locale = FUN_1401afa68(param_1,0);
    CompareStringW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}

