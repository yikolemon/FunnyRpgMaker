/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c5eb6 */

undefined4 * FUN_100c5eb6(undefined4 *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  char cVar2;
  byte bVar3;
  SIZE_T SVar4;
  SIZE_T SVar5;
  byte bVar6;
  _union_530 local_8c;
  SIZE_T SStack_88;
  LPCVOID pvStack_84;
  LPCVOID pvStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined1 local_68 [24];
  _MEMORY_BASIC_INFORMATION local_50;
  LPCVOID local_34;
  LPCVOID local_30;
  PVOID local_2c;
  SIZE_T SStack_28;
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_8c;
  local_18 = &LAB_100c7df0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_14 = 0;
  local_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  local_8c.dwOemId = 0;
  SStack_88 = 0;
  pvStack_84 = (LPCVOID)0x0;
  pvStack_80 = (LPCVOID)0x0;
  local_6c = 0;
  GetSystemInfo((LPSYSTEM_INFO)&local_8c.s);
  local_30 = pvStack_80;
  for (local_34 = pvStack_84; local_34 < local_30; local_34 = (LPCVOID)((int)local_34 + SVar5)) {
    local_14 = 0;
    SVar4 = VirtualQuery(local_34,&local_50,0x1c);
    SVar5 = SStack_88;
    if ((SVar4 != 0) && (SVar5 = local_50.RegionSize, local_50.State == 0x1000)) {
      FUN_100c5d8c(local_68,local_50.BaseAddress);
      local_14 = 1;
      cVar2 = FUN_1008afc2(param_2);
      if (cVar2 != '\0') {
        local_2c = local_50.BaseAddress;
        SStack_28 = local_50.RegionSize;
        bVar3 = (byte)(local_50.Protect >> 6) & 1;
        bVar6 = 1;
        if ((local_50.Protect & 0x26) == 0) {
          bVar6 = bVar3;
        }
        if ((local_50.Protect & 0x30) != 0) {
          bVar3 = 1;
        }
        local_24 = (uint)CONCAT12(bVar3,CONCAT11((local_50.Protect & 0x44) != 0,bVar6));
        puVar1 = (undefined8 *)param_1[1];
        if (puVar1 == (undefined8 *)param_1[2]) {
          FUN_10064e1a(puVar1,&local_2c);
        }
        else {
          *(uint *)(puVar1 + 1) = local_24;
          *puVar1 = CONCAT44(local_50.RegionSize,local_50.BaseAddress);
          param_1[1] = param_1[1] + 0xc;
        }
      }
      local_14 = 0xffffffff;
      FUN_10001134();
      SVar5 = local_50.RegionSize;
    }
  }
  ExceptionList = local_1c;
  return param_1;
}

