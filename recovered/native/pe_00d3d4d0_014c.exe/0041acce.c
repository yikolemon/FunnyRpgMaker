/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041acce */

/* WARNING: Type propagation algorithm not settling */

LPVOID FUN_0041acce(HANDLE param_1,undefined4 *param_2,LPCVOID param_3,SIZE_T param_4)

{
  LPVOID lpBaseAddress;
  BOOL BVar1;
  LPVOID pvVar2;
  SIZE_T local_1d0 [5];
  undefined4 local_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 local_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 local_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  int local_18c [3];
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 uStack_168;
  int iStack_164;
  undefined4 uStack_160;
  undefined4 local_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 local_14c;
  undefined1 local_148 [2];
  undefined2 local_146;
  undefined4 local_138;
  undefined2 local_134;
  undefined2 local_54;
  undefined4 local_52;
  undefined4 uStack_4e;
  undefined4 uStack_4a;
  undefined4 uStack_46;
  undefined4 local_42;
  undefined4 uStack_3e;
  undefined4 uStack_3a;
  undefined4 uStack_36;
  undefined4 local_32;
  undefined4 uStack_2e;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)local_1d0;
  if (param_1 == (HANDLE)0x0) {
    SetLastError(6);
  }
  else {
    lpBaseAddress = VirtualAllocEx(param_1,(LPVOID)0x0,param_4 + 0x1b8,0x1000,4);
    if (lpBaseAddress != (LPVOID)0x0) {
      local_1d0[0] = 0;
      local_52 = 0;
      uStack_4e = 0;
      uStack_4a = 0;
      uStack_46 = 0;
      local_42 = 0;
      uStack_3e = 0;
      uStack_3a = 0;
      uStack_36 = 0;
      local_32 = 0;
      uStack_2e = 0;
      uStack_2a = 0;
      uStack_28 = 0;
      uStack_26 = 0;
      uStack_24 = 0;
      uStack_22 = 0;
      uStack_20 = 0;
      uStack_1c = 0;
      local_54 = 0x5a4d;
      local_18 = 0x40;
      BVar1 = WriteProcessMemory(param_1,lpBaseAddress,&local_54,0x40,local_1d0);
      pvVar2 = (LPVOID)0x0;
      if ((BVar1 != 0) && (local_1d0[0] == 0x40)) {
        _memset(local_148,0,0xf4);
        local_14c = 0x4550;
        local_138 = 0x200000e0;
        local_146 = 1;
        local_134 = 0x10b;
        BVar1 = WriteProcessMemory(param_1,(LPVOID)((int)lpBaseAddress + 0x40),&local_14c,0xf8,
                                   local_1d0);
        if ((BVar1 != 0) && (local_1d0[0] == 0xf8)) {
          local_16c = 0;
          uStack_160 = 0;
          local_15c = 0;
          uStack_158 = 0;
          uStack_154 = 0;
          uStack_150 = 0;
          local_170 = 0x72756f;
          local_174 = 0x7465642e;
          uStack_168 = 0x160;
          iStack_164 = param_4 + 0x58;
          BVar1 = WriteProcessMemory(param_1,(LPVOID)((int)lpBaseAddress + 0x138),&local_174,0x28,
                                     local_1d0);
          if ((BVar1 != 0) && (local_1d0[0] == 0x28)) {
            local_19c = 0;
            uStack_198 = 0;
            uStack_194 = 0;
            uStack_190 = 0;
            local_1ac = 0;
            uStack_1a8 = 0;
            uStack_1a4 = 0;
            uStack_1a0 = 0;
            local_1bc = 0;
            uStack_1b8 = 0;
            uStack_1b4 = 0;
            uStack_1b0 = 0;
            local_1d0[1] = 0x40;
            local_1d0[2] = 0x727444;
            local_1d0[3] = 0x40;
            local_1d0[4] = param_4 + 0x58;
            BVar1 = WriteProcessMemory(param_1,(LPVOID)((int)lpBaseAddress + 0x160),local_1d0 + 1,
                                       0x40,local_1d0);
            if ((BVar1 != 0) && (local_1d0[0] == 0x40)) {
              local_18c[0] = param_4 + 0x18;
              local_18c[1] = 0;
              local_18c[2] = *param_2;
              uStack_180 = param_2[1];
              uStack_17c = param_2[2];
              uStack_178 = param_2[3];
              BVar1 = WriteProcessMemory(param_1,(LPVOID)((int)lpBaseAddress + 0x1a0),local_18c,0x18
                                         ,local_1d0);
              if ((BVar1 != 0) && (local_1d0[0] == 0x18)) {
                BVar1 = WriteProcessMemory(param_1,(LPVOID)((int)lpBaseAddress + 0x1b8),param_3,
                                           param_4,local_1d0);
                if ((BVar1 != 0) && (local_1d0[0] == param_4)) {
                  SetLastError(0);
                  pvVar2 = (LPVOID)((int)lpBaseAddress + 0x1b8);
                }
              }
            }
          }
        }
      }
      goto LAB_0041aedb;
    }
  }
  pvVar2 = (LPVOID)0x0;
LAB_0041aedb:
  if (DAT_0050e8c0 == (local_14 ^ (uint)local_1d0)) {
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)local_1d0);
}

