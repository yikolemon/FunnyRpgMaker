/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041a3ce */

bool FUN_0041a3ce(HANDLE param_1,LPCVOID param_2,int param_3,int param_4,uint param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  BOOL BVar4;
  DWORD local_79c;
  undefined4 local_798;
  undefined4 uStack_794;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  uint local_788;
  undefined4 local_784 [6];
  LPCVOID local_76c;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  uint local_110;
  int local_10c [62];
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_79c;
  if (param_2 != (LPCVOID)0x0) {
    iVar2 = FUN_0041a522(param_1,param_2,local_10c);
    if (iVar2 != 0) {
      iVar2 = FUN_0041a5f8(param_1,param_2,local_784);
      bVar1 = false;
      if (iVar2 != 0) {
        if (param_3 == 0) {
          SetLastError(6);
        }
        else {
          uVar3 = FUN_0041a702(param_1,param_2,param_4,param_5);
          if (uVar3 != 0) {
            if (local_76c != (LPCVOID)0x0) {
              local_798 = local_120;
              uStack_794 = uStack_11c;
              uStack_790 = uStack_118;
              uStack_78c = uStack_114;
              local_788 = local_110 & 0xfffffffe;
              BVar4 = FUN_0041b89c(param_1,local_76c,0x14,4,&local_79c);
              if (BVar4 == 0) goto LAB_0041a4e9;
              BVar4 = WriteProcessMemory(param_1,local_76c,&local_798,0x14,(SIZE_T *)0x0);
              if (BVar4 == 0) goto LAB_0041a4e9;
              BVar4 = VirtualProtectEx(param_1,local_76c,0x14,local_79c,&local_79c);
              if (BVar4 == 0) goto LAB_0041a4e9;
            }
            bVar1 = FUN_0041acab(param_1,(undefined4 *)&DAT_004cda94,local_784,0x678);
          }
        }
      }
      goto LAB_0041a4e9;
    }
  }
  SetLastError(0x10dd);
  bVar1 = false;
LAB_0041a4e9:
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_79c)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_79c);
}

