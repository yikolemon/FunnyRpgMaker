/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00495060 */

void __cdecl
FUN_00495060(EHExceptionRecord *param_1,EHRegistrationNode *param_2,undefined4 param_3,void *param_4
            ,_s_FuncInfo *param_5,char param_6,int param_7,EHRegistrationNode *param_8)

{
  PVOID pvVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  EHRegistrationNode *pEVar5;
  void *pvVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint local_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  int *local_4c;
  uint local_48 [2];
  uint local_40;
  _s_FuncInfo *local_3c;
  undefined4 local_38;
  int *local_34;
  int *local_30;
  int local_2c;
  int local_28;
  uint *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  undefined4 local_8;
  
  local_10 = __FrameHandler3::GetCurrentState(param_2,param_4,param_5);
  if ((local_10 < -1) || (param_5->maxState <= local_10)) goto LAB_0049545b;
  if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x10) == 3)) &&
     ((((iVar8 = *(int *)(param_1 + 0x14), iVar8 == 0x19930520 || (iVar8 == 0x19930521)) ||
       (iVar8 == 0x19930522)) && (*(int *)(param_1 + 0x1c) == 0)))) {
    pvVar1 = FUN_00494580();
    if (*(int *)((int)pvVar1 + 0x10) == 0) {
      return;
    }
    pvVar1 = FUN_00494580();
    param_1 = *(EHExceptionRecord **)((int)pvVar1 + 0x10);
    pvVar1 = FUN_00494580();
    local_8 = *(undefined4 *)((int)pvVar1 + 0x14);
    if ((param_1 == (EHExceptionRecord *)0x0) ||
       ((((*(int *)param_1 == -0x1f928c9d && (*(int *)(param_1 + 0x10) == 3)) &&
         ((iVar8 = *(int *)(param_1 + 0x14), iVar8 == 0x19930520 ||
          ((iVar8 == 0x19930521 || (iVar8 == 0x19930522)))))) && (*(int *)(param_1 + 0x1c) == 0))))
    goto LAB_0049545b;
    pvVar1 = FUN_00494580();
    if (*(int *)((int)pvVar1 + 0x1c) != 0) {
      pvVar1 = FUN_00494580();
      piVar10 = *(int **)((int)pvVar1 + 0x1c);
      pvVar1 = FUN_00494580();
      *(undefined4 *)((int)pvVar1 + 0x1c) = 0;
      uVar2 = FUN_00494b00((int)param_1,piVar10);
      if ((char)uVar2 == '\0') {
        iVar8 = 0;
        if (0 < *piVar10) {
          do {
            uVar3 = FUN_004857e0(*(int *)(piVar10[1] + 4 + iVar8 * 0x10) + 4,0x51b7f8);
            if (uVar3 == 0) {
              FUN_004854d0((int *)param_1);
              FUN_00494840(local_48);
                    /* WARNING: Subroutine does not return */
              FUN_00484ff0((int *)local_48,&DAT_0050cf4c);
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < *piVar10);
        }
        goto LAB_00495416;
      }
    }
  }
  else {
    local_8 = param_3;
  }
  local_3c = param_5;
  local_38 = 0;
  if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x10) == 3)) &&
     ((iVar8 = *(int *)(param_1 + 0x14), iVar8 == 0x19930520 ||
      ((iVar8 == 0x19930521 || (iVar8 == 0x19930522)))))) {
    if (param_5->nTryBlocks != 0) {
      FUN_00485070(&local_4c,&local_3c,local_10,param_4,(int)param_5,param_7);
      local_34 = local_4c;
      local_c = local_48[0];
      if (local_48[0] < local_40) {
        do {
          iVar8 = *(int *)(*local_34 + 0x10);
          local_18 = *(int *)(iVar8 + local_c * 0x14);
          local_1c = *(int *)(iVar8 + 4 + local_c * 0x14);
          local_2c = *(int *)(iVar8 + 0xc + local_c * 0x14);
          local_20 = *(int *)(iVar8 + 0x10 + local_c * 0x14);
          if (((local_18 <= local_10) && (local_10 <= local_1c)) && (local_14 = 0, local_2c != 0)) {
            puVar7 = *(uint **)(param_1 + 0x1c);
            iVar8 = *(int *)puVar7[3];
            local_30 = (int *)puVar7[3] + 1;
            local_28 = iVar8;
            local_24 = puVar7;
            do {
              puVar4 = (uint *)(local_14 * 0x10 + local_20);
              local_5c = *puVar4;
              uStack_58 = puVar4[1];
              uStack_54 = puVar4[2];
              uStack_50 = puVar4[3];
              iVar9 = iVar8;
              piVar10 = local_30;
              for (; 0 < iVar9; iVar9 = iVar9 + -1) {
                puVar4 = (uint *)*piVar10;
                iVar8 = FUN_00494d10(&local_5c,(byte *)puVar4,puVar7);
                if (iVar8 != 0) {
                  if (puVar4 != (uint *)0x0) {
                    FUN_00494f90((int)param_1,(uint *)param_2,&local_5c,puVar4);
                  }
                  pEVar5 = param_2;
                  if (param_8 != (EHRegistrationNode *)0x0) {
                    pEVar5 = param_8;
                  }
                  _UnwindNestedFrames(pEVar5,param_1);
                  FUN_00494690(param_2,param_4,param_5,local_18);
                  FUN_004a35d0((int)param_2,param_4,param_5,local_1c + 1);
                  pvVar6 = (void *)FUN_004948a0((int)param_1,(int)param_2,local_8,param_5,uStack_50,
                                                param_7,0x100);
                  if (pvVar6 != (void *)0x0) {
                    _JumpToContinuation(pvVar6,param_2);
                  }
                  goto LAB_00495347;
                }
                piVar10 = piVar10 + 1;
                puVar7 = local_24;
                iVar8 = local_28;
              }
              local_14 = local_14 + 1;
            } while (local_14 != local_2c);
          }
LAB_00495347:
          local_c = local_c + 1;
        } while (local_c < local_40);
      }
    }
    if (param_6 != '\0') {
      FUN_004854d0((int *)param_1);
    }
    if (0x19930520 < (param_5->magicNumber_and_bbtFlags & 0x1fffffff)) {
      uVar3 = (uint)param_5->EHFlags >> 2;
      if (param_5->pESTypeList == (ESTypeList *)0x0) {
        if (((uVar3 & 1) != 0) && (param_7 == 0)) {
LAB_00495403:
          pvVar1 = FUN_00494580();
          *(EHExceptionRecord **)((int)pvVar1 + 0x10) = param_1;
          pvVar1 = FUN_00494580();
          *(undefined4 *)((int)pvVar1 + 0x14) = local_8;
LAB_00495416:
                    /* WARNING: Subroutine does not return */
          FUN_00493bd8();
        }
      }
      else {
        if ((uVar3 & 1) != 0) goto LAB_00495403;
        uVar2 = FUN_00494b00((int)param_1,&param_5->pESTypeList->nCount);
        if ((char)uVar2 == '\0') {
          pvVar1 = FUN_00494580();
          *(EHExceptionRecord **)((int)pvVar1 + 0x10) = param_1;
          pvVar1 = FUN_00494580();
          *(undefined4 *)((int)pvVar1 + 0x14) = local_8;
          pEVar5 = param_2;
          if (param_8 != (EHRegistrationNode *)0x0) {
            pEVar5 = param_8;
          }
          _UnwindNestedFrames(pEVar5,param_1);
          FUN_004947e0(param_2,param_4,param_5);
          FUN_00494800((int)param_5);
          FUN_00494ba0();
          goto LAB_0049545b;
        }
      }
    }
  }
  else if (param_5->nTryBlocks != 0) {
    if (param_6 != '\0') goto LAB_0049545b;
    FUN_00495470(param_1,param_2,local_8,param_4,param_5,local_10,param_7,param_8);
  }
  pvVar1 = FUN_00494580();
  if (*(int *)((int)pvVar1 + 0x1c) == 0) {
    return;
  }
LAB_0049545b:
                    /* WARNING: Subroutine does not return */
  FUN_004903c8();
}

