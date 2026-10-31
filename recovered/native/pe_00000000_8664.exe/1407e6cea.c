/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e6cea */

void FUN_1407e6cea(void)

{
  uint uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(ulonglong)((int)&stack0xfffffffffffffff8 - 0x14);
  uVar1 = puVar2[7];
  puVar2[4] = puVar2[0xc];
  *puVar2 = puVar2[8];
  puVar2[1] = puVar2[9];
  puVar2[2] = puVar2[10];
  puVar2[3] = puVar2[0xb];
  *(undefined8 *)(puVar2 + -2) = 0x1407e6d08;
  FUN_1407e6d11();
  *(undefined1 *)((ulonglong)uVar1 + 0x42) = 0;
  return;
}

