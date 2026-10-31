/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400285be */

undefined8
FUN_1400285be(undefined8 param_1,undefined8 param_2,ulonglong param_3,int param_4,uint param_5,
             char param_6,longlong param_7)

{
  undefined1 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 local_298;
  longlong local_290;
  undefined8 local_288;
  code *local_280;
  undefined1 local_278 [504];
  undefined1 *local_80;
  ulonglong local_78;
  undefined1 local_70 [8];
  undefined1 local_68 [32];
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*(longlong *)(param_7 + 0x30) == 0) {
    if (param_6 == '\0') {
      FUN_14001b11b(&local_298,param_3,param_4);
      lVar7 = (longlong)&local_298 + (longlong)param_4;
    }
    else {
      lVar7 = (longlong)&local_298 + (longlong)param_4 + 1;
      uVar4 = param_4 - param_5;
      lVar2 = lVar7;
      if (1 < (int)uVar4) {
        uVar6 = (uVar4 >> 1) + 1;
        uVar3 = param_3;
        do {
          param_3 = uVar3 / 100;
          *(undefined2 *)(lVar2 + -2) = *(undefined2 *)(&DAT_1401c9cf0 + (uVar3 % 100) * 2);
          lVar2 = lVar2 + -2;
          uVar6 = uVar6 - 1;
          uVar3 = param_3;
        } while (1 < uVar6);
      }
      uVar3 = param_3;
      if ((uVar4 & 1) != 0) {
        uVar3 = param_3 / 10;
        *(byte *)(lVar2 + -1) = (char)param_3 + (char)uVar3 * -10 | 0x30;
        lVar2 = lVar2 + -1;
      }
      *(char *)(lVar2 + -1) = param_6;
      FUN_14001b11b((lVar2 + -1) - (longlong)(int)param_5,uVar3,param_5);
    }
    FUN_14001aea5(param_1,&local_298,lVar7,param_2);
  }
  else {
    local_298 = local_278;
    local_290 = 0;
    local_280 = FUN_14001d464;
    local_288 = 500;
    if (param_6 == '\0') {
      FUN_14001b11b(local_68,param_3,param_4);
      puVar5 = local_68 + param_4;
    }
    else {
      puVar5 = local_68 + (longlong)param_4 + 1;
      uVar4 = param_4 - param_5;
      puVar1 = puVar5;
      if (1 < (int)uVar4) {
        uVar6 = (uVar4 >> 1) + 1;
        uVar3 = param_3;
        do {
          param_3 = uVar3 / 100;
          *(undefined2 *)(puVar1 + -2) = *(undefined2 *)(&DAT_1401c9cf0 + (uVar3 % 100) * 2);
          puVar1 = puVar1 + -2;
          uVar6 = uVar6 - 1;
          uVar3 = param_3;
        } while (1 < uVar6);
      }
      uVar3 = param_3;
      if ((uVar4 & 1) != 0) {
        uVar3 = param_3 / 10;
        puVar1[-1] = (char)param_3 + (char)uVar3 * -10 | 0x30;
        puVar1 = puVar1 + -1;
      }
      puVar1[-1] = param_6;
      FUN_14001b11b(puVar1 + (-1 - (longlong)(int)param_5),uVar3,param_5);
    }
    FUN_14001aea5(local_70,local_68,puVar5,&local_298);
    local_78 = (ulonglong)param_5;
    local_80 = local_298;
    FUN_14001deb6(param_7,local_68,param_2);
    FUN_14001aea5(param_1,local_298 + (int)param_5,local_298 + local_290,param_2);
    if (local_298 != local_278) {
      thunk_FUN_1401aea30();
    }
  }
  return param_1;
}

