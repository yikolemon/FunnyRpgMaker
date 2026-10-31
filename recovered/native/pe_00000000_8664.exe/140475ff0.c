/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140475ff0 */

undefined2 * FUN_140475ff0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined2 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 local_res8 [8];
  undefined8 local_res18;
  undefined8 local_res20;
  
  lVar4 = 0;
  local_res18 = 0;
  lVar6 = -1;
  do {
    lVar2 = lVar6;
    lVar6 = lVar2 + 1;
  } while (*(char *)(param_1 + 1 + lVar2) != '\0');
  lVar6 = lVar2 + 2;
  lVar5 = param_1;
  while ((lVar6 != 0 &&
         (iVar1 = FUN_140450150(local_res8,lVar5,lVar6,&local_res18,param_2), 0 < iVar1))) {
    lVar4 = lVar4 + 1;
    lVar5 = lVar5 + iVar1;
    lVar6 = lVar6 - iVar1;
  }
  lVar4 = lVar4 + 1;
  puVar3 = (undefined2 *)_calloc_base(lVar4,2);
  if (puVar3 != (undefined2 *)0x0) {
    local_res20 = 0;
    puVar7 = puVar3;
    while ((lVar4 != 0 &&
           (iVar1 = FUN_140450150(puVar7,param_1,lVar2 + 2,&local_res20,param_2), 0 < iVar1))) {
      puVar7 = puVar7 + 1;
      param_1 = param_1 + iVar1;
      lVar4 = lVar4 + -1;
    }
    *puVar7 = 0;
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044ac40();
}

