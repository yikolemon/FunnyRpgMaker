/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101189de */

undefined4 * FUN_101189de(char *param_1)

{
  size_t sVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  if (*(char *)(DAT_1039d74c + 0xa6) == '\0') {
    param_1 = (char *)FUN_100fa77d(param_1);
  }
  sVar1 = _strlen(param_1);
  puVar2 = (undefined4 *)FUN_10118a58(sVar1 + 0x25);
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[8] = 0;
  *(undefined2 *)(puVar2 + 7) = 0xffff;
  uVar3 = FUN_100fa6c3(param_1,sVar1,0);
  *puVar2 = uVar3;
  FUN_1025b2d0(puVar2 + 9,param_1,sVar1 + 1);
  return puVar2;
}

