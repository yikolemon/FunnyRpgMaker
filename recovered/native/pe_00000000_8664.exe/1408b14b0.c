/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408b14b0 */

void FUN_1408b14b0(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  
  uVar8 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar5 = *(uint *)(uVar8 + 0x10);
  uVar6 = (ulonglong)uVar5;
  uVar7 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x10);
  *(undefined8 *)(uVar7 - 8) = unaff_RSI;
  if (uVar5 < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0001408b14c3 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(uVar6 * 4 + 0x1025b234))();
    return;
  }
  iVar2 = *(int *)(uVar8 + 0xc);
  uVar1 = *(uint *)(uVar8 + 8);
  *(int *)(uVar8 - 8) = iVar2;
  *(uint *)(uVar8 - 4) = uVar1;
  *(undefined8 *)(uVar7 - 0x10) = unaff_RBX;
  *(undefined8 *)(uVar7 - 0x18) = unaff_RDI;
  do {
    if (uVar5 < 0x20) {
      *(uint *)(uVar8 - 4) = uVar1 + (int)uVar6;
      *(int *)(uVar8 - 8) = iVar2 + (int)uVar6;
                    /* WARNING: Could not recover jumptable at 0x0001408b1be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(uVar6 * 4 + 0x1025b248))();
      return;
    }
    uVar5 = *(uint *)(ulonglong)uVar1;
    *(uint *)(uVar8 - 0x10) = uVar5 >> 0x10;
    uVar1 = *(uint *)(ulonglong)*(uint *)(uVar8 - 8);
    *(uint *)(uVar8 - 0xc) = uVar1 >> 0x10;
    if (uVar5 != uVar1) {
      iVar2 = 0;
      if ((uVar5 & 0xff) != (uVar1 & 0xff)) {
        iVar2 = (uint)(0 < (int)((uVar5 & 0xff) - (uVar1 & 0xff))) * 2 + -1;
      }
      if (iVar2 != 0) {
        return;
      }
      uVar4 = uVar1 >> 8 & 0xff;
      uVar3 = uVar5 >> 8 & 0xff;
      iVar2 = 0;
      if (uVar3 != uVar4) {
        iVar2 = (uint)(0 < (int)(uVar3 - uVar4)) * 2 + -1;
      }
      if (iVar2 != 0) {
        return;
      }
      uVar4 = *(uint *)(uVar8 - 0xc) & 0xff;
      uVar3 = *(uint *)(uVar8 - 0x10) & 0xff;
      iVar2 = 0;
      if (uVar3 != uVar4) {
        iVar2 = (uint)(0 < (int)(uVar3 - uVar4)) * 2 + -1;
      }
      if (iVar2 != 0) {
        return;
      }
      iVar2 = 0;
      if (uVar5 >> 0x18 != uVar1 >> 0x18) {
        iVar2 = (uint)(0 < (int)((uVar5 >> 0x18) - (uVar1 >> 0x18))) * 2 + -1;
      }
      if (iVar2 != 0) {
        return;
      }
    }
    uVar5 = *(uint *)((ulonglong)*(uint *)(uVar8 - 4) + 4);
    *(uint *)(uVar8 - 0xc) = uVar5 >> 0x10;
    uVar1 = *(uint *)((ulonglong)*(uint *)(uVar8 - 8) + 4);
    *(uint *)(uVar8 - 0x10) = uVar1 >> 0x10;
    if (uVar5 != uVar1) {
      iVar2 = 0;
      if ((uVar5 & 0xff) != (uVar1 & 0xff)) {
        iVar2 = (uint)(0 < (int)((uVar5 & 0xff) - (uVar1 & 0xff))) * 2 + -1;
      }
      if (iVar2 != 0) {
        return;
      }
      uVar4 = uVar1 >> 8 & 0xff;
      uVar3 = uVar5 >> 8 & 0xff;
      iVar2 = 0;
      if (uVar3 != uVar4) {
        iVar2 = (uint)(0 < (int)(uVar3 - uVar4)) * 2 + -1;
      }
      if (iVar2 != 0) {
        return;
      }
      uVar4 = *(uint *)(uVar8 - 0x10) & 0xff;
      uVar3 = *(uint *)(uVar8 - 0xc) & 0xff;
      iVar2 = 0;
      if (uVar3 != uVar4) {
        iVar2 = (uint)(0 < (int)(uVar3 - uVar4)) * 2 + -1;
      }
      if (iVar2 != 0) {
        return;
      }
      iVar2 = 0;
      if (uVar5 >> 0x18 != uVar1 >> 0x18) {
        iVar2 = (uint)(0 < (int)((uVar5 >> 0x18) - (uVar1 >> 0x18))) * 2 + -1;
      }
      if (iVar2 != 0) {
        return;
      }
    }
    uVar5 = *(uint *)((ulonglong)*(uint *)(uVar8 - 4) + 8);
    *(uint *)(uVar8 - 0xc) = uVar5 >> 0x10;
    uVar1 = *(uint *)((ulonglong)*(uint *)(uVar8 - 8) + 8);
    *(uint *)(uVar8 - 0x10) = uVar1 >> 0x10;
    if (uVar5 != uVar1) {
      iVar2 = 0;
      if ((uVar5 & 0xff) != (uVar1 & 0xff)) {
        iVar2 = (uint)(0 < (int)((uVar5 & 0xff) - (uVar1 & 0xff))) * 2 + -1;
      }
      if (iVar2 != 0) {
        return;
      }
      uVar4 = uVar1 >> 8 & 0xff;
      uVar3 = uVar5 >> 8 & 0xff;
      iVar2 = 0;
      if (uVar3 != uVar4) {
        iVar2 = (uint)(0 < (int)(uVar3 - uVar4)) * 2 + -1;
      }
      if (iVar2 != 0) {
        return;
      }
      uVar4 = *(uint *)(uVar8 - 0x10) & 0xff;
      uVar3 = *(uint *)(uVar8 - 0xc) & 0xff;
      iVar2 = 0;
      if (uVar3 != uVar4) {
        iVar2 = (uint)(0 < (int)(uVar3 - uVar4)) * 2 + -1;
      }
      if (iVar2 != 0) {
        return;
      }
      iVar2 = 0;
      if (uVar5 >> 0x18 != uVar1 >> 0x18) {
        iVar2 = (uint)(0 < (int)((uVar5 >> 0x18) - (uVar1 >> 0x18))) * 2 + -1;
      }
      if (iVar2 != 0) {
        return;
      }
    }
    uVar5 = *(uint *)((ulonglong)*(uint *)(uVar8 - 4) + 0xc);
    *(uint *)(uVar8 - 0xc) = uVar5 >> 0x10;
    uVar1 = *(uint *)((ulonglong)*(uint *)(uVar8 - 8) + 0xc);
    *(uint *)(uVar8 - 0x10) = uVar1 >> 0x10;
    if (uVar5 != uVar1) {
      iVar2 = 0;
      if ((uVar5 & 0xff) != (uVar1 & 0xff)) {
        iVar2 = (uint)(0 < (int)((uVar5 & 0xff) - (uVar1 & 0xff))) * 2 + -1;
      }
      if (iVar2 != 0) {
        return;
      }
      uVar4 = uVar1 >> 8 & 0xff;
      uVar3 = uVar5 >> 8 & 0xff;
      iVar2 = 0;
      if (uVar3 != uVar4) {
        iVar2 = (uint)(0 < (int)(uVar3 - uVar4)) * 2 + -1;
      }
      if (iVar2 != 0) {
        return;
      }
      uVar4 = *(uint *)(uVar8 - 0x10) & 0xff;
      uVar3 = *(uint *)(uVar8 - 0xc) & 0xff;
      iVar2 = 0;
      if (uVar3 != uVar4) {
        iVar2 = (uint)(0 < (int)(uVar3 - uVar4)) * 2 + -1;
      }
      if (iVar2 != 0) {
        return;
      }
      iVar2 = 0;
      if (uVar5 >> 0x18 != uVar1 >> 0x18) {
        iVar2 = (uint)(0 < (int)((uVar5 >> 0x18) - (uVar1 >> 0x18))) * 2 + -1;
      }
      if (iVar2 != 0) {
        return;
      }
    }
    uVar5 = *(uint *)((ulonglong)*(uint *)(uVar8 - 4) + 0x10);
    *(uint *)(uVar8 - 0xc) = uVar5 >> 0x10;
    uVar1 = *(uint *)((ulonglong)*(uint *)(uVar8 - 8) + 0x10);
    *(uint *)(uVar8 - 0x10) = uVar1 >> 0x10;
    if (uVar5 != uVar1) {
      iVar2 = 0;
      if ((uVar5 & 0xff) != (uVar1 & 0xff)) {
        iVar2 = (uint)(0 < (int)((uVar5 & 0xff) - (uVar1 & 0xff))) * 2 + -1;
      }
      if (iVar2 != 0) {
        return;
      }
      uVar4 = uVar1 >> 8 & 0xff;
      uVar3 = uVar5 >> 8 & 0xff;
      iVar2 = 0;
      if (uVar3 != uVar4) {
        iVar2 = (uint)(0 < (int)(uVar3 - uVar4)) * 2 + -1;
      }
      if (iVar2 != 0) {
        return;
      }
      uVar4 = *(uint *)(uVar8 - 0x10) & 0xff;
      uVar3 = *(uint *)(uVar8 - 0xc) & 0xff;
      iVar2 = 0;
      if (uVar3 != uVar4) {
        iVar2 = (uint)(0 < (int)(uVar3 - uVar4)) * 2 + -1;
      }
      if (iVar2 != 0) {
        return;
      }
      iVar2 = 0;
      if (uVar5 >> 0x18 != uVar1 >> 0x18) {
        iVar2 = (uint)(0 < (int)((uVar5 >> 0x18) - (uVar1 >> 0x18))) * 2 + -1;
      }
      if (iVar2 != 0) {
        return;
      }
    }
    uVar5 = *(uint *)((ulonglong)*(uint *)(uVar8 - 4) + 0x14);
    *(uint *)(uVar8 - 0xc) = uVar5 >> 0x10;
    uVar1 = *(uint *)((ulonglong)*(uint *)(uVar8 - 8) + 0x14);
    *(uint *)(uVar8 - 0x10) = uVar1 >> 0x10;
    if (uVar5 != uVar1) {
      iVar2 = 0;
      if ((uVar5 & 0xff) != (uVar1 & 0xff)) {
        iVar2 = (uint)(0 < (int)((uVar5 & 0xff) - (uVar1 & 0xff))) * 2 + -1;
      }
      if (iVar2 != 0) {
        return;
      }
      uVar4 = uVar1 >> 8 & 0xff;
      uVar3 = uVar5 >> 8 & 0xff;
      iVar2 = 0;
      if (uVar3 != uVar4) {
        iVar2 = (uint)(0 < (int)(uVar3 - uVar4)) * 2 + -1;
      }
      if (iVar2 != 0) {
        return;
      }
      uVar4 = *(uint *)(uVar8 - 0x10) & 0xff;
      uVar3 = *(uint *)(uVar8 - 0xc) & 0xff;
      iVar2 = 0;
      if (uVar3 != uVar4) {
        iVar2 = (uint)(0 < (int)(uVar3 - uVar4)) * 2 + -1;
      }
      if (iVar2 != 0) {
        return;
      }
      iVar2 = 0;
      if (uVar5 >> 0x18 != uVar1 >> 0x18) {
        iVar2 = (uint)(0 < (int)((uVar5 >> 0x18) - (uVar1 >> 0x18))) * 2 + -1;
      }
      if (iVar2 != 0) {
        return;
      }
    }
    uVar5 = *(uint *)((ulonglong)*(uint *)(uVar8 - 4) + 0x18);
    *(uint *)(uVar8 - 0xc) = uVar5 >> 0x10;
    uVar1 = *(uint *)((ulonglong)*(uint *)(uVar8 - 8) + 0x18);
    *(uint *)(uVar8 - 0x10) = uVar1 >> 0x10;
    if (uVar5 != uVar1) {
      iVar2 = 0;
      if ((uVar5 & 0xff) != (uVar1 & 0xff)) {
        iVar2 = (uint)(0 < (int)((uVar5 & 0xff) - (uVar1 & 0xff))) * 2 + -1;
      }
      if (iVar2 != 0) {
        return;
      }
      uVar4 = uVar1 >> 8 & 0xff;
      uVar3 = uVar5 >> 8 & 0xff;
      iVar2 = 0;
      if (uVar3 != uVar4) {
        iVar2 = (uint)(0 < (int)(uVar3 - uVar4)) * 2 + -1;
      }
      if (iVar2 != 0) {
        return;
      }
      uVar4 = *(uint *)(uVar8 - 0x10) & 0xff;
      uVar3 = *(uint *)(uVar8 - 0xc) & 0xff;
      iVar2 = 0;
      if (uVar3 != uVar4) {
        iVar2 = (uint)(0 < (int)(uVar3 - uVar4)) * 2 + -1;
      }
      if (iVar2 != 0) {
        return;
      }
      iVar2 = 0;
      if (uVar5 >> 0x18 != uVar1 >> 0x18) {
        iVar2 = (uint)(0 < (int)((uVar5 >> 0x18) - (uVar1 >> 0x18))) * 2 + -1;
      }
      if (iVar2 != 0) {
        return;
      }
    }
    uVar5 = *(uint *)((ulonglong)*(uint *)(uVar8 - 4) + 0x1c);
    *(uint *)(uVar8 - 0xc) = uVar5 >> 0x10;
    uVar1 = *(uint *)((ulonglong)*(uint *)(uVar8 - 8) + 0x1c);
    *(uint *)(uVar8 - 0x10) = uVar1 >> 0x10;
    if (uVar5 != uVar1) {
      iVar2 = 0;
      if ((uVar5 & 0xff) != (uVar1 & 0xff)) {
        iVar2 = (uint)(0 < (int)((uVar5 & 0xff) - (uVar1 & 0xff))) * 2 + -1;
      }
      if (iVar2 != 0) {
        return;
      }
      uVar4 = uVar1 >> 8 & 0xff;
      uVar3 = uVar5 >> 8 & 0xff;
      iVar2 = 0;
      if (uVar3 != uVar4) {
        iVar2 = (uint)(0 < (int)(uVar3 - uVar4)) * 2 + -1;
      }
      if (iVar2 != 0) {
        return;
      }
      uVar4 = *(uint *)(uVar8 - 0x10) & 0xff;
      uVar3 = *(uint *)(uVar8 - 0xc) & 0xff;
      iVar2 = 0;
      if (uVar3 != uVar4) {
        iVar2 = (uint)(0 < (int)(uVar3 - uVar4)) * 2 + -1;
      }
      if (iVar2 != 0) {
        return;
      }
      iVar2 = 0;
      if (uVar5 >> 0x18 != uVar1 >> 0x18) {
        iVar2 = (uint)(0 < (int)((uVar5 >> 0x18) - (uVar1 >> 0x18))) * 2 + -1;
      }
      if (iVar2 != 0) {
        return;
      }
    }
    iVar2 = *(int *)(uVar8 - 8);
    uVar5 = *(int *)(uVar8 + 0x10) - 0x20;
    uVar6 = (ulonglong)uVar5;
    *(int *)(uVar8 - 4) = *(int *)(uVar8 - 4) + 0x20;
    iVar2 = iVar2 + 0x20;
    uVar1 = *(uint *)(uVar8 - 4);
    *(int *)(uVar8 - 8) = iVar2;
    *(uint *)(uVar8 + 0x10) = uVar5;
  } while( true );
}

