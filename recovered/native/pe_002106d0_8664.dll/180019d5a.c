/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180019d5a */

ushort FUN_180019d5a(undefined8 param_1,longlong param_2,longlong param_3,char param_4)

{
  ushort uVar1;
  char cVar2;
  ushort uVar3;
  char *pcVar4;
  longlong lVar5;
  
  pcVar4 = "alnum";
  lVar5 = 0x18;
  do {
    if (param_3 - param_2 == (ulonglong)*(uint *)(&UNK_1802b0fa8 + lVar5)) {
      cVar2 = FUN_180019de6(param_2,param_3,pcVar4,param_1);
      if (cVar2 != '\0') {
        uVar3 = *(ushort *)(&UNK_1802b0fac + lVar5);
        goto LAB_180019dc6;
      }
    }
    pcVar4 = *(char **)((longlong)&PTR_s_alnum_1802b0fb0 + lVar5);
    lVar5 = lVar5 + 0x18;
  } while (lVar5 != 0x180);
  uVar3 = 0;
LAB_180019dc6:
  uVar1 = uVar3 | 3;
  if ((uVar3 & 3) == 0) {
    uVar1 = uVar3;
  }
  if (param_4 == '\0') {
    uVar1 = uVar3;
  }
  return uVar1;
}

