/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14010b590 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_14010b590(undefined8 param_1)

{
  undefined8 uVar1;
  byte bVar2;
  code *pcVar3;
  
  bVar2 = (byte)DAT_1401c9640 & 0x3f;
  pcVar3 = (code *)((DAT_140354b60 ^ DAT_1401c9640) >> bVar2 |
                   (DAT_140354b60 ^ DAT_1401c9640) << 0x40 - bVar2);
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  uVar1 = (*pcVar3)(param_1);
  return uVar1;
}

