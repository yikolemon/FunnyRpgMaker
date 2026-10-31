/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10250990 */

undefined2 * FUN_10250990(char *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined8 local_20;
  undefined8 local_18;
  undefined2 *local_10;
  char *local_c;
  undefined1 local_8 [4];
  
  local_18 = 0;
  iVar5 = 0;
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar3 = pcVar3 + (1 - (int)(param_1 + 1));
  local_c = pcVar3;
  pcVar4 = param_1;
  while ((pcVar3 != (char *)0x0 &&
         (iVar2 = FUN_1022d8f0(local_8,pcVar4,pcVar3,&local_18,param_2), 0 < iVar2))) {
    pcVar4 = pcVar4 + iVar2;
    iVar5 = iVar5 + 1;
    pcVar3 = pcVar3 + -iVar2;
  }
  iVar5 = iVar5 + 1;
  local_10 = (undefined2 *)FUN_1026d360(iVar5,2);
  if (local_10 != (undefined2 *)0x0) {
    local_20 = 0;
    puVar6 = local_10;
    while ((iVar5 != 0 &&
           (iVar2 = FUN_1022d8f0(puVar6,param_1,local_c,&local_20,param_2), 0 < iVar2))) {
      param_1 = param_1 + iVar2;
      puVar6 = puVar6 + 1;
      iVar5 = iVar5 + -1;
    }
    *puVar6 = 0;
    return local_10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10228470();
}

