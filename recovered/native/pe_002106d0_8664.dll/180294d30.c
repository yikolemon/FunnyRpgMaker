/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180294d30 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_180294d30(undefined8 param_1)

{
  undefined8 uVar1;
  byte bVar2;
  code *pcVar3;
  
  bVar2 = (byte)DAT_180402640 & 0x3f;
  pcVar3 = (code *)((DAT_180421878 ^ DAT_180402640) >> bVar2 |
                   (DAT_180421878 ^ DAT_180402640) << 0x40 - bVar2);
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  uVar1 = (*pcVar3)(param_1);
  return uVar1;
}

