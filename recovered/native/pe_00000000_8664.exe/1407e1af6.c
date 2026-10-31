/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e1af6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407e1af6(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 unaff_RBX;
  uint *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 unaff_RBP;
  ulonglong uVar8;
  ulonglong uVar9;
  int unaff_retaddr;
  ulonglong uStack_28;
  uint uVar10;
  
  uVar8 = (ulonglong)param_1;
  uVar10 = (uint)((ulonglong)unaff_RBX >> 0x20);
  if (_DAT_150a98bee <= (float)unaff_RBP) {
    puVar4 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x14);
    puVar4[3] = unaff_retaddr << 2;
    puVar4[2] = (int)((ulonglong)unaff_RBP >> 0x20) << 2;
    puVar4[1] = (uint)(float)unaff_RBP;
    *puVar4 = uVar10;
    puVar4[4] = 0;
    puVar4[-2] = 0x407e1b60;
    puVar4[-1] = 1;
    FUN_1407e157c(uVar8);
  }
  else {
    uVar1 = *(uint *)(uVar8 + 0x38);
    if (uVar1 == *(uint *)(uVar8 + 0x3c)) {
      if (uVar1 == 0) {
        iVar3 = 8;
      }
      else {
        iVar3 = (int)uVar1 / 2 + uVar1;
      }
      iVar7 = uVar1 + 1;
      if ((int)(uVar1 + 1) < iVar3) {
        iVar7 = iVar3;
      }
      uStack_28 = (ulonglong)(uint)(iVar7 * 8);
      uVar2 = FUN_1407520ca();
      uVar5 = (ulonglong)((int)&uStack_28 + 4);
      uVar9 = (ulonglong)uVar2;
      uVar1 = *(uint *)(uVar8 + 0x40);
      if (uVar1 != 0) {
        *(ulonglong *)(uVar5 - 8) = (ulonglong)(uint)(*(int *)(uVar8 + 0x38) << 3);
        *(ulonglong *)(uVar5 - 0x10) = (ulonglong)uVar1;
        *(ulonglong *)(uVar5 - 0x18) = uVar9;
        *(undefined8 *)(uVar5 - 0x20) = 0x1407e1b98;
        FUN_1408b31a0();
        uVar6 = (ulonglong)((int)(uVar5 - 0x18) + 0xc);
        *(undefined8 *)(uVar6 - 8) = *(undefined8 *)(uVar8 + 0x40);
                    /* WARNING: Subroutine does not return */
        *(undefined **)(uVar6 - 0x10) = &UNK_1407e1ba3;
        FUN_14075219b();
      }
      *(uint *)(uVar8 + 0x40) = uVar2;
      *(int *)(uVar8 + 0x3c) = iVar7;
      uVar1 = *(uint *)(uVar8 + 0x38);
    }
    else {
      uVar9 = (ulonglong)*(uint *)(uVar8 + 0x40);
    }
    *(undefined8 *)(uVar9 + (ulonglong)uVar1 * 8) = *(undefined8 *)(ulonglong)uVar10;
    *(int *)(uVar8 + 0x38) = *(int *)(uVar8 + 0x38) + 1;
  }
  return;
}

