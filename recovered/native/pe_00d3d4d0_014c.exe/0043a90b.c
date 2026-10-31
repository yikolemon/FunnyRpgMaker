/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043a90b */

void __fastcall FUN_0043a90b(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_20;
  if (*param_2 == 1) {
    piVar2 = (int *)(param_1 + 0x84);
    uVar5 = 0;
    if (4 < *(ushort *)(param_1 + 0x7c)) {
      uVar5 = *(ushort *)(param_1 + 0x7c) - 4;
    }
  }
  else {
    if (*param_2 != 0) {
      if (*(char *)(param_1 + 0x1ce) != '\0') {
        *(undefined4 *)(param_1 + 0x10) = 0x86;
      }
      goto LAB_0043a9cf;
    }
    piVar2 = (int *)(param_1 + 0xa0);
    uVar5 = (uint)*(ushort *)(param_1 + 0x98);
  }
  iVar1 = *piVar2;
  uVar3 = FUN_0044446b(param_1,&local_1c,&local_20,iVar1,&local_18);
  if ((char)uVar3 == '\0') {
    if (((local_1c != 0) && (*(int *)(param_1 + 0x204) == 0)) && (uVar5 != 0)) {
      uVar4 = 0;
      do {
        if (local_18 != uVar4) {
          piVar2 = (int *)(iVar1 + uVar4 * 8);
          *piVar2 = *piVar2 + local_1c;
        }
        uVar4 = uVar4 + 1;
      } while (uVar5 != uVar4);
    }
    if (((local_20 != 0) && (*(int *)(param_1 + 0x204) != 7)) && (uVar5 != 0)) {
      uVar4 = 0;
      do {
        if (local_18 != uVar4) {
          piVar2 = (int *)(iVar1 + 4 + uVar4 * 8);
          *piVar2 = *piVar2 + local_20;
        }
        uVar4 = uVar4 + 1;
      } while (uVar5 != uVar4);
    }
  }
LAB_0043a9cf:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_20)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_20);
  }
  return;
}

