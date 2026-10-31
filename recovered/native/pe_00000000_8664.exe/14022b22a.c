/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14022b22a */

ushort FUN_14022b22a(undefined8 param_1,longlong param_2,longlong param_3,char param_4)

{
  ushort uVar1;
  char cVar2;
  ushort uVar3;
  undefined *puVar4;
  longlong lVar5;
  
  puVar4 = &DAT_1405779dd;
  lVar5 = 0x18;
  do {
    if (param_3 - param_2 == (ulonglong)*(uint *)(&UNK_1404c2478 + lVar5)) {
      cVar2 = FUN_14022b2b6(param_2,param_3,puVar4,param_1);
      if (cVar2 != '\0') {
        uVar3 = *(ushort *)(&UNK_1404c247c + lVar5);
        goto LAB_14022b296;
      }
    }
    puVar4 = *(undefined **)(&DAT_1404c2480 + lVar5);
    lVar5 = lVar5 + 0x18;
  } while (lVar5 != 0x180);
  uVar3 = 0;
LAB_14022b296:
  uVar1 = uVar3 | 3;
  if ((uVar3 & 3) == 0) {
    uVar1 = uVar3;
  }
  if (param_4 == '\0') {
    uVar1 = uVar3;
  }
  return uVar1;
}

