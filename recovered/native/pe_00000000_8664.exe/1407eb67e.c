/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407eb67e */

undefined4 FUN_1407eb67e(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe8 - 0x2c);
  uVar1 = puVar2[0xf];
  puVar2[10] = 0;
  puVar2[9] = 0;
  puVar2[8] = puVar2[0x15];
  puVar2[7] = puVar2[0x14];
  puVar2[6] = puVar2[0x14];
  puVar2[5] = puVar2[0x13];
  puVar2[4] = puVar2[0x12];
  puVar2[3] = puVar2[0x11];
  puVar2[2] = puVar2[0x10];
  puVar2[1] = param_1;
  *puVar2 = uVar1;
  *(undefined8 *)(puVar2 + -2) = 0x1407eb6de;
  FUN_1407eb3f7();
  return uVar1;
}

