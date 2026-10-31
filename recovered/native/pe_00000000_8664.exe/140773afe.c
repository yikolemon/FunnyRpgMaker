/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140773afe */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140773afe(undefined4 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong in_FS_OFFSET;
  
  uVar6 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar5 = (int)&stack0xffffffffffffffe8 - 0x14;
  uVar3 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x14);
  *(uint *)(uVar3 - 4) = uVar5;
  *(undefined4 *)(uVar3 + 8) = 0xffffffff;
  *(undefined4 *)(uVar3 + 4) = 0x1012cb50;
  *(undefined4 *)(uVar6 - 0x1c) = param_1;
  *(undefined8 *)((ulonglong)uVar5 - 8) = 0;
  *(undefined8 *)((ulonglong)uVar5 - 0x10) = 0x140773b34;
  FUN_140774060();
  *(undefined4 *)(uVar3 + 8) = 0;
  uVar4 = (ulonglong)*(uint *)(uVar6 - 0x1c);
  *(undefined8 *)(uVar4 + 0x100) = 0;
  *(undefined8 *)(uVar4 + 0x108) = 0;
  *(undefined8 *)(uVar4 + 0xf0) = 0;
  *(undefined8 *)(uVar4 + 0xf8) = 0;
  *(undefined8 *)(uVar4 + 0xe0) = 0;
  *(undefined8 *)(uVar4 + 0xe8) = 0;
  *(undefined8 *)(uVar4 + 0xd0) = 0;
  *(undefined8 *)(uVar4 + 0xd8) = 0;
  *(undefined8 *)(uVar4 + 0xc0) = 0;
  *(undefined8 *)(uVar4 + 200) = 0;
  uVar1 = uRam0000000150a2c9cf;
  *(undefined8 *)(uVar4 + 0xb0) = _DAT_150a2c9c7;
  *(undefined8 *)(uVar4 + 0xb8) = uVar1;
  uVar2 = uRam0000000150a2c773;
  uVar1 = _DAT_150a2c76b;
  uVar3 = 0xc0;
  do {
    *(undefined8 *)(uVar4 + uVar3) = uVar1;
    ((undefined8 *)(uVar4 + uVar3))[1] = uVar2;
    uVar5 = (int)uVar3 + 0x10;
    uVar3 = (ulonglong)uVar5;
  } while (uVar5 != 0x110);
  *(undefined4 *)(uVar6 - 0xc) = 0xffffffff;
  *(undefined4 *)(in_FS_OFFSET + -0x7c1bba7500000000) = *(undefined4 *)(uVar6 - 0x14);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

