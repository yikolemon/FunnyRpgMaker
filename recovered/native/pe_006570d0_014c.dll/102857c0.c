/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102857c0 */

int FUN_102857c0(ushort *param_1,ushort *param_2,int param_3,undefined4 *param_4)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int local_18;
  undefined *local_14;
  undefined *local_10;
  char local_c;
  uint local_8;
  
  if (param_1 == (ushort *)0x0) {
    puVar2 = (undefined4 *)FUN_10268ffd();
    *puVar2 = 0x16;
    FUN_10273ea8();
    return 0x7fffffff;
  }
  if (param_2 != (ushort *)0x0) {
    if (param_3 != 0) {
      local_c = '\0';
      if (param_4 == (undefined4 *)0x0) {
        if (DAT_103a5004 == 0) {
          local_14 = PTR_PTR_1039b4c0;
          local_10 = PTR_DAT_1039b4c4;
        }
        else {
          local_18 = FUN_102743cd();
          local_14 = *(undefined **)(local_18 + 0x4c);
          local_10 = *(undefined **)(local_18 + 0x48);
          ___acrt_update_locale_info(local_18,&local_14);
          FUN_1027494a(local_18,&local_10);
          if ((*(uint *)(local_18 + 0x350) & 2) == 0) {
            *(uint *)(local_18 + 0x350) = *(uint *)(local_18 + 0x350) | 2;
            local_c = '\x01';
          }
        }
      }
      else {
        local_14 = (undefined *)*param_4;
        local_10 = (undefined *)param_4[1];
      }
      if (*(int *)(local_14 + 0xa8) == 0) {
        iVar3 = FUN_10285980(param_1,param_2,param_3);
      }
      else {
        do {
          uVar1 = *param_1;
          uVar4 = (uint)uVar1;
          param_1 = param_1 + 1;
          if (uVar1 < 0x100) {
            if (((&DAT_10323d3a)[(uVar4 & 0xff) * 2] & 1) != 0) {
              uVar4 = (uint)*(byte *)((uVar4 & 0xff) + *(int *)(local_14 + 0x94));
            }
            uVar4 = uVar4 & 0xff;
          }
          else {
            uVar4 = FUN_1027aec3(uVar4,&local_14);
            uVar4 = uVar4 & 0xffff;
          }
          uVar1 = *param_2;
          uVar5 = (uint)uVar1;
          param_2 = param_2 + 1;
          local_8 = uVar4;
          if (uVar1 < 0x100) {
            if (((&DAT_10323d3a)[(uVar5 & 0xff) * 2] & 1) != 0) {
              uVar5 = (uint)*(byte *)((uVar5 & 0xff) + *(int *)(local_14 + 0x94));
            }
            uVar5 = uVar5 & 0xff;
          }
          else {
            uVar5 = FUN_1027aec3(uVar5,&local_14);
            uVar5 = uVar5 & 0xffff;
          }
          iVar3 = uVar4 - uVar5;
        } while (((iVar3 == 0) && (local_8 != 0)) && (param_3 = param_3 + -1, param_3 != 0));
      }
      if (local_c != '\0') {
        *(uint *)(local_18 + 0x350) = *(uint *)(local_18 + 0x350) & 0xfffffffd;
      }
      return iVar3;
    }
    return 0;
  }
  puVar2 = (undefined4 *)FUN_10268ffd();
  *puVar2 = 0x16;
  FUN_10273ea8();
  return 0x7fffffff;
}

