/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400b1f35 */

uint FUN_1400b1f35(undefined8 param_1,uint *param_2,code *param_3,undefined8 param_4,int param_5,
                  int param_6)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  char *pcVar4;
  uint uVar5;
  uint local_98;
  int local_94;
  undefined8 local_60;
  longlong local_58;
  uint local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_58 = DAT_140f2a910;
  if ((int)*param_2 < param_5 && -1 < (int)*param_2) {
    uVar3 = (*param_3)(param_4);
  }
  else {
    uVar3 = 0;
  }
  if ((param_6 != -1) && ((*(byte *)(local_58 + 0x2030) & 0x10) == 0)) {
    local_94 = FUN_1400b1e57(param_6);
    local_98 = 0x7f7fffff;
    local_60 = 0;
    FUN_14008fdd9(&local_60,&local_98,0,0);
  }
  cVar2 = FUN_1400b1652(param_1,uVar3,0);
  local_4c = 0;
  if (cVar2 != '\0') {
    FUN_1400796ae(&local_98);
    FUN_140079772(&local_98,param_5,DAT_1401c86a4);
    FUN_140079aaa(&local_98,*param_2,*param_2 + 1);
    local_4c = 0;
    while (cVar2 = FUN_140079cee(&local_98), uVar5 = local_98, cVar2 != '\0') {
      for (; (int)uVar5 < local_94; uVar5 = uVar5 + 1) {
        pcVar4 = (char *)(*param_3)(param_4,uVar5);
        FUN_140091425(uVar5);
        if (pcVar4 == (char *)0x0) {
          pcVar4 = "*Unknown item*";
        }
        uVar1 = *param_2;
        local_60 = 0;
        uVar3 = FUN_1400b2126(pcVar4,uVar5 == uVar1,0,&local_60);
        if (((char)uVar3 != '\0') && (*param_2 != uVar5)) {
          *param_2 = uVar5;
          local_4c = (uint)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
        }
        if (uVar5 == uVar1) {
          FUN_140090647();
        }
        FUN_140091667();
      }
    }
    FUN_1400b1e9c();
    if ((local_4c & 1) != 0) {
      FUN_1400807a3(*(undefined4 *)(local_58 + 0x1fe0));
    }
    thunk_FUN_1400796ce(&local_98);
  }
  return local_4c & 0xffffff01;
}

