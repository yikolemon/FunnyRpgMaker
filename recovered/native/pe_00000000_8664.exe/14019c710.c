/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019c710 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

bool FUN_14019c710(undefined8 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  pcVar2 = (code *)FUN_14019c760();
  bVar3 = false;
  if (pcVar2 != (code *)0x0) {
    iVar1 = (*pcVar2)(param_1);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}

