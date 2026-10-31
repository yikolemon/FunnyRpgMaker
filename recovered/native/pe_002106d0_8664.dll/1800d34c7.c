/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d34c7 */

/* WARNING: Type propagation algorithm not settling */

LPVOID FUN_1800d34c7(HANDLE param_1,undefined8 *param_2,LPCVOID param_3,uint param_4)

{
  BOOL BVar1;
  LPVOID lpBaseAddress;
  LPVOID pvVar2;
  undefined1 auStackY_248 [32];
  SIZE_T local_218 [2];
  undefined4 local_208;
  uint local_204;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  int local_1d0 [2];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  ulonglong uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  undefined1 local_18c [2];
  undefined2 local_18a;
  undefined4 local_17c;
  undefined2 local_178;
  undefined2 local_88;
  undefined8 local_86;
  undefined8 uStack_7e;
  undefined8 local_76;
  undefined8 uStack_6e;
  undefined8 local_66;
  undefined2 uStack_5e;
  undefined6 uStack_5c;
  undefined2 uStack_56;
  undefined8 uStack_54;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStackY_248;
  if (param_1 == (HANDLE)0x0) {
    SetLastError(6);
    pvVar2 = (LPVOID)0x0;
  }
  else {
    lpBaseAddress = VirtualAllocEx(param_1,(LPVOID)0x0,(ulonglong)(param_4 + 0x1c8),0x1000,4);
    pvVar2 = (LPVOID)0x0;
    if (lpBaseAddress != (LPVOID)0x0) {
      local_218[0] = 0;
      local_86 = 0;
      uStack_7e = 0;
      local_76 = 0;
      uStack_6e = 0;
      local_66 = 0;
      uStack_5e = 0;
      uStack_5c = 0;
      uStack_56 = 0;
      uStack_54 = 0;
      local_88 = 0x5a4d;
      local_4c = 0x40;
      BVar1 = WriteProcessMemory(param_1,lpBaseAddress,&local_88,0x40,local_218);
      pvVar2 = (LPVOID)0x0;
      if ((BVar1 != 0) && (local_218[0] == 0x40)) {
        FUN_1802a89a0(local_18c,0,0x104);
        local_190 = 0x4550;
        local_17c = 0x200000f0;
        local_18a = 1;
        local_178 = 0x20b;
        BVar1 = WriteProcessMemory(param_1,(LPVOID)((longlong)lpBaseAddress + 0x40),&local_190,0x108
                                   ,local_218);
        pvVar2 = (LPVOID)0x0;
        if ((BVar1 != 0) && (local_218[0] == 0x108)) {
          local_1a0 = 0;
          uStack_198 = 0;
          local_1b8 = 0x72756f7465642e;
          local_1b0 = 0x17000000000;
          uStack_1a8 = (ulonglong)(param_4 + 0x58);
          BVar1 = WriteProcessMemory(param_1,(LPVOID)((longlong)lpBaseAddress + 0x148),&local_1b8,
                                     0x28,local_218);
          pvVar2 = (LPVOID)0x0;
          if ((BVar1 != 0) && (local_218[0] == 0x28)) {
            local_1e0 = 0;
            uStack_1d8 = 0;
            local_1f0 = 0;
            uStack_1e8 = 0;
            local_200 = 0;
            uStack_1f8 = 0;
            local_218[1] = 0x72744400000040;
            local_208 = 0x40;
            local_204 = param_4 + 0x58;
            BVar1 = WriteProcessMemory(param_1,(LPVOID)((longlong)lpBaseAddress + 0x170),
                                       local_218 + 1,0x40,local_218);
            pvVar2 = (LPVOID)0x0;
            if ((BVar1 != 0) && (local_218[0] == 0x40)) {
              local_1d0[0] = param_4 + 0x18;
              local_1d0[1] = 0;
              local_1c8 = *param_2;
              uStack_1c0 = param_2[1];
              BVar1 = WriteProcessMemory(param_1,(LPVOID)((longlong)lpBaseAddress + 0x1b0),local_1d0
                                         ,0x18,local_218);
              pvVar2 = (LPVOID)0x0;
              if ((BVar1 != 0) && (local_218[0] == 0x18)) {
                BVar1 = WriteProcessMemory(param_1,(LPVOID)((longlong)lpBaseAddress + 0x1c8),param_3
                                           ,(ulonglong)param_4,local_218);
                pvVar2 = (LPVOID)0x0;
                if ((BVar1 != 0) && (local_218[0] == param_4)) {
                  SetLastError(0);
                  pvVar2 = (LPVOID)((longlong)lpBaseAddress + 0x1c8);
                }
              }
            }
          }
        }
      }
    }
  }
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStackY_248)) {
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStackY_248);
}

