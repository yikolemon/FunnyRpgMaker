/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14044b720 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14044b720(undefined8 param_1,ulonglong *param_2,uint param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_2c8 [32];
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  uint local_2a0 [2];
  ulonglong local_298;
  undefined4 local_290;
  uint local_28c;
  undefined4 uStack_288;
  undefined4 local_284;
  uint local_280;
  uint local_278 [5];
  ulonglong local_264;
  undefined4 local_25c;
  uint local_258;
  ulonglong local_28;
  
  local_28 = ram0x000140613b10 ^ (ulonglong)auStack_2c8;
  uVar3 = param_3 & 0xfffffffe;
  if (((param_3 & 1) == 0) || ((param_3 & 4) == 0)) {
    if ((((param_3 & 2) != 0) && (param_4 != 0xffffffff)) &&
       (((param_4 >> 10 & 1) == 0 || ((param_3 & 1) == 0)))) {
      uVar3 = param_3 & 0xfffffffc;
      *(uint *)(param_2 + 2) = param_4;
    }
    if (uVar3 == 0) goto LAB_14044b9f9;
    if (((uVar3 & 0x2a) != 0) &&
       (((param_4 == 0xffffffff || ((param_4 >> 10 & 1) == 0)) || ((param_3 & 1) == 0)))) {
      iVar1 = (*ram0x00014059df20)(param_1,0,local_2a0);
      if (iVar1 == 0) {
        iVar1 = (*_DAT_14059df60)();
        if (iVar1 != 0x20) goto LAB_14044b9f9;
        lVar2 = (*(code *)s_GetFileAttributesExW_14059de28._0_8_)(param_1,local_278);
        if (lVar2 == -1) {
          (*_DAT_14059df60)();
          goto LAB_14044b9f9;
        }
        (*(code *)s_GetExitCodeThread_14059de14._4_8_)(lVar2);
        local_28c = (uint)local_264;
        uStack_288 = (undefined4)(local_264 >> 0x20);
      }
      else {
        local_264 = CONCAT44(uStack_288,local_28c);
        local_278[0] = local_2a0[0];
        local_258 = local_280;
        local_25c = local_284;
      }
      if (((param_3 & 1) == 0) || ((local_278[0] & 0x400) == 0)) {
        *(uint *)(param_2 + 2) = local_278[0];
        param_2[1] = CONCAT44(local_25c,local_258);
        *param_2 = local_264 & 0xffffffff00000000 | (ulonglong)local_28c;
        uVar4 = uVar3 & 0xffffffd5;
        if (((local_278[0] & 0x400) == 0) && ((uVar3 & 4) != 0)) {
          *(undefined4 *)((longlong)param_2 + 0x14) = 0;
          uVar4 = uVar3 & 0xffffffd1;
        }
        uVar3 = uVar4;
        if (uVar3 == 0) goto LAB_14044b9f9;
      }
    }
    iVar1 = FUN_14044b190(&local_2a8,param_1,0x80,(((byte)param_3 & 1 ^ 1) + 0x10) * 0x200000);
    if (iVar1 == 0) {
      lVar2 = CONCAT44(uStack_2a4,local_2a8);
      uVar4 = uVar3;
      if ((uVar3 & 0x26) != 0) {
        iVar1 = (*(code *)s_GetLogicalProcessorInformationEx_14059df28._16_8_)
                          (lVar2,0,local_2a0,0x28);
        if (iVar1 == 0) {
          (*_DAT_14059df60)();
          if ((lVar2 != -1) && (iVar1 = (*ram0x00014059dd60)(lVar2), iVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          goto LAB_14044b9f9;
        }
        uVar4 = uVar3 & 0xffffffdd;
        *(uint *)(param_2 + 2) = local_280;
        *param_2 = CONCAT44(local_28c,local_290);
        if ((uVar3 & 4) != 0) {
          if ((local_280 >> 10 & 1) == 0) {
            *(undefined4 *)((longlong)param_2 + 0x14) = 0;
          }
          else {
            iVar1 = (*(code *)s_GetLogicalProcessorInformationEx_14059df28._16_8_)
                              (lVar2,9,&local_2a8,8);
            if (iVar1 == 0) {
              (*_DAT_14059df60)();
              if ((lVar2 != -1) && (iVar1 = (*ram0x00014059dd60)(lVar2), iVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              goto LAB_14044b9f9;
            }
            *(undefined4 *)((longlong)param_2 + 0x14) = uStack_2a4;
          }
          uVar4 = uVar3 & 0xffffffd9;
        }
      }
      if ((uVar4 & 0x18) != 0) {
        iVar1 = (*(code *)s_GetLogicalProcessorInformationEx_14059df28._16_8_)
                          (lVar2,1,local_2a0,0x18);
        if (iVar1 == 0) {
          (*_DAT_14059df60)();
          if ((lVar2 != -1) && (iVar1 = (*ram0x00014059dd60)(lVar2), iVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          goto LAB_14044b9f9;
        }
        uVar4 = uVar4 & 0xffffffe7;
        param_2[1] = local_298;
        *(undefined4 *)(param_2 + 3) = local_290;
      }
      if (uVar4 != 0) {
        if ((lVar2 == -1) || (iVar1 = (*ram0x00014059dd60)(lVar2), iVar1 != 0)) goto LAB_14044b9f9;
        goto LAB_14044ba3b;
      }
      if (lVar2 == -1) goto LAB_14044b9f9;
      iVar1 = (*ram0x00014059dd60)(lVar2);
    }
    else {
      if (CONCAT44(uStack_2a4,local_2a8) == -1) goto LAB_14044b9f9;
      iVar1 = (*ram0x00014059dd60)();
    }
    if (iVar1 == 0) {
LAB_14044ba3b:
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
LAB_14044b9f9:
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_28 ^ (ulonglong)auStack_2c8);
}

