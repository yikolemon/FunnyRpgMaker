/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407deea8 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_1407deea8(undefined4 *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong in_FS_OFFSET;
  ulonglong uVar4;
  
  uVar6 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar3 = (int)&stack0xffffffffffffffe0 - 0x18;
  uVar4 = (ulonglong)uVar3;
  uVar2 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x18);
  *(uint *)(uVar2 - 4) = uVar3;
  *(undefined4 *)(uVar2 + 8) = 0xffffffff;
  *(undefined4 *)(uVar2 + 4) = 0x10195fa0;
  param_1[1] = 0;
  *param_1 = 0;
  *(int *)(uVar6 - 0x20) = (int)param_1;
  param_1[2] = 0;
  *(undefined4 *)(uVar2 + 8) = 0;
  uVar2 = (ulonglong)*(uint *)(uVar6 - 0x20);
  *(undefined4 *)(uVar2 + 0x10) = 0;
  *(undefined4 *)(uVar2 + 0xc) = 0;
  *(undefined4 *)(uVar2 + 0x14) = 0;
  *(undefined4 *)(uVar6 - 0x10) = 1;
  uVar2 = (ulonglong)*(uint *)(uVar6 - 0x20);
  *(undefined4 *)(uVar2 + 0x1c) = 0;
  *(undefined4 *)(uVar2 + 0x18) = 0;
  *(undefined4 *)(uVar2 + 0x20) = 0;
  *(undefined4 *)(uVar6 - 0x10) = 2;
  uVar2 = (ulonglong)*(uint *)(uVar6 - 0x20);
  *(undefined4 *)(uVar2 + 0x3c) = 0;
  *(undefined4 *)(uVar2 + 0x38) = 0;
  *(undefined4 *)(uVar2 + 0x40) = 0;
  *(undefined4 *)(uVar6 - 0x10) = 3;
  uVar3 = *(uint *)(uVar6 - 0x20);
  uVar2 = (ulonglong)uVar3;
  *(undefined4 *)(uVar2 + 100) = 0;
  *(undefined4 *)(uVar2 + 0x60) = 0;
  *(undefined8 *)(uVar2 + 0x48) = 0;
  *(undefined8 *)(uVar2 + 0x50) = 0;
  *(undefined4 *)(uVar2 + 0x58) = 0;
  *(uint *)(uVar6 - 0x24) = uVar3 + 0x70;
  *(undefined4 *)(uVar6 - 0x10) = 0xffffffff;
  *(undefined4 *)(uVar2 + 0x80) = 0;
  *(undefined8 *)(uVar2 + 0x70) = 0;
  *(undefined8 *)(uVar2 + 0x78) = 0;
  *(undefined4 *)(uVar6 - 0x10) = 4;
  uVar2 = (ulonglong)*(uint *)(uVar6 - 0x20);
  *(undefined4 *)(uVar2 + 0x88) = 0;
  *(undefined4 *)(uVar2 + 0x84) = 0;
  *(undefined4 *)(uVar2 + 0x8c) = 0;
  *(undefined4 *)(uVar6 - 0x10) = 5;
  uVar2 = (ulonglong)*(uint *)(uVar6 - 0x20);
  *(undefined4 *)(uVar2 + 0x94) = 0;
  *(undefined4 *)(uVar2 + 0x90) = 0;
  *(undefined4 *)(uVar2 + 0x98) = 0;
  *(undefined4 *)(uVar6 - 0x10) = 6;
  uVar2 = (ulonglong)*(uint *)(uVar6 - 0x20);
  *(undefined4 *)(uVar2 + 0xa0) = 0;
  *(undefined4 *)(uVar2 + 0x9c) = 0;
  *(undefined4 *)(uVar2 + 0xa4) = 0;
  *(undefined4 *)(uVar6 - 0x10) = 7;
  uVar3 = *(uint *)(uVar6 + 8);
  *(undefined8 *)(uVar4 - 8) = 0xb0;
  *(undefined8 *)(uVar4 - 0x10) = 0;
  uVar1 = *(uint *)(uVar6 - 0x20);
  *(ulonglong *)(uVar4 - 0x18) = (ulonglong)uVar1;
  *(undefined8 *)(uVar4 - 0x20) = 0x1407defc0;
  FUN_1408b3720();
  uVar5 = (ulonglong)((int)(uVar4 - 0x18) + 0xc);
  *(ulonglong *)(uVar5 - 8) = (ulonglong)uVar3;
  *(undefined8 *)(uVar5 - 0x10) = 0x1407defcb;
  FUN_1407df0f4((ulonglong)uVar1);
  *(undefined4 *)(uVar6 - 0x10) = 0xffffffff;
  *(undefined4 *)(in_FS_OFFSET + -0x7c1fba7500000000) = *(undefined4 *)(uVar6 - 0x18);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

