/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10272da0 */

void FUN_10272da0(EHExceptionRecord *param_1,EHRegistrationNode *param_2,undefined4 param_3,
                 void *param_4,_s_FuncInfo *param_5,char param_6,int param_7,
                 EHRegistrationNode *param_8)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  EHRegistrationNode *pEVar5;
  void *pvVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int *local_4c;
  uint local_48 [2];
  uint local_40;
  _s_FuncInfo *local_3c;
  undefined4 local_38;
  int *local_34;
  int *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  undefined4 local_8;
  
  local_10 = __FrameHandler3::GetCurrentState(param_2,param_4,param_5);
  if ((local_10 < -1) || (param_5->maxState <= local_10)) goto LAB_1027319b;
  if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x10) == 3)) &&
     ((((iVar2 = *(int *)(param_1 + 0x14), iVar2 == 0x19930520 || (iVar2 == 0x19930521)) ||
       (iVar2 == 0x19930522)) && (*(int *)(param_1 + 0x1c) == 0)))) {
    iVar2 = FUN_10272260();
    if (*(int *)(iVar2 + 0x10) == 0) {
      return;
    }
    iVar2 = FUN_10272260();
    param_1 = *(EHExceptionRecord **)(iVar2 + 0x10);
    iVar2 = FUN_10272260();
    local_8 = *(undefined4 *)(iVar2 + 0x14);
    if ((param_1 == (EHExceptionRecord *)0x0) ||
       ((((*(int *)param_1 == -0x1f928c9d && (*(int *)(param_1 + 0x10) == 3)) &&
         ((iVar2 = *(int *)(param_1 + 0x14), iVar2 == 0x19930520 ||
          ((iVar2 == 0x19930521 || (iVar2 == 0x19930522)))))) && (*(int *)(param_1 + 0x1c) == 0))))
    goto LAB_1027319b;
    iVar2 = FUN_10272260();
    if (*(int *)(iVar2 + 0x1c) != 0) {
      iVar2 = FUN_10272260();
      piVar10 = *(int **)(iVar2 + 0x1c);
      iVar2 = FUN_10272260();
      *(undefined4 *)(iVar2 + 0x1c) = 0;
      cVar1 = FUN_10272840(param_1,piVar10);
      if (cVar1 == '\0') {
        iVar2 = 0;
        if (0 < *piVar10) {
          do {
            iVar3 = FUN_10259080(*(int *)(piVar10[1] + 4 + iVar2 * 0x10) + 4,0x10387c34);
            if (iVar3 == 0) {
              FUN_10258760(param_1,1);
              FUN_1006a3f8();
                    /* WARNING: Subroutine does not return */
              FUN_102586e0(local_48,&DAT_10367c68);
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < *piVar10);
        }
        goto LAB_10273156;
      }
    }
  }
  else {
    local_8 = param_3;
  }
  local_3c = param_5;
  local_38 = 0;
  if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x10) == 3)) &&
     ((iVar2 = *(int *)(param_1 + 0x14), iVar2 == 0x19930520 ||
      ((iVar2 == 0x19930521 || (iVar2 == 0x19930522)))))) {
    if (param_5->nTryBlocks != 0) {
      FUN_102589b0(&local_4c,&local_3c,local_10,param_4,param_5,param_7);
      local_34 = local_4c;
      local_c = local_48[0];
      if (local_48[0] < local_40) {
        do {
          iVar2 = *(int *)(*local_34 + 0x10);
          local_18 = *(int *)(iVar2 + local_c * 0x14);
          local_1c = *(int *)(iVar2 + 4 + local_c * 0x14);
          local_2c = *(int *)(iVar2 + 0xc + local_c * 0x14);
          local_20 = *(int *)(iVar2 + 0x10 + local_c * 0x14);
          if (((local_18 <= local_10) && (local_10 <= local_1c)) && (local_14 = 0, local_2c != 0)) {
            iVar2 = *(int *)(param_1 + 0x1c);
            iVar3 = **(int **)(iVar2 + 0xc);
            local_30 = *(int **)(iVar2 + 0xc) + 1;
            local_28 = iVar3;
            local_24 = iVar2;
            do {
              puVar4 = (undefined4 *)(local_14 * 0x10 + local_20);
              local_5c = *puVar4;
              uStack_58 = puVar4[1];
              uStack_54 = puVar4[2];
              uStack_50 = puVar4[3];
              iVar9 = iVar3;
              piVar10 = local_30;
              for (; 0 < iVar9; iVar9 = iVar9 + -1) {
                iVar3 = *piVar10;
                iVar2 = FUN_10272a50(&local_5c,iVar3,iVar2);
                if (iVar2 != 0) {
                  if (iVar3 != 0) {
                    FUN_10272cd0(param_1,param_2,&local_5c,iVar3);
                  }
                  pEVar5 = param_2;
                  if (param_8 != (EHRegistrationNode *)0x0) {
                    pEVar5 = param_8;
                  }
                  _UnwindNestedFrames(pEVar5,param_1);
                  FUN_10272460(param_2,param_4,param_5,local_18);
                  FUN_10283410(param_2,param_4,param_5,local_1c + 1);
                  pvVar6 = (void *)FUN_102725e0(param_1,param_2,local_8,param_5,uStack_50,param_7,
                                                0x100);
                  if (pvVar6 != (void *)0x0) {
                    _JumpToContinuation(pvVar6,param_2);
                  }
                  goto LAB_10273087;
                }
                piVar10 = piVar10 + 1;
                iVar2 = local_24;
                iVar3 = local_28;
              }
              local_14 = local_14 + 1;
            } while (local_14 != local_2c);
          }
LAB_10273087:
          local_c = local_c + 1;
        } while (local_c < local_40);
      }
    }
    if (param_6 != '\0') {
      FUN_10258760(param_1,1);
    }
    if (0x19930520 < (param_5->magicNumber_and_bbtFlags & 0x1fffffff)) {
      uVar7 = (uint)param_5->EHFlags >> 2;
      if (param_5->pESTypeList == (ESTypeList *)0x0) {
        if (((uVar7 & 1) != 0) && (param_7 == 0)) {
LAB_10273143:
          iVar2 = FUN_10272260();
          *(EHExceptionRecord **)(iVar2 + 0x10) = param_1;
          iVar2 = FUN_10272260();
          *(undefined4 *)(iVar2 + 0x14) = local_8;
LAB_10273156:
                    /* WARNING: Subroutine does not return */
          FUN_102716bc();
        }
      }
      else {
        if ((uVar7 & 1) != 0) goto LAB_10273143;
        cVar1 = FUN_10272840(param_1,param_5->pESTypeList);
        if (cVar1 == '\0') {
          iVar2 = FUN_10272260();
          *(EHExceptionRecord **)(iVar2 + 0x10) = param_1;
          iVar2 = FUN_10272260();
          *(undefined4 *)(iVar2 + 0x14) = local_8;
          pEVar5 = param_2;
          if (param_8 != (EHRegistrationNode *)0x0) {
            pEVar5 = param_8;
          }
          _UnwindNestedFrames(pEVar5,param_1);
          FUN_102725b0(param_2,param_4,param_5);
          uVar8 = FUN_102725d0(param_5);
          FUN_102728e0(uVar8);
          goto LAB_1027319b;
        }
      }
    }
  }
  else if (param_5->nTryBlocks != 0) {
    if (param_6 != '\0') goto LAB_1027319b;
    FUN_102731b0(param_1,param_2,local_8,param_4,param_5,local_10,param_7,param_8);
  }
  iVar2 = FUN_10272260();
  if (*(int *)(iVar2 + 0x1c) == 0) {
    return;
  }
LAB_1027319b:
                    /* WARNING: Subroutine does not return */
  _abort();
}

