/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408dd0a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1408dd0a0(void)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 unaff_RSI;
  uint unaff_EDI;
  uint uVar9;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  undefined8 in_FPUInstructionPointer;
  
  uVar8 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar7 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x20);
  *(undefined8 *)(uVar7 - 8) = unaff_RBX;
  *(undefined4 *)(uVar8 - 8) = 0;
  *(undefined8 *)(uVar7 - 0x10) = unaff_RSI;
  *(ulonglong *)(uVar7 - 0x18) = (ulonglong)unaff_EDI;
  *(undefined8 *)(uVar8 - 0x20) = 0;
  *(undefined8 *)(uVar8 - 0x18) = 0;
  *(undefined8 *)(uVar8 - 0x10) = 0;
  *(undefined2 *)(uVar8 - 0x20) = in_FPUControlWord;
  *(undefined2 *)(uVar8 - 0x1c) = in_FPUStatusWord;
  *(undefined2 *)(uVar8 - 0x18) = in_FPUTagWord;
  *(undefined8 *)(uVar8 - 0xc) = in_FPUDataPointer;
  *(undefined8 *)(uVar8 - 0x14) = in_FPUInstructionPointer;
  *(undefined2 *)(uVar8 - 0xe) = in_FPULastInstructionOpcode;
  uVar9 = *(uint *)(uVar8 - 0x20);
  if ((uVar9 & 0x300) == 0) {
    *(undefined4 *)(uVar8 - 4) = 0x2000;
  }
  else if ((uVar9 & 0x300) == 0x200) {
    *(undefined4 *)(uVar8 - 4) = 0x1000;
  }
  else {
    *(undefined4 *)(uVar8 - 4) = 0;
  }
  uVar3 = uVar9 & 0xc00;
  if (uVar3 < 0x801) {
    if (uVar3 == 0x800) {
      uVar3 = 0x200;
    }
    else {
      if ((uVar3 == 0) || (uVar3 != 0x400)) goto LAB_1408dd133;
      uVar3 = 0x100;
    }
  }
  else if (uVar3 == 0xc00) {
    uVar3 = 0x300;
  }
  else {
LAB_1408dd133:
    uVar3 = 0;
  }
  uVar1 = *(uint *)(uVar8 - 4);
  uVar9 = (((uVar9 & 7999) >> 2 & 8 | uVar9 & 0x10) >> 2 | uVar9 & 8) >> 1 |
          ((uVar9 & 2) << 3 | uVar9 & 4) * 2 | (uVar9 & 1) << 4 | (uVar9 & 0x1000) << 2 | uVar1;
  if (_DAT_150c7a934 < 1) {
    uVar5 = 0;
  }
  else {
    *(undefined4 *)(uVar8 - 4) = MXCSR;
    uVar5 = *(uint *)(uVar8 - 4) & 0xffc0;
  }
  uVar2 = (ushort)uVar5 & 0x8040;
  if (uVar2 == 0x8000) {
    uVar6 = 0xc00;
  }
  else if (uVar2 == 0x40) {
    uVar6 = 0x800;
  }
  else {
    uVar6 = 0;
    if (uVar2 == 0x8040) {
      uVar6 = 0x400;
    }
  }
  uVar4 = uVar5 & 0x6000;
  if (uVar4 < 0x4001) {
    if (uVar4 == 0x4000) {
      uVar4 = 0x200;
      goto LAB_1408dd203;
    }
    if ((uVar4 != 0) && (uVar4 == 0x2000)) {
      uVar4 = 0x100;
      goto LAB_1408dd203;
    }
  }
  else if (uVar4 == 0x6000) {
    uVar4 = 0x300;
    goto LAB_1408dd203;
  }
  uVar4 = 0;
LAB_1408dd203:
  uVar5 = ((((uVar5 >> 2 & 0x400 | uVar5 & 0x800) >> 2 | uVar5 & 0x400) >> 2 | uVar5 & 0x200) >> 3 |
          uVar5 & 0x180) >> 3;
  return (((uVar4 | uVar5 << 2) << 6 | uVar9 & 0x3f) << 2 | uVar1 & 0x300 | uVar3) << 0xe |
         uVar5 | uVar6 | uVar4 | uVar9 | uVar3;
}

