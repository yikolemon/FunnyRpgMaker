/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140096c98 */

undefined8 * FUN_140096c98(char *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  size_t sVar3;
  undefined8 *puVar4;
  
  lVar1 = DAT_140f2a910;
  if (*(char *)(DAT_140f2a910 + 0xba) == '\0') {
    param_1 = (char *)FUN_1400780c3(param_1);
  }
  sVar3 = strlen(param_1);
  puVar4 = (undefined8 *)FUN_140096d24(lVar1 + 0x2998,sVar3 + 0x25);
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined4 *)(puVar4 + 4) = 0;
  *(undefined2 *)((longlong)puVar4 + 0x1c) = 0xffff;
  uVar2 = FUN_140077ff5(param_1,sVar3,0);
  *(undefined4 *)puVar4 = uVar2;
  FUN_1401c5180((longlong)puVar4 + 0x24,param_1,sVar3 + 1);
  return puVar4;
}

