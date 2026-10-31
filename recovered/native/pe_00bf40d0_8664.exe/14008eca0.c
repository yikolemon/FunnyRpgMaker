/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008eca0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_14008eca0(undefined8 param_1)

{
  undefined8 uVar1;
  byte bVar2;
  code *pcVar3;
  
  bVar2 = (byte)DAT_14012ea80 & 0x3f;
  pcVar3 = (code *)((DAT_140142c28 ^ DAT_14012ea80) >> bVar2 |
                   (DAT_140142c28 ^ DAT_14012ea80) << 0x40 - bVar2);
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  uVar1 = (*pcVar3)(param_1);
  return uVar1;
}

