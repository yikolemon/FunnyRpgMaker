/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102771c0 */

undefined4 FUN_102771c0(undefined4 param_1)

{
  undefined4 uVar1;
  byte bVar2;
  code *pcVar3;
  
  bVar2 = (byte)DAT_10388d00 & 0x1f;
  pcVar3 = (code *)((DAT_103a5470 ^ DAT_10388d00) >> bVar2 |
                   (DAT_103a5470 ^ DAT_10388d00) << 0x20 - bVar2);
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  (*(code *)PTR_guard_check_icall_1035d810)(param_1);
  uVar1 = (*pcVar3)();
  return uVar1;
}

