/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012badd */

void FUN_18012badd(longlong param_1,int param_2,char param_3,undefined1 *param_4,undefined8 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)param_2 * 0xc);
  iVar2 = puVar1[2];
  if (((param_2 == 0) && (iVar2 == -1)) && (lVar3 = FUN_1801118dd(*puVar1), lVar3 != 0)) {
    uVar4 = FUN_1800fee07(*(undefined8 *)(lVar3 + 8));
    pcVar5 = "%s";
    if (param_3 != '\0') {
      pcVar5 = "\"%s\" [window]";
    }
  }
  else {
    if (*(char *)((longlong)puVar1 + 5) != '\x01') {
      if ((int)*(char *)(param_1 + 6) < *(int *)(param_1 + 8)) {
        *param_4 = 0;
        return;
      }
      FUN_1800fead5(param_4,param_5,&DAT_18036cfe1);
      return;
    }
    uVar4 = FUN_1800fee07((longlong)iVar2 + *(longlong *)(param_1 + 0x20));
    pcVar5 = "\"%s\"";
    if (*(char *)((longlong)puVar1 + 6) != '\v') {
      pcVar5 = "%s";
    }
    if (param_3 == '\0') {
      pcVar5 = "%s";
    }
  }
  FUN_1800fead5(param_4,param_5,pcVar5,uVar4);
  return;
}

