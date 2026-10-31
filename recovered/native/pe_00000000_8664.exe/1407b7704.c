/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407b7704 */

void FUN_1407b7704(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x18);
  uVar1 = puVar6[0xc];
  uVar2 = puVar6[0xd];
  uVar3 = puVar6[0xe];
  uVar4 = puVar6[0xb];
  *puVar6 = uVar4;
  *(undefined8 *)(puVar6 + -2) = 0x1407b7723;
  uVar5 = FUN_14076b464();
  puVar6[5] = puVar6[0xf];
  puVar6[4] = uVar3;
  puVar6[3] = uVar2;
  puVar6[2] = uVar1;
  puVar6[1] = uVar5;
  *puVar6 = uVar4;
  *(undefined8 *)(puVar6 + -2) = 0x1407b7747;
  FUN_1407b774f();
  return;
}

