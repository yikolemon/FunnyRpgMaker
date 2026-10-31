/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10192d39 */

int __fastcall FUN_10192d39(int param_1,uint param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_5c;
  uint local_58;
  int local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  uint auStack_44 [11];
  ushort local_16;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_5c;
  local_16 = (ushort)param_2;
  iVar4 = *(int *)(param_1 + 0x48);
  local_54 = *(int *)(iVar4 + 4);
  if ((*(char *)(local_54 + 0x40) == '\0') && ((*(byte *)(iVar4 + 8) & 4) == 0)) {
    FUN_10192f9c();
    local_58 = (uint)local_16;
    if (((local_16 != *(ushort *)(iVar4 + 0x24)) || (*(char *)(iVar4 + 0x29) != '\x01')) ||
       (iVar2 = FUN_10195843(), iVar2 == 0)) {
      local_50 = *(uint *)(iVar4 + 0x18);
      local_5c = param_1;
      local_4c = param_2;
      if (local_50 != 0) {
        local_48 = *(int *)(iVar4 + 0x20);
        local_50 = local_50 << 2;
        iVar4 = *(int *)(param_1 + 0x4c);
        uVar3 = 0;
        do {
          iVar2 = *(int *)(local_48 + uVar3);
          iVar5 = *(int *)(iVar2 + 0x74);
          if (iVar5 == 0) {
            iVar5 = *(int *)(local_54 + 0x294);
          }
          if ((*(int *)(iVar2 + 0x40) == 0) || (cVar1 = FUN_10195a2c(), cVar1 != '\0')) {
            if (param_3 == (undefined4 *)0x0) {
              auStack_44[8] = 0;
              auStack_44[9] = 0;
              auStack_44[4] = 0;
              auStack_44[5] = 0;
              auStack_44[6] = 0;
              auStack_44[7] = 0;
              auStack_44[0] = 0;
              auStack_44[1] = 0;
              auStack_44[2] = 0;
              auStack_44[3] = 0;
              auStack_44[10] = 0xffffffff;
              cVar1 = (**(code **)(iVar5 + 0x20))
                                (local_54,iVar2,local_5c,iVar4,local_58,auStack_44,0);
              if (cVar1 != '\0') {
                auStack_44[0] = uVar3 & 0x3c | auStack_44[0] & 3 | (local_4c & 0xffff) << 6;
                iVar2 = FUN_1019032a(local_54,local_5c,iVar2,auStack_44);
                goto LAB_10192ecb;
              }
            }
            else {
              iVar6 = local_5c;
              cVar1 = (**(code **)(iVar5 + 0x20))(local_54,iVar2,local_5c,iVar4,local_58,0,param_3);
              if (cVar1 != '\0') {
                FUN_10192b7a(iVar6,local_5c,iVar2,local_58,*param_3);
                iVar2 = 0;
                goto LAB_10192ecb;
              }
            }
          }
          iVar4 = iVar4 + *(int *)(iVar5 + 0x24);
          uVar3 = uVar3 + 4;
        } while (local_50 != uVar3);
      }
      iVar4 = local_5c;
      iVar2 = 0;
      if ((*(byte *)(local_5c + 0x3f) & 8) == 0) {
        if (*(int *)(local_5c + 0x30) == -1) {
          FUN_10195778();
        }
        uVar3 = local_58;
        FUN_10192a7d();
        *(undefined4 *)(*(int *)(iVar4 + 8) + uVar3 * 4) = *(undefined4 *)(iVar4 + 0xc);
        *(undefined2 *)(*(int *)(iVar4 + 0x20) + uVar3 * 2) = 0xfffe;
      }
    }
  }
  else {
    iVar2 = 0;
    if ((*(int *)(param_1 + 0x30) == -1) && ((*(byte *)(param_1 + 0x3f) & 8) == 0)) {
      FUN_10195778();
    }
  }
LAB_10192ecb:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_5c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar2;
}

