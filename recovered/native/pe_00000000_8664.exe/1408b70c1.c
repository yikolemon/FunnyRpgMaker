/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408b70c1 */

undefined4 * FUN_1408b70c1(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  puVar3 = (undefined4 *)(ulonglong)param_1;
  puVar3[2] = *(undefined4 *)(uVar4 + 0x18);
  uVar1 = *(uint *)(uVar4 + 8);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[0x10f] = 0;
  puVar3[0x110] = 0;
  puVar3[5] = 0;
  *(undefined1 *)(puVar3 + 6) = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  *(undefined2 *)(puVar3 + 0xb) = 0;
  puVar3[0xd] = 0;
  *(undefined1 *)(puVar3 + 0xe) = 0;
  uVar2 = *(undefined4 *)(uVar4 + 0x10);
  puVar3[0x112] = *(undefined4 *)(ulonglong)uVar1;
  *puVar3 = *(undefined4 *)(uVar4 + 0xc);
  puVar3[3] = *(undefined4 *)(uVar4 + 0x14);
  puVar3[4] = *(undefined4 *)(uVar4 + 0x1c);
  puVar3[1] = uVar2;
  return puVar3;
}

