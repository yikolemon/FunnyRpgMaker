/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140765826 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140765826(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong unaff_RBX;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint unaff_retaddr;
  undefined8 uStack_28;
  ulonglong uStack_20;
  
  uVar7 = unaff_RBX & 0xffffffff;
  if ((unaff_retaddr == 0) || (((int)(char)*(uint *)(uVar7 + 0x124) & unaff_retaddr) != 0)) {
    uVar8 = (uint)(unaff_RBX >> 0x20);
    uStack_20 = (ulonglong)uVar8;
    *(uint *)(uVar7 + 0x124) = *(uint *)(uVar7 + 0x124) & 0xfffffff1;
    uVar2 = *(uint *)(uVar7 + 0x438);
    if (uVar2 != uVar8) {
      uStack_28 = _DAT_150b02fac;
      uVar4 = FUN_1407733f8();
      uVar6 = (ulonglong)((int)&uStack_28 + 8);
      if (((int)uVar4 != 0) && (*(int *)(uVar4 + 0x1c) != 0)) {
        do {
          uVar5 = uVar4 & 0xffffffff;
          puVar1 = (uint *)(uVar4 + 0x18);
          uVar4 = (ulonglong)*puVar1;
        } while (*puVar1 != 0);
        uVar8 = *(uint *)(uVar5 + 0x80);
        if (uVar8 == 0) {
          uVar8 = *(uint *)(uVar5 + 0x98);
        }
        else {
          uVar8 = *(uint *)(ulonglong)uVar8;
        }
      }
      if (uVar2 != uVar8) {
        iVar3 = *(int *)(uVar7 + 0x430);
        if (iVar3 != 0) {
          *(undefined8 *)(uVar6 - 8) = 0;
          *(undefined8 *)(uVar6 - 0x10) = 0x1407658a6;
          FUN_1407735f9(iVar3,uVar7);
        }
        *(uint *)(uVar7 + 0x438) = uVar8;
      }
    }
  }
  return;
}

