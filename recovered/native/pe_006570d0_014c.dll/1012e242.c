/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012e242 */

undefined4 FUN_1012e242(undefined4 param_1,float *param_2,uint param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_30 [2];
  undefined1 local_2e;
  undefined1 local_2d;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_24;
  undefined1 local_1c [8];
  uint local_14;
  
  iVar1 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)auStack_30;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar1 = *(int *)(iVar1 + 0x14cc);
  uVar4 = 0;
  if (*(char *)(iVar1 + 0xfe) == '\0') {
    uVar5 = -(uint)(param_2[1] != 0.0);
    uVar6 = -(uint)(*param_2 != 0.0);
    FUN_1010c427(local_1c,~uVar6 & DAT_102b94bc | (uint)*param_2 & uVar6,
                 ~uVar5 & DAT_102b94bc | (uint)param_2[1] & uVar5,0,0);
    uVar3 = FUN_101021d4(param_1,0);
    local_2c = *(undefined4 *)(iVar1 + 0x144);
    local_28 = *(undefined4 *)(iVar1 + 0x148);
    local_24 = CONCAT44(local_1c._4_4_ + (float)((ulonglong)*(undefined8 *)(iVar1 + 0x144) >> 0x20),
                        local_1c._0_4_ + (float)*(undefined8 *)(iVar1 + 0x144));
    FUN_1010c810(local_1c,0xbf800000);
    cVar2 = FUN_1010c9d8(&local_2c,uVar3,0,~param_3 >> 2 & 2);
    if (cVar2 != '\0') {
      uVar4 = FUN_1012d77e(&local_2c,uVar3,&local_2d,&local_2e,param_3);
      FUN_100fe25e(&local_2c,uVar3,0);
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)auStack_30)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

