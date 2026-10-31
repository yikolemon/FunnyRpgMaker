/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102054d9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102054d9(undefined4 *param_1,undefined4 *param_2,char param_3)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  iVar3 = (int)param_2 + _DAT_10312610;
  iVar4 = (int)param_2 + _UNK_10312614;
  iVar5 = (int)param_2 + _UNK_10312618;
  iVar6 = (int)param_2 + _UNK_1031261c;
  param_1[5] = param_2[5];
  param_1[6] = iVar3;
  param_1[7] = iVar4;
  param_1[8] = iVar5;
  param_1[9] = iVar6;
  param_1[10] = param_2 + 0xc;
  if (param_3 == '\0') {
    param_3 = '\0';
    *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0x10);
    puVar2 = (undefined4 *)((int)param_2 + 0x41);
    iVar4 = 0x43;
    iVar3 = 0x42;
  }
  else {
    *(undefined1 *)(param_1 + 0xb) = 0;
    puVar2 = param_2 + 0x11;
    iVar4 = 0x46;
    iVar3 = 0x45;
  }
  *(undefined1 *)((int)param_1 + 0x2d) = *(undefined1 *)puVar2;
  *(undefined1 *)((int)param_1 + 0x2e) = *(undefined1 *)((int)param_2 + iVar3);
  *(undefined1 *)((int)param_1 + 0x2f) = *(undefined1 *)((int)param_2 + iVar4);
  *(char *)(param_1 + 0xc) = param_3;
  puVar1 = PTR_FUN_10312240;
  param_1[0xe] = PTR_FUN_10312244;
  param_1[0xd] = puVar1;
  return;
}

