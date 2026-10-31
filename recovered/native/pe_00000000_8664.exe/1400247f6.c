/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400247f6 */

undefined8
FUN_1400247f6(undefined8 param_1,undefined8 param_2,ulonglong param_3,int param_4,uint param_5,
             char param_6,longlong param_7)

{
  undefined1 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined8 local_288;
  longlong local_280;
  undefined8 local_278;
  code *local_270;
  undefined1 local_268 [504];
  undefined1 *local_70;
  ulonglong local_68;
  undefined1 local_60 [8];
  undefined1 local_58 [16];
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*(longlong *)(param_7 + 0x30) == 0) {
    if (param_6 == '\0') {
      FUN_14001a250(&local_288,param_3 & 0xffffffff,param_4);
      lVar9 = (longlong)&local_288 + (longlong)param_4;
    }
    else {
      lVar9 = (longlong)&local_288 + (longlong)param_4 + 1;
      uVar5 = param_4 - param_5;
      lVar2 = lVar9;
      if ((int)uVar5 < 2) {
        uVar3 = param_3 & 0xffffffff;
      }
      else {
        uVar7 = (uVar5 >> 1) + 1;
        do {
          iVar4 = (int)param_3;
          uVar3 = (param_3 & 0xffffffff) / 100;
          param_3 = (param_3 & 0xffffffff) / 100;
          *(undefined2 *)(lVar2 + -2) =
               *(undefined2 *)(&DAT_1401c9cf0 + (ulonglong)(uint)(iVar4 + (int)param_3 * -100) * 2);
          lVar2 = lVar2 + -2;
          uVar7 = uVar7 - 1;
        } while (1 < uVar7);
      }
      uVar6 = uVar3;
      if ((uVar5 & 1) != 0) {
        uVar6 = uVar3 / 10;
        *(byte *)(lVar2 + -1) = (char)uVar3 + (char)(uVar3 / 10) * -10 | 0x30;
        lVar2 = lVar2 + -1;
      }
      *(char *)(lVar2 + -1) = param_6;
      FUN_14001a250((lVar2 + -1) - (longlong)(int)param_5,uVar6,param_5);
    }
    FUN_14001aea5(param_1,&local_288,lVar9,param_2);
  }
  else {
    local_288 = local_268;
    local_280 = 0;
    local_270 = FUN_14001d464;
    local_278 = 500;
    if (param_6 == '\0') {
      FUN_14001a250(local_58,param_3 & 0xffffffff,param_4);
      puVar8 = local_58 + param_4;
    }
    else {
      puVar8 = local_58 + (longlong)param_4 + 1;
      uVar5 = param_4 - param_5;
      puVar1 = puVar8;
      if ((int)uVar5 < 2) {
        uVar3 = param_3 & 0xffffffff;
      }
      else {
        uVar7 = (uVar5 >> 1) + 1;
        do {
          iVar4 = (int)param_3;
          uVar3 = (param_3 & 0xffffffff) / 100;
          param_3 = (param_3 & 0xffffffff) / 100;
          *(undefined2 *)(puVar1 + -2) =
               *(undefined2 *)(&DAT_1401c9cf0 + (ulonglong)(uint)(iVar4 + (int)param_3 * -100) * 2);
          puVar1 = puVar1 + -2;
          uVar7 = uVar7 - 1;
        } while (1 < uVar7);
      }
      uVar6 = uVar3;
      if ((uVar5 & 1) != 0) {
        uVar6 = uVar3 / 10;
        puVar1[-1] = (char)uVar3 + (char)(uVar3 / 10) * -10 | 0x30;
        puVar1 = puVar1 + -1;
      }
      puVar1[-1] = param_6;
      FUN_14001a250(puVar1 + (-1 - (longlong)(int)param_5),uVar6,param_5);
    }
    FUN_14001aea5(local_60,local_58,puVar8,&local_288);
    local_68 = (ulonglong)param_5;
    local_70 = local_288;
    FUN_14001deb6(param_7,local_58,param_2);
    FUN_14001aea5(param_1,local_288 + (int)param_5,local_288 + local_280,param_2);
    if (local_288 != local_268) {
      thunk_FUN_1401aea30();
    }
  }
  return param_1;
}

