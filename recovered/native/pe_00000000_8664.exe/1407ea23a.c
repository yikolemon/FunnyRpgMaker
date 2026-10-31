/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407ea23a */

/* WARNING: Control flow encountered bad instruction data */

void FUN_1407ea23a(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar4;
  longlong in_FS_OFFSET;
  ulonglong uVar3;
  
  uVar4 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar2 = (int)&stack0xfffffffffffffff0 - 0x1c;
  uVar3 = (ulonglong)uVar2;
  uVar1 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x10);
  *(uint *)(uVar1 - 4) = uVar2;
  *(undefined4 *)(uVar1 + 8) = 0xffffffff;
  *(undefined4 *)(uVar1 + 4) = 0x10196030;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(int *)(uVar4 - 0x18) = (int)param_1;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(uVar1 + 8) = 0;
  uVar1 = (ulonglong)*(uint *)(uVar4 - 0x18);
  *(undefined4 *)(uVar1 + 0x60) = 0;
  *(undefined4 *)(uVar1 + 0x5c) = 0;
  *(undefined4 *)(uVar1 + 100) = 0;
  *(undefined4 *)(uVar4 - 8) = 1;
  uVar1 = (ulonglong)*(uint *)(uVar4 - 0x18);
  *(undefined4 *)(uVar1 + 0x6c) = 0;
  *(undefined4 *)(uVar1 + 0x68) = 0;
  *(undefined4 *)(uVar1 + 0x70) = 0;
  *(undefined4 *)(uVar4 - 8) = 2;
  uVar1 = (ulonglong)*(uint *)(uVar4 - 0x18);
  *(undefined4 *)(uVar1 + 0x78) = 0;
  *(undefined4 *)(uVar1 + 0x74) = 0;
  *(undefined4 *)(uVar1 + 0x7c) = 0;
  *(undefined4 *)(uVar4 - 8) = 3;
  uVar1 = (ulonglong)*(uint *)(uVar4 - 0x18);
  *(uint *)(uVar4 - 0x20) = *(uint *)(uVar4 - 0x18) + 0xac;
  *(undefined4 *)(uVar4 - 8) = 0xffffffff;
  *(undefined8 *)(uVar1 + 0xac) = 0;
  *(undefined8 *)(uVar1 + 0xb4) = 0;
  *(undefined4 *)(uVar1 + 0xbc) = 0;
  *(undefined8 *)(uVar1 + 0x98) = 0;
  *(undefined8 *)(uVar1 + 0xa0) = 0;
  *(undefined4 *)(uVar4 - 8) = 4;
  uVar1 = (ulonglong)*(uint *)(uVar4 - 0x18);
  *(uint *)(uVar4 - 0x1c) = *(uint *)(uVar4 - 0x18) + 0xc0;
  *(undefined4 *)(uVar1 + 0xc4) = 0;
  *(undefined4 *)(uVar1 + 0xc0) = 0;
  *(undefined4 *)(uVar1 + 200) = 0;
  *(undefined4 *)(uVar4 - 8) = 5;
  *(undefined8 *)(uVar3 - 8) = 0xd0;
  *(undefined8 *)(uVar3 - 0x10) = 0;
  *(ulonglong *)(uVar3 - 0x18) = uVar1;
  *(undefined8 *)(uVar3 - 0x20) = 0x1407ea31e;
  FUN_1408b3720();
  *(undefined8 *)(uVar1 + 0x94) = 0;
  *(undefined4 *)(uVar1 + 0x80) = 0;
  *(undefined4 *)(uVar1 + 0xd4) = 0;
  *(undefined4 *)(uVar1 + 0xd0) = 0;
  *(undefined4 *)(uVar4 - 8) = 0;
  *(undefined4 *)(in_FS_OFFSET + -0x7c17ba7500000000) = *(undefined4 *)(uVar4 - 0x10);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

