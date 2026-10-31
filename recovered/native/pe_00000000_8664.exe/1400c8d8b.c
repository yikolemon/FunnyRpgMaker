/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c8d8b */

uint FUN_1400c8d8b(undefined8 param_1,uint *param_2,code *param_3,undefined8 param_4,
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
  
  lVar2 = DAT_140f2a910;
  local_60 = 0xfffffffffffffffe;
  if (param_6 < 0) {
    FUN_140077fbc(param_5,7);
  }
  FUN_140093756();
  local_70 = lVar2;
  cVar3 = FUN_1400c8a84(param_1);
  if (cVar3 == '\0') {
    local_64 = 0;
  }
  else {
    FUN_1400796ae(&local_b0);
    uVar7 = FUN_140093756();
    FUN_140079772(&local_b0,param_5,uVar7);
    FUN_140079aaa(&local_b0,*param_2,*param_2 + 1);
    local_64 = 0;
    while (cVar3 = FUN_140079cee(&local_b0), uVar6 = local_b0, cVar3 != '\0') {
      for (; (int)uVar6 < local_ac; uVar6 = uVar6 + 1) {
        pcVar4 = (char *)(*param_3)(param_4,uVar6);
        FUN_140091425(uVar6);
        if (pcVar4 == (char *)0x0) {
          pcVar4 = "*Unknown item*";
        }
        uVar1 = *param_2;
        local_78 = 0;
        uVar5 = FUN_1400b2126(pcVar4,uVar6 == uVar1,0,&local_78);
        if ((char)uVar5 != '\0') {
          *param_2 = uVar6;
          local_64 = (uint)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        }
        if (uVar6 == uVar1) {
          FUN_140090647();
        }
        FUN_140091667();
      }
    }
    FUN_1400c8d4d();
    if ((local_64 & 1) != 0) {
      FUN_1400807a3(*(undefined4 *)(local_70 + 0x1fe0));
    }
    thunk_FUN_1400796ce(&local_b0);
  }
  return local_64 & 0xffffff01;
}

