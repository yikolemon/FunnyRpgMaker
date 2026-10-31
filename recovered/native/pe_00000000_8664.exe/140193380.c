/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140193380 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_140193380(undefined8 param_1)

{
  undefined8 uVar1;
  byte bVar2;
  code *pcVar3;
  
  bVar2 = (byte)DAT_140f17b40 & 0x3f;
  pcVar3 = (code *)((DAT_140f32730 ^ DAT_140f17b40) >> bVar2 |
                   (DAT_140f32730 ^ DAT_140f17b40) << 0x40 - bVar2);
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  uVar1 = (*pcVar3)(param_1);
  return uVar1;
}

