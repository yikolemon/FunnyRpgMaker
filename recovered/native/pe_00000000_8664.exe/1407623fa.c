/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407623fa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407623fa(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)_DAT_150affb5b;
  *(undefined1 *)((ulonglong)*(uint *)(uVar3 + 0x14cc) + 0xfb) = 1;
  uVar3 = (ulonglong)*(uint *)(uVar3 + 0x14cc);
  FUN_1407e0084(*(undefined4 *)(uVar3 + 0x2e8));
  puVar1 = (undefined8 *)
           (((ulonglong)*(uint *)((ulonglong)*(uint *)(uVar3 + 0x2e8) + 0x8c) - 0x10) +
           (ulonglong)(uint)(*(int *)((ulonglong)*(uint *)(uVar3 + 0x2e8) + 0x84) << 4));
  uVar2 = puVar1[1];
  *(undefined8 *)(uVar3 + 0x28c) = *puVar1;
  *(undefined8 *)(uVar3 + 0x294) = uVar2;
  return;
}

