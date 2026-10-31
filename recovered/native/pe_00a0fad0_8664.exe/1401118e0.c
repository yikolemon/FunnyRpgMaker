/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401118e0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

bool FUN_1401118e0(undefined8 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  pcVar2 = (code *)FUN_140111930();
  bVar3 = false;
  if (pcVar2 != (code *)0x0) {
    iVar1 = (*pcVar2)(param_1);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}

