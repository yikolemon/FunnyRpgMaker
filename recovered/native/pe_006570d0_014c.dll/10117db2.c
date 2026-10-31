/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10117db2 */

undefined4 FUN_10117db2(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  
  iVar5 = DAT_1039d74c;
  if ((((*(char *)(DAT_1039d74c + 0x2250) == '\x01') && (*(int *)(DAT_1039d74c + 0x14d4) != 0)) &&
      (iVar1 = *(int *)(DAT_1039d74c + 0x14cc),
      *(int *)(iVar1 + 0x3b0) == *(int *)(*(int *)(DAT_1039d74c + 0x14d4) + 0x3b0))) &&
     (((cVar6 = FUN_10102f3a(param_1,param_1 + 2,1), cVar6 != '\0' &&
       (param_2 != *(int *)(iVar5 + 0x2268))) && (*(char *)(iVar1 + 0xfe) == '\0')))) {
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = param_1[3];
    *(undefined4 *)(iVar5 + 0x2298) = *param_1;
    *(undefined4 *)(iVar5 + 0x229c) = uVar2;
    *(undefined4 *)(iVar5 + 0x22a0) = uVar3;
    *(undefined4 *)(iVar5 + 0x22a4) = uVar4;
    uVar2 = *(undefined4 *)(iVar1 + 0x290);
    uVar3 = *(undefined4 *)(iVar1 + 0x294);
    uVar4 = *(undefined4 *)(iVar1 + 0x298);
    *(undefined4 *)(iVar5 + 0x22a8) = *(undefined4 *)(iVar1 + 0x28c);
    *(undefined4 *)(iVar5 + 0x22ac) = uVar2;
    *(undefined4 *)(iVar5 + 0x22b0) = uVar3;
    *(undefined4 *)(iVar5 + 0x22b4) = uVar4;
    *(int *)(iVar5 + 0x22b8) = param_2;
    *(undefined4 *)(iVar5 + 0x22bc) = 0;
    *(undefined1 *)(iVar5 + 0x2252) = 1;
    return 1;
  }
  return 0;
}

