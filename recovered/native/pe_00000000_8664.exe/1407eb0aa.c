/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407eb0aa */

void FUN_1407eb0aa(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int in_R11D;
  int unaff_R15D;
  
  puVar3 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x14);
  uVar1 = puVar3[0xb];
  if (uVar1 < (uint)puVar3[0xc]) {
    uVar2 = puVar3[10];
    do {
      puVar3[4] = uVar1;
      puVar3[3] = puVar3[0xd];
      puVar3[1] = uVar1;
      *puVar3 = uVar2;
      *(undefined8 *)(puVar3 + -2) = 0x1407eb0db;
      FUN_1407eb0e8();
    } while (in_R11D != unaff_R15D);
  }
  return;
}

