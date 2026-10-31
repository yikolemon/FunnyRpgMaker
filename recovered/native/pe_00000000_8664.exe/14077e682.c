/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14077e682 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14077e682(ulonglong param_1,longlong param_2)

{
  undefined8 uVar1;
  uint uVar2;
  float in_XMM1_Da;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  uint unaff_retaddr;
  
  if (unaff_retaddr < 4) {
    uVar1 = *(undefined8 *)(param_2 + 0x50);
    uVar2 = (uint)(in_XMM1_Da == 0.0);
    fVar5 = (float)*(undefined8 *)(param_2 + 0x58) + (float)uVar1;
    fVar6 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x58) >> 0x20) +
            (float)((ulonglong)uVar1 >> 0x20);
    uVar3 = (int)(uVar2 * -0x80000000) >> 0x1f;
    uVar4 = (int)(uVar2 * -0x80000000) >> 0x1f;
                    /* WARNING: Could not emulate address calculation at 0x00014077e6d3 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((ulonglong)unaff_retaddr * 4 + 0x102b92a8))
              ((ulonglong)unaff_retaddr,-uVar2 & 1,uVar1,
               CONCAT44(~uVar4 & (uint)fVar6,~uVar3 & (uint)fVar5) |
               CONCAT44((uint)(fRam0000000150a37058 + fVar6) & uVar4,
                        (uint)(_DAT_150a37054 + fVar5) & uVar3));
    return;
  }
  *(undefined8 *)(param_1 & 0xffffffff) = 0;
  ((undefined8 *)(param_1 & 0xffffffff))[1] = 0;
  return;
}

