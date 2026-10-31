/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407aa0e1 */

undefined4 FUN_1407aa0e1(undefined4 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(ulonglong)((int)&stack0xfffffffffffffff8 - 0x2c);
  uVar1 = *(undefined4 *)(param_2 + 0x24bc);
  uVar2 = *(undefined4 *)(param_2 + 0x1228);
  uVar3 = *(undefined4 *)(param_2 + 0x1220);
  puVar4[10] = puVar4[0x11];
  puVar4[5] = puVar4[0xd];
  puVar4[6] = puVar4[0xe];
  puVar4[7] = puVar4[0xf];
  puVar4[8] = puVar4[0x10];
  puVar4[4] = uVar1;
  puVar4[2] = uVar2;
  puVar4[1] = uVar3;
  *puVar4 = param_1;
  puVar4[9] = 0;
  puVar4[3] = 0x7f7fffff;
  *(undefined8 *)(puVar4 + -2) = 0x1407aa137;
  FUN_1407eb3f7();
  return param_1;
}

