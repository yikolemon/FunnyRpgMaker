/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18014fe5b */

uint FUN_18014fe5b(undefined8 param_1,uint *param_2,code *param_3,undefined8 param_4,
                  undefined4 param_5,int param_6)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  char *pcVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint local_b0;
  int local_ac;
  undefined8 local_78;
  longlong local_70;
  uint local_64;
  undefined8 local_60;
  
  lVar2 = DAT_180419160;
  local_60 = 0xfffffffffffffffe;
  if (param_6 < 0) {
    FUN_1800fed00(param_5,7);
  }
  FUN_18011a43e();
  local_70 = lVar2;
  cVar3 = FUN_18014fb54(param_1);
  if (cVar3 == '\0') {
    local_64 = 0;
  }
  else {
    FUN_1801003f2(&local_b0);
    uVar7 = FUN_18011a43e();
    FUN_1801004b6(&local_b0,param_5,uVar7);
    FUN_1801007ee(&local_b0,*param_2,*param_2 + 1);
    local_64 = 0;
    while (cVar3 = FUN_180100a32(&local_b0), uVar6 = local_b0, cVar3 != '\0') {
      for (; (int)uVar6 < local_ac; uVar6 = uVar6 + 1) {
        pcVar4 = (char *)(*param_3)(param_4,uVar6);
        FUN_18011810d(uVar6);
        if (pcVar4 == (char *)0x0) {
          pcVar4 = "*Unknown item*";
        }
        uVar1 = *param_2;
        local_78 = 0;
        uVar5 = FUN_1801391f6(pcVar4,uVar6 == uVar1,0,&local_78);
        if ((char)uVar5 != '\0') {
          *param_2 = uVar6;
          local_64 = (uint)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        }
        if (uVar6 == uVar1) {
          FUN_18011732f();
        }
        FUN_18011834f();
      }
    }
    FUN_18014fe1d();
    if ((local_64 & 1) != 0) {
      FUN_18010748b(*(undefined4 *)(local_70 + 0x1fe0));
    }
    thunk_FUN_180100412(&local_b0);
  }
  return local_64 & 0xffffff01;
}

