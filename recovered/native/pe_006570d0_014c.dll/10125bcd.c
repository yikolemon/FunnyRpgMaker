/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10125bcd */

void __fastcall
FUN_10125bcd(int param_1,int param_2,char param_3,undefined1 *param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x10) + param_2 * 0xc);
  iVar2 = puVar1[2];
  if (((param_2 == 0) && (iVar2 == -1)) && (iVar3 = FUN_1010cbc5(*puVar1), iVar3 != 0)) {
    uVar4 = FUN_100fa77d(*(undefined4 *)(iVar3 + 4));
    pcVar5 = "%s";
    if (param_3 != '\0') {
      pcVar5 = "\"%s\" [window]";
    }
  }
  else {
    if (*(char *)((int)puVar1 + 5) != '\x01') {
      if ((int)*(char *)(param_1 + 6) < *(int *)(param_1 + 8)) {
        *param_4 = 0;
        return;
      }
      FUN_100fa4b1(param_4,param_5,&DAT_1033cec2);
      return;
    }
    uVar4 = FUN_100fa77d(iVar2 + *(int *)(param_1 + 0x1c));
    pcVar5 = "\"%s\"";
    if (*(char *)((int)puVar1 + 6) != '\v') {
      pcVar5 = "%s";
    }
    if (param_3 == '\0') {
      pcVar5 = "%s";
    }
  }
  FUN_100fa4b1(param_4,param_5,pcVar5,uVar4);
  return;
}

