/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c9b62 */

undefined8 * FUN_1800c9b62(undefined8 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  PVOID pvVar3;
  char cVar4;
  SIZE_T SVar5;
  ulonglong uVar6;
  byte bVar7;
  byte bVar8;
  LPVOID lpAddress;
  undefined1 local_e8 [32];
  _SYSTEM_INFO local_c8;
  _MEMORY_BASIC_INFORMATION local_98;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_c8.dwNumberOfProcessors = 0;
  local_c8.dwProcessorType = 0;
  local_c8.dwAllocationGranularity = 0;
  local_c8.wProcessorLevel = 0;
  local_c8.wProcessorRevision = 0;
  local_c8.lpMaximumApplicationAddress = (LPCVOID)0x0;
  local_c8.dwActiveProcessorMask = 0;
  local_c8.u = (_union_552)0x0;
  local_c8.dwPageSize = 0;
  local_c8.lpMinimumApplicationAddress = (LPCVOID)0x0;
  local_50 = param_1;
  GetSystemInfo(&local_c8);
  pvVar2 = local_c8.lpMaximumApplicationAddress;
  for (lpAddress = local_c8.lpMinimumApplicationAddress; lpAddress < pvVar2;
      lpAddress = (LPVOID)((longlong)lpAddress + uVar6)) {
    SVar5 = VirtualQuery(lpAddress,&local_98,0x30);
    if (SVar5 == 0) {
      uVar6 = (ulonglong)local_c8._0_8_ >> 0x20;
    }
    else {
      uVar6 = local_98.RegionSize;
      if (local_98.State == 0x1000) {
        FUN_1800c9a2b(local_e8,local_98.BaseAddress);
        cVar4 = FUN_18008c028(local_e8,param_2);
        if (cVar4 != '\0') {
          local_68 = local_98.BaseAddress;
          pvVar3 = local_68;
          uStack_60 = local_98.RegionSize;
          uVar6 = uStack_60;
          bVar7 = (byte)local_98.Protect >> 6 & 1;
          bVar8 = 1;
          if ((local_98.Protect & 0x26) == 0) {
            bVar8 = bVar7;
          }
          if ((local_98.Protect & 0x30) != 0) {
            bVar7 = 1;
          }
          local_58 = (ulonglong)CONCAT12(bVar7,CONCAT11((local_98.Protect & 0x44) != 0,bVar8));
          puVar1 = (undefined4 *)local_50[1];
          if (puVar1 == (undefined4 *)local_50[2]) {
            FUN_180064b72(local_50,puVar1,&local_68);
          }
          else {
            *(ulonglong *)(puVar1 + 4) = local_58;
            local_68._0_4_ = SUB84(local_98.BaseAddress,0);
            local_68._4_4_ = (undefined4)((ulonglong)local_98.BaseAddress >> 0x20);
            uStack_60._0_4_ = (undefined4)local_98.RegionSize;
            uStack_60._4_4_ = (undefined4)(local_98.RegionSize >> 0x20);
            *puVar1 = (undefined4)local_68;
            puVar1[1] = local_68._4_4_;
            puVar1[2] = (undefined4)uStack_60;
            puVar1[3] = uStack_60._4_4_;
            local_50[1] = local_50[1] + 0x18;
            local_68 = pvVar3;
            uStack_60 = uVar6;
          }
        }
        FUN_1800010ec(local_e8);
        uVar6 = local_98.RegionSize;
      }
    }
  }
  return local_50;
}

