/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140125a14 */

void FUN_140125a14(undefined8 *param_1,undefined1 *param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined1 param_7,undefined4 param_8,
                  undefined4 param_9,undefined8 param_10)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  int iVar6;
  bool bVar7;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  uVar2 = FUN_140131180(*param_1,param_6,0,&local_18,param_4,param_5);
  bVar7 = (int)local_18 == 0x2d;
  lVar4 = param_3 - (ulonglong)bVar7;
  iVar6 = local_18._4_4_ + -1;
  if (param_3 == -1) {
    lVar4 = -1;
  }
  iVar3 = FUN_140130fa0(param_2 + bVar7,lVar4,param_6,&local_18,uVar2,param_9,param_10);
  if (iVar3 == 0) {
    iVar3 = local_18._4_4_ + -1;
    if ((iVar3 < -4) || (param_6 <= iVar3)) {
      FUN_140125058(param_2,param_3,param_6,param_7,param_8,&local_18,1,param_10);
    }
    else {
      pcVar1 = param_2 + bVar7;
      if (iVar6 < iVar3) {
        do {
          pcVar5 = pcVar1;
          pcVar1 = pcVar5 + 1;
        } while (*pcVar5 != '\0');
        pcVar5[-1] = '\0';
      }
      FUN_1401257ec(param_2,param_3,param_6,&local_18,1,param_10);
    }
  }
  else {
    *param_2 = 0;
  }
  return;
}

