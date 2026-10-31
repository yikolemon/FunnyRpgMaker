/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d2a95 */

bool FUN_1800d2a95(HANDLE param_1,LPCVOID param_2,longlong param_3)

{
  BOOL BVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  LPCVOID lpBaseAddress;
  bool bVar6;
  undefined1 auStackY_7a8 [32];
  DWORD local_780;
  DWORD local_77c;
  undefined1 local_778 [1280];
  undefined4 local_278;
  ulonglong local_274;
  undefined8 uStack_26c;
  ushort local_264;
  undefined2 uStack_262;
  undefined2 local_260;
  undefined2 local_25e;
  undefined8 local_25c;
  undefined8 uStack_254;
  undefined4 local_24c;
  ulonglong local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_22c;
  ulonglong uStack_224;
  undefined4 local_21c;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined8 local_1f8;
  undefined4 local_1f0 [2];
  undefined8 local_1e8;
  undefined4 local_170;
  ushort uStack_16a;
  undefined4 uStack_168;
  undefined8 uStack_164;
  ushort local_15c;
  undefined2 local_156;
  undefined8 local_154;
  undefined8 uStack_14c;
  undefined4 local_144;
  uint local_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_124;
  uint uStack_11c;
  undefined4 local_114;
  ulonglong local_110;
  ulonglong local_108;
  undefined8 local_100;
  undefined4 local_f8 [32];
  undefined1 local_78 [60];
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStackY_7a8;
  bVar6 = false;
  FUN_1802a89a0(&local_170,0,0xf8);
  FUN_1802a89a0(local_778,0,0x500);
  BVar1 = ReadProcessMemory(param_1,param_2,local_78,0x40,(SIZE_T *)0x0);
  if (BVar1 != 0) {
    lpBaseAddress = (LPCVOID)((longlong)local_3c + (longlong)param_2);
    BVar1 = ReadProcessMemory(param_1,lpBaseAddress,&local_170,0xf8,(SIZE_T *)0x0);
    if ((BVar1 != 0) && (uStack_16a < 0x21)) {
      BVar1 = ReadProcessMemory(param_1,(LPCVOID)((longlong)lpBaseAddress +
                                                 (ulonglong)local_15c + 0x18),local_778,
                                (ulonglong)uStack_16a * 0x28,(SIZE_T *)0x0);
      bVar6 = false;
      if (BVar1 != 0) {
        local_278 = local_170;
        uStack_26c = uStack_164;
        local_274 = CONCAT62(CONCAT42(uStack_168,uStack_16a),0x8664);
        _local_264 = CONCAT22((short)((uint)_local_15c >> 0x10),0xf0);
        local_260 = 0x20b;
        local_25e = local_156;
        local_25c = local_154;
        uStack_254 = uStack_14c;
        local_24c = local_144;
        local_248 = (ulonglong)local_13c;
        local_240 = local_138;
        local_238 = local_130;
        local_230 = local_128;
        uStack_224 = (ulonglong)uStack_11c;
        local_22c = local_124;
        local_21c = local_114;
        local_218._8_4_ = (int)(local_110 >> 0x20);
        local_218._0_8_ = local_110 & 0xffffffff;
        local_218._12_4_ = 0;
        local_208._8_4_ = (int)(local_108 >> 0x20);
        local_208._0_8_ = local_108 & 0xffffffff;
        local_208._12_4_ = 0;
        local_1f8 = local_100;
        puVar4 = local_f8;
        puVar5 = local_1f0;
        for (lVar3 = 0x20; lVar3 != 0; lVar3 = lVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        local_77c = 0;
        iVar2 = FUN_1800fcb3c(param_1,param_2,uStack_11c,0x40);
        bVar6 = false;
        if (iVar2 != 0) {
          BVar1 = WriteProcessMemory(param_1,lpBaseAddress,&local_278,0x108,(SIZE_T *)0x0);
          if (BVar1 != 0) {
            BVar1 = WriteProcessMemory(param_1,(LPVOID)((longlong)lpBaseAddress +
                                                       (ulonglong)local_264 + 0x18),local_778,
                                       (local_274 >> 0x10 & 0xffff) * 0x28,(SIZE_T *)0x0);
            if (BVar1 != 0) {
              iVar2 = FUN_1800d292e(param_1,param_2,param_3);
              if (iVar2 != 0) {
                if ((*(longlong *)(param_3 + 0x20) != 0) && ((*(byte *)(param_3 + 0x680) & 1) != 0))
                {
                  bVar6 = false;
                  local_1e8 = 0;
                  BVar1 = WriteProcessMemory(param_1,lpBaseAddress,&local_278,0x108,(SIZE_T *)0x0);
                  if (BVar1 == 0) goto LAB_1800d2d50;
                }
                local_780 = 0;
                BVar1 = VirtualProtectEx(param_1,param_2,uStack_224 & 0xffffffff,local_77c,
                                         &local_780);
                bVar6 = BVar1 != 0;
              }
            }
          }
        }
      }
    }
  }
LAB_1800d2d50:
  if (DAT_180402640 == (local_38 ^ (ulonglong)auStackY_7a8)) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_38 ^ (ulonglong)auStackY_7a8);
}

