/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027882e */

void FUN_1027882e(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int local_24;
  int *local_20 [2];
  char local_18;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined4 local_10;
  undefined2 local_c;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  FUN_1025be8b(param_3);
  if ((param_1 < -1) || (0xff < param_1)) {
    if (*(short *)(*local_20[0] + (param_1 >> 8 & 0xffU) * 2) < 0) {
      local_12 = 0;
      uVar1 = 2;
      local_14 = (char)((uint)param_1 >> 8);
      local_13 = (char)param_1;
    }
    else {
      local_13 = 0;
      uVar1 = 1;
      local_14 = (char)param_1;
    }
    local_10 = 0;
    local_c = 0;
    iVar2 = FUN_10276080(local_20,1,&local_14,uVar1,&local_10,local_20[0][2],1);
    if (iVar2 == 0) {
      if (local_18 != '\0') {
        *(uint *)(local_24 + 0x350) = *(uint *)(local_24 + 0x350) & 0xfffffffd;
      }
      goto LAB_102788ed;
    }
  }
  if (local_18 != '\0') {
    *(uint *)(local_24 + 0x350) = *(uint *)(local_24 + 0x350) & 0xfffffffd;
  }
LAB_102788ed:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

