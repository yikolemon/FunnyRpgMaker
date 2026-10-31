/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10048617 */

undefined2 * FUN_10048617(char *param_1,undefined4 param_2)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined2 *puStack_30;
  int local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_16 [2];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&puStack_30;
  iVar6 = 0;
  local_1c = 0;
  local_20 = 0;
  sVar1 = _strlen(param_1);
  iVar2 = sVar1 + 1;
  pcVar5 = param_1;
  local_2c = iVar2;
  if (iVar2 == 0) {
    iVar6 = 1;
  }
  else {
    do {
      iVar3 = FUN_1022d8f0(local_16,pcVar5,iVar2,&local_20,param_2);
      if (iVar3 < 1) break;
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 - iVar3;
      pcVar5 = pcVar5 + iVar3;
    } while (iVar2 != 0);
    iVar6 = iVar6 + 1;
  }
  puVar4 = (undefined2 *)FUN_1026d360(iVar6,2);
  if (puVar4 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10228470();
  }
  uStack_24 = 0;
  uStack_28 = 0;
  puStack_30 = puVar4;
  while ((iVar6 != 0 &&
         (iVar2 = FUN_1022d8f0(puVar4,param_1,local_2c,&uStack_28,param_2), 0 < iVar2))) {
    param_1 = param_1 + iVar2;
    puVar4 = puVar4 + 1;
    iVar6 = iVar6 + -1;
  }
  *puVar4 = 0;
  if (DAT_10388d00 == (local_14 ^ (uint)&puStack_30)) {
    return puStack_30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

