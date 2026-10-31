/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401631e1 */

void FUN_1401631e1(undefined8 *param_1,undefined8 *param_2,char param_3)

{
  undefined *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2 + 6;
  param_1[7] = (longlong)param_2 + 0x34;
  param_1[8] = param_2 + 7;
  param_1[9] = param_2 + 8;
  param_1[10] = param_2 + 9;
  if (param_3 == '\0') {
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
    puVar3 = (undefined1 *)((longlong)param_2 + 0x59);
    lVar2 = 0x5b;
    lVar4 = 0x5a;
  }
  else {
    *(undefined1 *)(param_1 + 0xb) = 0;
    puVar3 = (undefined1 *)((longlong)param_2 + 0x5c);
    lVar2 = 0x5e;
    lVar4 = 0x5d;
  }
  *(undefined1 *)((longlong)param_1 + 0x59) = *puVar3;
  *(undefined1 *)((longlong)param_1 + 0x5a) = *(undefined1 *)((longlong)param_2 + lVar4);
  *(undefined1 *)((longlong)param_1 + 0x5b) = *(undefined1 *)((longlong)param_2 + lVar2);
  *(char *)((longlong)param_1 + 0x5c) = param_3;
  puVar1 = PTR_FUN_140ea0b90;
  param_1[0xc] = PTR_FUN_140ea0b88;
  param_1[0xd] = puVar1;
  return;
}

