/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043a74d */

void __fastcall FUN_0043a74d(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_24;
  iVar1 = *(int *)(param_1 + 0x100);
  if (*(int *)(param_1 + 0x24) < iVar1) {
    if (*(char *)(param_1 + 0x1ce) != '\0') {
      *(undefined4 *)(param_1 + 0x10) = 0x81;
    }
  }
  else {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - iVar1;
    uVar3 = FUN_0044446b(param_1,&local_18,&local_1c,0,(uint *)0x0);
    if ((char)uVar3 != '\0') goto LAB_0043a7aa;
    if (iVar1 != 0) {
      local_20 = local_1c;
      local_24 = local_18;
      iVar4 = 0;
      do {
        uVar2 = *(uint *)(param_2 + -4 + iVar4 * 4);
        if (uVar2 < *(ushort *)(param_1 + 0x60)) {
          FUN_00444530(param_1,uVar2,local_24,local_20);
        }
        else if (*(char *)(param_1 + 0x1ce) != '\0') {
          *(undefined4 *)(param_1 + 0x10) = 0x86;
          goto LAB_0043a7aa;
        }
        iVar4 = iVar4 + -1;
      } while (-iVar4 != iVar1);
    }
  }
  *(undefined4 *)(param_1 + 0x100) = 1;
LAB_0043a7aa:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_24);
  }
  return;
}

