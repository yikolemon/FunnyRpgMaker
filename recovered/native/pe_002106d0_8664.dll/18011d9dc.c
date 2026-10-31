/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011d9dc */

undefined8 * FUN_18011d9dc(char *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  size_t sVar3;
  undefined8 *puVar4;
  
  lVar1 = DAT_180419160;
  if (*(char *)(DAT_180419160 + 0xba) == '\0') {
    param_1 = (char *)FUN_1800fee07(param_1);
  }
  sVar3 = strlen(param_1);
  puVar4 = (undefined8 *)FUN_18011da68(lVar1 + 0x2998,sVar3 + 0x25);
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined4 *)(puVar4 + 4) = 0;
  *(undefined2 *)((longlong)puVar4 + 0x1c) = 0xffff;
  uVar2 = FUN_1800fed39(param_1,sVar3,0);
  *(undefined4 *)puVar4 = uVar2;
  FUN_1802a82f0((longlong)puVar4 + 0x24,param_1,sVar3 + 1);
  return puVar4;
}

