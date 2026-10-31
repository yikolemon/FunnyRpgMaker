/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10019fe0 */

ushort __thiscall FUN_10019fe0(undefined4 param_1,int param_2,int param_3,char param_4)

{
  char cVar1;
  ushort uVar2;
  char *pcVar3;
  ushort uVar4;
  int iVar5;
  
  pcVar3 = "alnum";
  iVar5 = -0xf0;
  do {
    if (param_3 - param_2 == *(int *)(&UNK_1028f9cc + iVar5)) {
      cVar1 = FUN_1001a045(param_2,param_3,pcVar3,param_1);
      if (cVar1 != '\0') {
        uVar4 = *(ushort *)(&UNK_1028f9d0 + iVar5);
        goto LAB_1001a02b;
      }
    }
    pcVar3 = *(char **)(&DAT_1028f9d4 + iVar5);
    iVar5 = iVar5 + 0x10;
  } while (iVar5 != 0);
  uVar4 = 0;
LAB_1001a02b:
  uVar2 = uVar4 | 3;
  if ((uVar4 & 3) == 0) {
    uVar2 = uVar4;
  }
  if (param_4 == '\0') {
    uVar2 = uVar4;
  }
  return uVar2;
}

