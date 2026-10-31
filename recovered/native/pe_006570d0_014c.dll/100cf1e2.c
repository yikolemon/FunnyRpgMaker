/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cf1e2 */

undefined4
FUN_100cf1e2(HANDLE param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  BOOL BVar2;
  undefined4 uVar3;
  DWORD local_79c;
  undefined4 local_798;
  undefined4 uStack_794;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  uint local_788;
  undefined1 local_784 [24];
  LPVOID local_76c;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  uint local_110;
  undefined1 local_10c [248];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_79c;
  if (param_2 != 0) {
    iVar1 = FUN_100cf336(local_10c);
    if (iVar1 != 0) {
      iVar1 = FUN_100cf40c(local_784);
      uVar3 = 0;
      if (iVar1 != 0) {
        if (param_3 == 0) {
          SetLastError(6);
        }
        else {
          iVar1 = FUN_100cf516(param_4,param_5);
          if (iVar1 != 0) {
            if (local_76c != (LPVOID)0x0) {
              local_798 = local_120;
              uStack_794 = uStack_11c;
              uStack_790 = uStack_118;
              uStack_78c = uStack_114;
              local_788 = local_110 & 0xfffffffe;
              iVar1 = FUN_100f8631(param_1,local_76c,0x14,4,&local_79c);
              if (iVar1 == 0) goto LAB_100cf2fd;
              BVar2 = WriteProcessMemory(param_1,local_76c,&local_798,0x14,(SIZE_T *)0x0);
              if (BVar2 == 0) goto LAB_100cf2fd;
              BVar2 = VirtualProtectEx(param_1,local_76c,0x14,local_79c,&local_79c);
              if (BVar2 == 0) goto LAB_100cf2fd;
            }
            uVar3 = FUN_100cfabf(param_1,&DAT_10296df8,local_784,0x678);
          }
        }
      }
      goto LAB_100cf2fd;
    }
  }
  SetLastError(0x10dd);
  uVar3 = 0;
LAB_100cf2fd:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_79c)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

